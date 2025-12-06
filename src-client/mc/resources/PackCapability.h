#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackCapability {
public:
    // PackCapability inner types declare
    // clang-format off
    struct ValidationResult;
    // clang-format on

    // PackCapability inner types define
    enum class TrustLevel : uint {};

    struct ValidationResult {
    public:
        // ValidationResult inner types declare
        // clang-format off
        struct Failed;
        struct NotFound;
        struct Succeeded;
        // clang-format on

        // ValidationResult inner types define
        struct Failed {};

        struct NotFound {};

        struct Succeeded {};
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8a1c1c;
    ::ll::UntypedStorage<8, 64> mUnk2bab95;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCapability& operator=(PackCapability const&);
    PackCapability(PackCapability const&);
    PackCapability();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackCapability();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
