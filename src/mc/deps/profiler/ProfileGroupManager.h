#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/platform/threading/SharedLock.h"

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class ProfileGroup; }
// clang-format on

namespace Core::Profile {

class ProfileGroupManager {
public:
    // ProfileGroupManager inner types declare
    // clang-format off
    class Factory;
    class Impl;
    // clang-format on

    // ProfileGroupManager inner types define
    class Factory {
    public:
        // prevent constructor by default
        Factory& operator=(Factory const&);
        Factory(Factory const&);
        Factory();
    };

    class Impl {
    public:
        // Impl inner types declare
        // clang-format off
        struct StringCompare;
        // clang-format on

        // Impl inner types define
        struct StringCompare {
        public:
            // prevent constructor by default
            StringCompare& operator=(StringCompare const&);
            StringCompare(StringCompare const&);
            StringCompare();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkd522f4;
        ::ll::UntypedStorage<8, 16> mUnk4e1bfd;
        ::ll::UntypedStorage<8, 64> mUnk861ce2;
        ::ll::UntypedStorage<8, 8>  mUnkc68b28;
        ::ll::UntypedStorage<8, 16> mUnk7a5c1f;
        ::ll::UntypedStorage<8, 8>  mUnk504f10;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfabb44;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileGroupManager& operator=(ProfileGroupManager const&);
    ProfileGroupManager(ProfileGroupManager const&);
    ProfileGroupManager();
};

} // namespace Core::Profile
