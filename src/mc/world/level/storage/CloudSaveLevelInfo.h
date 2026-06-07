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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CloudSaveLevelInfo();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI CloudSaveLevelInfo();
#endif

    MCAPI CloudSaveLevelInfo(::CloudSaveLevelInfo const&);

    MCAPI explicit CloudSaveLevelInfo(::CompoundTag const& tag);

#ifdef LL_PLAT_C
    MCAPI CloudSaveLevelInfo(
        ::std::string driveItemId,
        ::std::string cTag,
        ::std::string userId,
        ::std::string filename,
        ::std::string lastUpdated,
        bool          needsUpload
    );

    MCFOLD ::std::string const& cTag() const;

    MCFOLD ::std::string const& driveItemId() const;

    MCFOLD ::std::string const& fileName() const;
#endif

    MCAPI bool const hasInfo() const;

#ifdef LL_PLAT_C
    MCFOLD ::std::string const& lastUpdated() const;

    MCFOLD bool const& needsUpload() const;

    MCAPI bool operator!=(::CloudSaveLevelInfo const& other) const;
#endif

    MCAPI ::CloudSaveLevelInfo& operator=(::CloudSaveLevelInfo&&);

    MCAPI ::CloudSaveLevelInfo& operator=(::CloudSaveLevelInfo const&);

#ifdef LL_PLAT_C
    MCAPI bool operator==(::CloudSaveLevelInfo const& other) const;
#endif

    MCAPI void serialize(::CompoundTag& tag) const;

#ifdef LL_PLAT_C
    MCFOLD void setCloudFileName(::std::string const& fileName);

    MCFOLD void setNeedsUpload(bool const& needsUpload);

    MCFOLD ::std::string const& userId() const;
#endif

    MCAPI ~CloudSaveLevelInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif

    MCAPI void* $ctor(::CloudSaveLevelInfo const&);

    MCAPI void* $ctor(::CompoundTag const& tag);

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
