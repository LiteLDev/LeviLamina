#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class CloudSaveLevelInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDriveItemId;
    ::ll::TypedStorage<8, 32, ::std::string> mCTag;
    ::ll::TypedStorage<8, 32, ::std::string> mUserId;
    ::ll::TypedStorage<8, 32, ::std::string> mFileName;
    ::ll::TypedStorage<1, 1, bool>           mNeedsUpload;
    ::ll::TypedStorage<8, 32, ::std::string> mLastUpdated;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudSaveLevelInfo(CloudSaveLevelInfo const&);
    CloudSaveLevelInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CloudSaveLevelInfo(::CloudSaveLevelInfo&&);

    MCAPI explicit CloudSaveLevelInfo(::CompoundTag const& tag);

    MCAPI bool const hasInfo() const;

    MCAPI ::CloudSaveLevelInfo& operator=(::CloudSaveLevelInfo&&);

    MCAPI ::CloudSaveLevelInfo& operator=(::CloudSaveLevelInfo const&);

    MCAPI void serialize(::CompoundTag& tag) const;

    MCAPI ~CloudSaveLevelInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CloudSaveLevelInfo&&);

    MCAPI void* $ctor(::CompoundTag const& tag);

    MCAPI_C void* $ctor(
        ::std::string driveItemId,
        ::std::string cTag,
        ::std::string userId,
        ::std::string filename,
        ::std::string lastUpdated,
        bool          needsUpload
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
