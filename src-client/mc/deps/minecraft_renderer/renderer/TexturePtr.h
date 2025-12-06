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
    MCNAPI TexturePtr();

    MCNAPI TexturePtr(::mce::TexturePtr const& rhs);

    MCNAPI TexturePtr(::std::shared_ptr<::mce::TextureGroupBase> group, ::ResourceLocation const& resourceLocation);

    MCNAPI TexturePtr(
        ::BedrockTexture const&   bedrockTexture,
        ::ResourceLocation const& resourceLocation,
        ::cg::TextureSetLayerType textureType
    );

    MCNAPI ::mce::ClientTexture const& getClientTexture() const;

    MCNAPI ::mce::TexturePtr& operator=(::mce::TexturePtr&& rhs);

    MCNAPI ::mce::TexturePtr& operator=(::mce::TexturePtr const& rhs);

    MCNAPI ~TexturePtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::TexturePtr const& NONE();

    MCNAPI static ::BedrockTextureData const& mDefaultTextureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::TexturePtr const& rhs);

    MCNAPI void* $ctor(::std::shared_ptr<::mce::TextureGroupBase> group, ::ResourceLocation const& resourceLocation);

    MCNAPI void* $ctor(
        ::BedrockTexture const&   bedrockTexture,
        ::ResourceLocation const& resourceLocation,
        ::cg::TextureSetLayerType textureType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
