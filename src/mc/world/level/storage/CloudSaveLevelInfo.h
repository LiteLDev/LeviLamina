#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    CloudSaveLevelInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CloudSaveLevelInfo(::CloudSaveLevelInfo const&);

#ifdef LL_PLAT_C
    MCAPI CloudSaveLevelInfo(
        ::std::string driveItemId,
        ::std::string cTag,
        ::std::string userId,
        ::std::string filename,
        ::std::string lastUpdated,
        bool          needsUpload
    );
#endif

    MCAPI ::CloudSaveLevelInfo& operator=(::CloudSaveLevelInfo&&);

    MCAPI ::CloudSaveLevelInfo& operator=(::CloudSaveLevelInfo const&);

#ifdef LL_PLAT_C
    MCAPI bool operator==(::CloudSaveLevelInfo const& other) const;
#endif

    MCAPI ~CloudSaveLevelInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CloudSaveLevelInfo const&);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::std::string driveItemId,
        ::std::string cTag,
        ::std::string userId,
        ::std::string filename,
        ::std::string lastUpdated,
        bool          needsUpload
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
