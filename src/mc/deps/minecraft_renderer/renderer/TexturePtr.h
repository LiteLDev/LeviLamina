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
    ::ll::UntypedStorage<8, 16> mUnk3eb5ba;
    ::ll::UntypedStorage<8, 16> mUnkb09541;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C TexturePtr();

    MCNAPI_C TexturePtr(::mce::TexturePtr const& rhs);

    MCNAPI_C TexturePtr(::std::shared_ptr<::mce::TextureGroupBase> group, ::ResourceLocation const& resourceLocation);

    MCNAPI_C TexturePtr(
        ::BedrockTexture const&   bedrockTexture,
        ::ResourceLocation const& resourceLocation,
        ::cg::TextureSetLayerType textureType
    );

    MCNAPI_C ::mce::ClientTexture const& getClientTexture() const;

    MCNAPI_C ::mce::TexturePtr& operator=(::mce::TexturePtr&& rhs);

    MCNAPI_C ::mce::TexturePtr& operator=(::mce::TexturePtr const& rhs);

    MCNAPI_C ~TexturePtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::mce::TexturePtr const& NONE();

    MCNAPI_C static ::BedrockTextureData const& mDefaultTextureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::mce::TexturePtr const& rhs);

    MCNAPI_C void* $ctor(::std::shared_ptr<::mce::TextureGroupBase> group, ::ResourceLocation const& resourceLocation);

    MCNAPI_C void* $ctor(
        ::BedrockTexture const&   bedrockTexture,
        ::ResourceLocation const& resourceLocation,
        ::cg::TextureSetLayerType textureType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace mce
