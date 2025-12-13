#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct BedrockTextureData;
namespace cg { class ImageBuffer; }
namespace mce { struct TextureDescription; }
// clang-format on

class AbstractTextureAccessor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AbstractTextureAccessor() = default;

    virtual ::cg::ImageBuffer* insertImageIntoCache(::ResourceLocation const&, ::cg::ImageBuffer&&) = 0;

    virtual ::cg::ImageBuffer* getCachedImageOrLoadSync(::ResourceLocation const&, bool const) = 0;

    virtual ::cg::ImageBuffer* getCachedImage(::ResourceLocation const&) const = 0;

    virtual void setTextureMetadata(::ResourceLocation const&, ::mce::TextureDescription const&) = 0;

    virtual ::BedrockTextureData const* getBedrockTextureData(::ResourceLocation const&) const = 0;

    virtual bool isLoaded(::ResourceLocation const&, bool, ::cg::TextureSetLayerType const) const = 0;

    virtual ::cg::ImageBuffer const& getMissingImageBuffer() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
