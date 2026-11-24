// keeper.cpp — part of oc-multi-account.

#include "ocmultiaccount/keeper.h"

#include <cstdio>

namespace ocmultiaccount {

Keeper::Keeper(const std::string& config_path)
    : config_path_(config_path) {}

void Keeper::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Keeper::run() {
    if (verbose_) std::fprintf(stderr, "[oc-multi-account] keeper: run\n");
    // core logic lives here
    return true;
}

}  // namespace ocmultiaccount
