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
    CloudSaveLevelInfo(CloudSaveLevelInfo const&);
    CloudSaveLevelInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CloudSaveLevelInfo(::CloudSaveLevelInfo&&);

    MCAPI explicit CloudSaveLevelInfo(::CompoundTag const& tag);

    MCAPI bool const hasInfo() const;

    MCAPI ::CloudSaveLevelInfo& operator=(::CloudSaveLevelInfo const&);

    MCAPI ::CloudSaveLevelInfo& operator=(::CloudSaveLevelInfo&&);

    MCAPI void serialize(::CompoundTag& tag) const;

    MCAPI ~CloudSaveLevelInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CloudSaveLevelInfo&&);

    MCAPI void* $ctor(::CompoundTag const& tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
