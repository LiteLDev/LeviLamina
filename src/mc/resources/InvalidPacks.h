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
    ::ll::UntypedStorage<8, 24> mUnk8e3c55;
    ::ll::UntypedStorage<8, 24> mUnk1ad14b;
    ::ll::UntypedStorage<8, 24> mUnk76cedd;
    ::ll::UntypedStorage<8, 24> mUnkf4d38b;
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
