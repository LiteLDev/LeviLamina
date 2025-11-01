#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace mce { class UUID; }
// clang-format on

struct PackInfoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::PackIdVersion> mPackIdVersion;
    ::ll::TypedStorage<8, 8, uint64> mPackSize;
    ::ll::TypedStorage<8, 32, ::std::string> mContentKey;
    ::ll::TypedStorage<8, 32, ::std::string> mSubpackName;
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mContentIdentity;
    ::ll::TypedStorage<1, 1, bool> mHasScripts;
    ::ll::TypedStorage<1, 1, bool> mIsAddonPack;
    ::ll::TypedStorage<1, 1, bool> mIsRayTracingCapable;
    ::ll::TypedStorage<1, 1, bool> mHasExceptions;
    ::ll::TypedStorage<8, 32, ::std::string> mCDNUrl;
    // NOLINTEND

public:
    // prevent constructor by default
    PackInfoData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackInfoData(::mce::UUID const& guid, ::SemVersion const& version, uint64 packSize, ::std::string const& contentKey, ::std::string const& subpackName, ::ContentIdentity const& contentIdentity, bool hasScripts, bool isAddonPack, bool isRayTracingCapable, ::std::string const& cdnUrl);

    MCAPI ~PackInfoData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::UUID const& guid, ::SemVersion const& version, uint64 packSize, ::std::string const& contentKey, ::std::string const& subpackName, ::ContentIdentity const& contentIdentity, bool hasScripts, bool isAddonPack, bool isRayTracingCapable, ::std::string const& cdnUrl);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
