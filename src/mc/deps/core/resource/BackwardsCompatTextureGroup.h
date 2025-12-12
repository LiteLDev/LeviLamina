#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BackwardsCompatTextureInfo;
class ResourceLocation;
class ResourceLocationPair;
// clang-format on

class BackwardsCompatTextureGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkad3534;
    // NOLINTEND

public:
    // prevent constructor by default
    BackwardsCompatTextureGroup& operator=(BackwardsCompatTextureGroup const&);
    BackwardsCompatTextureGroup(BackwardsCompatTextureGroup const&);
    BackwardsCompatTextureGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::BackwardsCompatTextureInfo const& getBackCompatInfo(::ResourceLocation const& resourceLocation) const;

    MCNAPI_C void loadTextures(::gsl::span<::ResourceLocationPair> texturesToLoad);

    MCNAPI_C void populate(::std::string const& backCompatFile);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BackwardsCompatTextureInfo const& invalidInfo();
    // NOLINTEND
};
