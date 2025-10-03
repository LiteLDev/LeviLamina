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
    ::ll::UntypedStorage<8, 32> mUnkbe2aee;
    ::ll::UntypedStorage<8, 32> mUnk739036;
    ::ll::UntypedStorage<8, 32> mUnkd4a62b;
    ::ll::UntypedStorage<8, 32> mUnkdd5ebb;
    ::ll::UntypedStorage<1, 1>  mUnk1a9058;
    ::ll::UntypedStorage<8, 32> mUnk306006;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudSaveLevelInfo& operator=(CloudSaveLevelInfo const&);
    CloudSaveLevelInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CloudSaveLevelInfo(::CloudSaveLevelInfo const&);

    MCNAPI CloudSaveLevelInfo(::CloudSaveLevelInfo&&);

    MCNAPI explicit CloudSaveLevelInfo(::CompoundTag const& tag);

    MCNAPI ::CloudSaveLevelInfo& operator=(::CloudSaveLevelInfo&&);

    MCNAPI void serialize(::CompoundTag& tag) const;

    MCNAPI ~CloudSaveLevelInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CloudSaveLevelInfo const&);

    MCNAPI void* $ctor(::CloudSaveLevelInfo&&);

    MCNAPI void* $ctor(::CompoundTag const& tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
