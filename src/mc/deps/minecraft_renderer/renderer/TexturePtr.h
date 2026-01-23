#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class BedrockTexture;
struct BedrockTextureData;
namespace mce { class TextureGroupBase; }
namespace mce { struct ClientTexture; }
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
    MCAPI_C TexturePtr();

    MCAPI_C TexturePtr(::mce::TexturePtr const& rhs);

    MCAPI_C TexturePtr(::std::shared_ptr<::mce::TextureGroupBase> group, ::ResourceLocation const& resourceLocation);

    MCAPI_C TexturePtr(
        ::BedrockTexture const&   bedrockTexture,
        ::ResourceLocation const& resourceLocation,
        ::cg::TextureSetLayerType textureType
    );

    MCFOLD_C ::mce::ClientTexture const& getClientTexture() const;

    MCFOLD_C ::mce::ClientTexture const& operator*() const;

    MCAPI_C ::mce::TexturePtr& operator=(::mce::TexturePtr&& rhs);

    MCAPI_C ::mce::TexturePtr& operator=(::mce::TexturePtr const& rhs);

    MCAPI_C ~TexturePtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_C static ::mce::TexturePtr const& NONE();

    MCAPI_C static ::BedrockTextureData const& mDefaultTextureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();

    MCAPI_C void* $ctor(::mce::TexturePtr const& rhs);

    MCAPI_C void* $ctor(::std::shared_ptr<::mce::TextureGroupBase> group, ::ResourceLocation const& resourceLocation);

    MCAPI_C void* $ctor(
        ::BedrockTexture const&   bedrockTexture,
        ::ResourceLocation const& resourceLocation,
        ::cg::TextureSetLayerType textureType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace mce
