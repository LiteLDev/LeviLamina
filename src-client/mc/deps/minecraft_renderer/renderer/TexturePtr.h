#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class BedrockTexture;
class ResourceLocation;
struct BedrockTextureData;
namespace mce { class TextureGroupBase; }
// clang-format on

namespace mce {

class TexturePtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BedrockTextureData const>> mClientTexture;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ResourceLocation>>         mResourceLocationPtr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TexturePtr();

    MCAPI TexturePtr(::std::shared_ptr<::mce::TextureGroupBase> group, ::ResourceLocation const& resourceLocation);

    MCAPI TexturePtr(
        ::BedrockTexture const&   bedrockTexture,
        ::ResourceLocation const& resourceLocation,
        ::cg::TextureSetLayerType textureType
    );

    MCAPI ~TexturePtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::TexturePtr const& NONE();

    MCAPI static ::BedrockTextureData const& mDefaultTextureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroupBase> group, ::ResourceLocation const& resourceLocation);

    MCAPI void* $ctor(
        ::BedrockTexture const&   bedrockTexture,
        ::ResourceLocation const& resourceLocation,
        ::cg::TextureSetLayerType textureType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace mce
