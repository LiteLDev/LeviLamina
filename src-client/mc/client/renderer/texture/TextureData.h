#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class TintMapColor;
namespace mce { class Color; }
// clang-format on

class TextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk5e7a90;
    ::ll::UntypedStorage<4, 24> mUnk88ed42;
    ::ll::UntypedStorage<8, 56> mUnkd6a048;
    ::ll::UntypedStorage<4, 24> mUnkc99e19;
    ::ll::UntypedStorage<4, 16> mUnkcb1222;
    ::ll::UntypedStorage<4, 64> mUnkad2404;
    ::ll::UntypedStorage<4, 64> mUnkde35ba;
    ::ll::UntypedStorage<1, 1>  mUnkfaf113;
    ::ll::UntypedStorage<1, 1>  mUnk6b1650;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureData(::TextureData const&);

    MCNAPI TextureData(
        ::ResourceLocation const& location,
        ::ResourceLocation const& tintMapLocation,
        ::mce::Color const&       tintColor,
        ::TintMapColor const&     multiChannelTintBaseColor,
        ::TintMapColor const&     multiChannelTintColor,
        bool                      multiChannelTint,
        ::cg::TextureSetLayerType textureSetLayerType
    );

    MCNAPI ::TextureData& operator=(::TextureData const&);

    MCNAPI ~TextureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TextureData const&);

    MCNAPI void* $ctor(
        ::ResourceLocation const& location,
        ::ResourceLocation const& tintMapLocation,
        ::mce::Color const&       tintColor,
        ::TintMapColor const&     multiChannelTintBaseColor,
        ::TintMapColor const&     multiChannelTintColor,
        bool                      multiChannelTint,
        ::cg::TextureSetLayerType textureSetLayerType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
