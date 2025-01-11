#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FranchiseSignalServiceConfig {
public:
    // FranchiseSignalServiceConfig inner types declare
    // clang-format off
    struct Token;
    struct Url;
    // clang-format on

    // FranchiseSignalServiceConfig inner types define
    struct Url : public ::std::string {};

    struct Token : public ::std::string {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbd6a60;
    ::ll::UntypedStorage<8, 32> mUnk4258f0;
    // NOLINTEND

public:
    // prevent constructor by default
    FranchiseSignalServiceConfig& operator=(FranchiseSignalServiceConfig const&);
    FranchiseSignalServiceConfig(FranchiseSignalServiceConfig const&);
    FranchiseSignalServiceConfig();
};
