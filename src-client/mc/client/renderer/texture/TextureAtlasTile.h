#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class AbstractTextureAccessor;
class ResourceLocation;
class TintMapColor;
namespace mce { class Color; }
// clang-format on

class TextureAtlasTile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk135e6a;
    ::ll::UntypedStorage<8, 24> mUnk25ee2c;
    ::ll::UntypedStorage<4, 16> mUnk62d1eb;
    ::ll::UntypedStorage<1, 1>  mUnkd942a3;
    ::ll::UntypedStorage<4, 4>  mUnk7a10db;
    ::ll::UntypedStorage<4, 16> mUnk2f522b;
    ::ll::UntypedStorage<1, 1>  mUnkd721bd;
    ::ll::UntypedStorage<1, 1>  mUnkdbba8e;
    ::ll::UntypedStorage<1, 1>  mUnk129141;
    ::ll::UntypedStorage<4, 4>  mUnk62b7a5;
    ::ll::UntypedStorage<4, 4>  mUnk6731d6;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlasTile& operator=(TextureAtlasTile const&);
    TextureAtlasTile(TextureAtlasTile const&);
    TextureAtlasTile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureAtlasTile(::TextureAtlasTile&& rhs);

    MCNAPI void calculateTileDimensions(::AbstractTextureAccessor const& textureAccessor, uint maxDimension);

    MCNAPI bool isTileEquivalent(
        ::mce::Color const&       inOverlay,
        bool                      inQuad,
        ::mce::Color const&       inTintColor,
        ::ResourceLocation const& inLocation,
        float                     inMipFadeRate,
        ::mce::Color const&       inMipFadeColor,
        bool                      inIsAdditive,
        ::TintMapColor const&     inMultiChannelTintBaseColor,
        ::TintMapColor const&     inMultiChannelTintColor,
        bool                      inMultiChannelTint,
        ::cg::TextureSetLayerType inTextureSetLayerType
    );

    MCNAPI ~TextureAtlasTile();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TextureAtlasTile&& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
