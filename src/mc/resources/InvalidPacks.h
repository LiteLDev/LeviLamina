#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct InvalidPack;
struct InvalidPacksFilterGroup;
// clang-format on

class InvalidPacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1beb59;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidPacks& operator=(InvalidPacks const&);
    InvalidPacks(InvalidPacks const&);
    InvalidPacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addInvalidPack(::ResourceLocation const& packLocation, ::PackType type, ::PackOrigin origin);

    MCNAPI ::std::vector<::InvalidPack> getInvalidPacks(::InvalidPacksFilterGroup const& packTypes) const;
    // NOLINTEND
};
