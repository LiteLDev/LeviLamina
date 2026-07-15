#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"

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
    InvalidPacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InvalidPacks(::InvalidPacks const&);

    MCNAPI void addInvalidPack(::ResourceLocation const& packLocation, ::PackType type);

    MCNAPI void untrackInvalidPack(::ResourceLocation const& packLocation);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::InvalidPacks const&);
    // NOLINTEND
};
