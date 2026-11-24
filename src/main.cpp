// main.cpp — entry point. Wires config and subsystems together.

#include "ocmultiaccount/settings.h"
#include "ocmultiaccount/accounts.h"
#include "ocmultiaccount/trials.h"
#include "ocmultiaccount/keeper.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    ocmultiaccount::Settings settings = ocmultiaccount::Settings::load_default();
    ocmultiaccount::Accounts accounts(settings.store_path);
    ocmultiaccount::Trials trials(settings.store_path);
    ocmultiaccount::Keeper keeper(settings.store_path);
    std::fprintf(stderr, "[oc-multi-account] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
