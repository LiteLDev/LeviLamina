#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
// clang-format on

class InvalidPacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfc5cab;
    ::ll::UntypedStorage<8, 24> mUnk2d6a38;
    ::ll::UntypedStorage<8, 24> mUnkfe0ed3;
    ::ll::UntypedStorage<8, 24> mUnk475a67;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidPacks& operator=(InvalidPacks const&);
    InvalidPacks(InvalidPacks const&);
    InvalidPacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::InvalidPacks& operator=(::InvalidPacks&&);

    MCNAPI void untrackInvalidPack(::ResourceLocation const& packLocation);

    MCNAPI ~InvalidPacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
