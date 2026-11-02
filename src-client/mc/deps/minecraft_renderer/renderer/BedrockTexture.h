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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BedrockTexture();

    MCNAPI ::std::optional<::ResourceLocationPair> const _getLayerLocation(
        ::gsl::not_null<::std::shared_ptr<::cg::TextureSetDefinition>> const textureSetDefinition,
        ::cg::TextureSetLayerType                                            layerType
    );

    MCNAPI bool _loadFromImageBuffer(
        ::cg::TextureSetImageContainer&         imageContainer,
        ::cg::TextureSetLayerType const         textureType,
        ::mce::TextureResourceService&          textureResourceService,
        ::cg::TextureSetImageDescription const& setDescription,
        ::IsMissingTexture                      isMissing,
        ::std::string_view                      debugName
    ) const;

    MCNAPI ::cg::TextureSetImageDescription getTextureSetImageDescription() const;

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

    MCNAPI void loadMetadata(
        ::cg::TextureSetImageDescription const& textureSetImageDescription,
        ::std::optional<::IsMissingTexture>     optIsMissingTexture
    );

    MCNAPI ::BedrockTexture& operator=(::BedrockTexture const& rhs);

    MCNAPI void unload();

    MCNAPI ~BedrockTexture();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
