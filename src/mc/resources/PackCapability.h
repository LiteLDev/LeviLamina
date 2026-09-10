#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackCapabilityTrustLevel.h"

class PackCapability {
public:
    // PackCapability inner types declare
    // clang-format off
    struct ValidationResult;
    // clang-format on

    // PackCapability inner types define
    struct ValidationResult {
    public:
        // ValidationResult inner types declare
        // clang-format off
        struct Failed;
        struct NotFound;
        struct Succeeded;
        // clang-format on

        // ValidationResult inner types define
        struct Failed {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 16> mUnkf8fbdc;
            // NOLINTEND

        public:
            // prevent constructor by default
            Failed& operator=(Failed const&);
            Failed(Failed const&);
            Failed();
        };

        struct NotFound {};

        struct Succeeded {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4>  mUnkc8a8bf;
            ::ll::UntypedStorage<8, 16> mUnkebceb3;
            // NOLINTEND

        public:
            // prevent constructor by default
            Succeeded& operator=(Succeeded const&);
            Succeeded(Succeeded const&);
            Succeeded();
        };
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcc441d;
    ::ll::UntypedStorage<8, 64> mUnk2bab95;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCapability& operator=(PackCapability const&);
    PackCapability(PackCapability const&);
    PackCapability();
};
