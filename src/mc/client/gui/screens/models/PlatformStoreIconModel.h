#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class PlatformStoreIconModel {
public:
    // PlatformStoreIconModel inner types declare
    // clang-format off
    struct PlatformStoreIconVisibility;
    // clang-format on

    // PlatformStoreIconModel inner types define
    struct PlatformStoreIconVisibility {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnka858a6;
        ::ll::UntypedStorage<1, 1> mUnk53ae1c;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlatformStoreIconVisibility& operator=(PlatformStoreIconVisibility const&);
        PlatformStoreIconVisibility(PlatformStoreIconVisibility const&);
        PlatformStoreIconVisibility();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk37455c;
    ::ll::UntypedStorage<8, 8> mUnk419a9a;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformStoreIconModel& operator=(PlatformStoreIconModel const&);
    PlatformStoreIconModel(PlatformStoreIconModel const&);
    PlatformStoreIconModel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit PlatformStoreIconModel(::SubClientId subClientId);

    MCNAPI_C ~PlatformStoreIconModel();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static bool& sIsIconVisible();

    MCNAPI_C static ::std::
        unordered_map<::SubClientId, ::std::vector<::PlatformStoreIconModel::PlatformStoreIconVisibility*>>&
        sPlatformStoreIconVisibilityStacks();

    MCNAPI_C static ::Bedrock::Threading::Mutex& sStacksMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::SubClientId subClientId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
