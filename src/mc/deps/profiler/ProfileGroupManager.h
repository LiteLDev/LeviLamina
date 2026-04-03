#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/platform/threading/SharedLock.h"

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class ProfileGroup; }
namespace Util { struct string_hash; }
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
    class Factory {};

    class Impl {
    public:
        // Impl inner types declare
        // clang-format off
        struct StringCompare;
        // clang-format on

        // Impl inner types define
        struct StringCompare {};

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkc3e914;
        ::ll::UntypedStorage<8, 64> mUnk2af202;
        ::ll::UntypedStorage<8, 64> mUnk861ce2;
        ::ll::UntypedStorage<8, 8>  mUnkc68b28;
        ::ll::UntypedStorage<8, 64> mUnk3064b7;
        ::ll::UntypedStorage<8, 8>  mUnk504f10;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Core::Profile::ProfileGroup* find(::std::string_view groupName);

        MCNAPI ::Core::Profile::ProfileGroup& findOrCreate(::std::string_view groupName, uint color);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2c2558;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileGroupManager& operator=(ProfileGroupManager const&);
    ProfileGroupManager(ProfileGroupManager const&);
    ProfileGroupManager();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Profile::ProfileGroupManager& getSharedInstance();
    // NOLINTEND
};

} // namespace Core::Profile
