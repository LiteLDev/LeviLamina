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
    struct PlatformStoreIconVisibility {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SubClientId>                                                            mSubClientId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformStoreIconModel::PlatformStoreIconVisibility>> mIconVisibility;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformStoreIconModel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlatformStoreIconModel(::SubClientId subClientId);

    MCAPI ~PlatformStoreIconModel();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& sIsIconVisible();

    MCAPI static ::std::
        unordered_map<::SubClientId, ::std::vector<::PlatformStoreIconModel::PlatformStoreIconVisibility*>>&
        sPlatformStoreIconVisibilityStacks();

    MCAPI static ::Bedrock::Threading::Mutex& sStacksMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SubClientId subClientId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
