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
    CloudSaveLevelInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CloudSaveLevelInfo(::CloudSaveLevelInfo const&);

#ifdef LL_PLAT_C
    MCNAPI explicit CloudSaveLevelInfo(::CompoundTag const& tag);

    MCNAPI CloudSaveLevelInfo(
        ::std::string driveItemId,
        ::std::string cTag,
        ::std::string userId,
        ::std::string filename,
        ::std::string lastUpdated,
        bool          needsUpload
    );
#endif

    MCNAPI ::CloudSaveLevelInfo& operator=(::CloudSaveLevelInfo&&);

    MCNAPI ::CloudSaveLevelInfo& operator=(::CloudSaveLevelInfo const&);

#ifdef LL_PLAT_C
    MCNAPI bool operator==(::CloudSaveLevelInfo const& other) const;

    MCNAPI void serialize(::CompoundTag& tag) const;
#endif

    MCNAPI ~CloudSaveLevelInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CloudSaveLevelInfo const&);

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::CompoundTag const& tag);

    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};
