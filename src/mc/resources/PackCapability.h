#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackCapability {
public:
    // PackCapability inner types declare
    // clang-format off
    struct ValidationResult;
    // clang-format on

    // PackCapability inner types define
    enum class TrustLevel : int {
        NotTrusted = 0,
        Trusted    = 1,
    };

    struct ValidationResult {
    public:
        // ValidationResult inner types declare
        // clang-format off
        struct Failed;
        struct NotFound;
        struct Succeeded;
        // clang-format on

        // ValidationResult inner types define
        struct Succeeded {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4>  mUnkdc70c4;
            ::ll::UntypedStorage<8, 16> mUnkebceb3;
            // NOLINTEND

        public:
            // prevent constructor by default
            Succeeded& operator=(Succeeded const&);
            Succeeded(Succeeded const&);
            Succeeded();

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI ~Succeeded();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCFOLD void $dtor();
            // NOLINTEND
        };

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

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI ~Failed();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCFOLD void $dtor();
            // NOLINTEND
        };

        struct NotFound {};
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
    MCAPI ~PackCapability();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
