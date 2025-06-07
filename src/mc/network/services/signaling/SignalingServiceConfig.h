#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SignalingServiceConfig {
public:
    // SignalingServiceConfig inner types declare
    // clang-format off
    struct Token;
    // clang-format on

    // SignalingServiceConfig inner types define
    struct Token : public ::std::string {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Token();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk156521;
    ::ll::UntypedStorage<8, 32> mUnk58142d;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingServiceConfig& operator=(SignalingServiceConfig const&);
    SignalingServiceConfig(SignalingServiceConfig const&);
    SignalingServiceConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SignalingServiceConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
