#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/minecraft_renderer/renderer/IsMissingTexture.h"
#include "mc/deps/minecraft_renderer/renderer/TextureLoadState.h"

// auto generated forward declare list
// clang-format off
class BedrockTexture;
class ResourceLocation;
struct BedrockTextureData;
namespace cg { struct ImageDescription; }
namespace mce { class TextureGroupBase; }
namespace mce { struct ClientTexture; }
namespace mce { struct TextureDescription; }
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

    MCAPI TexturePtr(::mce::TexturePtr&& rhs);

    MCAPI TexturePtr(::mce::TexturePtr const& rhs);

    MCAPI TexturePtr(::std::shared_ptr<::mce::TextureGroupBase> group, ::ResourceLocation const& resourceLocation);

    MCAPI TexturePtr(
        ::BedrockTexture const&   bedrockTexture,
        ::ResourceLocation const& resourceLocation,
        ::cg::TextureSetLayerType textureType
    );

    MCFOLD ::mce::ClientTexture const& getClientTexture() const;

    MCFOLD ::cg::ImageDescription const& getImageDescription() const;

    MCFOLD ::ResourceLocation const& getResourceLocation() const;

    MCFOLD ::mce::TextureDescription const& getTextureDescription() const;

    MCAPI ::TextureLoadState getTextureLoadState() const;

    MCAPI uint64 hashCode() const;

    MCAPI ::IsMissingTexture isMissingTexture() const;

    MCFOLD explicit operator bool() const;

    MCFOLD ::mce::ClientTexture const& operator*() const;

    MCAPI ::mce::TexturePtr& operator=(::mce::TexturePtr&& rhs);

    MCAPI ::mce::TexturePtr& operator=(::mce::TexturePtr const& rhs);

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

    MCAPI void* $ctor(::mce::TexturePtr&& rhs);

    MCAPI void* $ctor(::mce::TexturePtr const& rhs);

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
