// accounts.cpp — part of oc-multi-account.

#include "ocmultiaccount/accounts.h"

#include <cstdio>

namespace ocmultiaccount {

Accounts::Accounts(const std::string& config_path)
    : config_path_(config_path) {}

void Accounts::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Accounts::run() {
    if (verbose_) std::fprintf(stderr, "[oc-multi-account] accounts: run\n");
    // core logic lives here
    return true;
}

}  // namespace ocmultiaccount
