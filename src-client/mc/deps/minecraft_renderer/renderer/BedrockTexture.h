#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/minecraft_renderer/renderer/IsMissingTexture.h"

// auto generated forward declare list
// clang-format off
struct BedrockTextureData;
struct ResourceLocationPair;
namespace cg { struct TextureSetDefinition; }
namespace cg { struct TextureSetImageContainer; }
namespace cg { struct TextureSetImageDescription; }
namespace mce { class TextureContainer; }
namespace mce { struct ClientTexture; }
namespace mce { struct TextureDescription; }
namespace mce { struct TextureResourceService; }
// clang-format on

class BedrockTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6ddcaf;
    ::ll::UntypedStorage<8, 16> mUnke579d2;
    ::ll::UntypedStorage<8, 16> mUnk10e90d;
    // NOLINTEND

public:
    // prevent constructor by default
    BedrockTexture(BedrockTexture const&);
    BedrockTexture();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::ResourceLocationPair> const _getLayerLocation(
        ::gsl::not_null<::std::shared_ptr<::cg::TextureSetDefinition>> textureSetDefinition,
        ::cg::TextureSetLayerType                                      layerType
    );

    MCNAPI bool _loadFromImageBuffer(
        ::cg::TextureSetImageContainer&         imageContainer,
        ::cg::TextureSetLayerType               textureType,
        ::mce::TextureResourceService&          textureResourceService,
        ::cg::TextureSetImageDescription const& setDescription,
        ::IsMissingTexture                      isMissing,
        ::std::string_view                      debugName
    ) const;

    MCNAPI ::mce::ClientTexture const& getClientHandle(::cg::TextureSetLayerType textureType) const;

    MCNAPI ::std::shared_ptr<::BedrockTextureData const> const
    getSharedBedrockTextureData(::cg::TextureSetLayerType textureType) const;

    MCNAPI bool load(
        ::mce::TextureResourceService&                                 textureResourceService,
        ::gsl::not_null<::std::shared_ptr<::cg::TextureSetDefinition>> textureSetDefinition,
        ::std::string_view                                             debugName
    );

    MCNAPI bool load(
        ::mce::TextureResourceService& textureResourceService,
        ::mce::TextureContainer&&      textureContainer,
        ::IsMissingTexture             isMissingTexture,
        ::std::string_view             debugName,
        ::cg::TextureSetLayerType      textureType
    );

    MCNAPI void loadMetadata(::gsl::not_null<::std::shared_ptr<::cg::TextureSetDefinition>> textureSetDefinition);

    MCNAPI void loadMetadata(
        ::mce::TextureDescription const&    textureDescription,
        ::std::optional<::IsMissingTexture> optIsMissingTexture
    );

    MCNAPI ::BedrockTexture& operator=(::BedrockTexture const& rhs);

    MCNAPI void unload();

    MCNAPI ~BedrockTexture();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
