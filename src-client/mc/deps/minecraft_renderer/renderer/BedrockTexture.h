#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/minecraft_renderer/renderer/IsMissingTexture.h"

// auto generated forward declare list
// clang-format off
class ResourceLocationPair;
struct BedrockTextureData;
namespace cg { class TextureSetDefinition; }
namespace cg { class TextureSetImageContainer; }
namespace cg { class TextureSetImageDescription; }
namespace mce { class TextureContainer; }
namespace mce { struct ClientTexture; }
namespace mce { struct TextureDescription; }
namespace mce { struct TextureResourceService; }
// clang-format on

class BedrockTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BedrockTextureData>> mBedrockTextureData;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BedrockTextureData>> mBedrockMERSTextureData;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BedrockTextureData>> mBedrockNormalTextureData;
    // NOLINTEND

public:
    // prevent constructor by default
    BedrockTexture(BedrockTexture const&);
    BedrockTexture();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::ResourceLocationPair> const _getLayerLocation(
        ::gsl::not_null<::std::shared_ptr<::cg::TextureSetDefinition>> textureSetDefinition,
        ::cg::TextureSetLayerType                                      layerType
    );

    MCAPI bool _loadFromImageBuffer(
        ::cg::TextureSetImageContainer&         imageContainer,
        ::cg::TextureSetLayerType               textureType,
        ::mce::TextureResourceService&          textureResourceService,
        ::cg::TextureSetImageDescription const& setDescription,
        ::IsMissingTexture                      isMissing,
        ::std::string_view                      debugName
    ) const;

    MCAPI ::mce::ClientTexture const& getClientHandle(::cg::TextureSetLayerType textureType) const;

    MCAPI ::std::shared_ptr<::BedrockTextureData const> const
    getSharedBedrockTextureData(::cg::TextureSetLayerType textureType) const;

    MCAPI bool load(
        ::mce::TextureResourceService&                                 textureResourceService,
        ::gsl::not_null<::std::shared_ptr<::cg::TextureSetDefinition>> textureSetDefinition,
        ::std::string_view                                             debugName
    );

    MCAPI bool load(
        ::mce::TextureResourceService& textureResourceService,
        ::mce::TextureContainer&&      textureContainer,
        ::IsMissingTexture             isMissingTexture,
        ::std::string_view             debugName,
        ::cg::TextureSetLayerType      textureType
    );

    MCAPI void loadMetadata(::gsl::not_null<::std::shared_ptr<::cg::TextureSetDefinition>> textureSetDefinition);

    MCAPI void loadMetadata(
        ::mce::TextureDescription const&    textureDescription,
        ::std::optional<::IsMissingTexture> optIsMissingTexture
    );

    MCAPI ::BedrockTexture& operator=(::BedrockTexture const& rhs);

    MCAPI void unload();

    MCAPI ~BedrockTexture();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
