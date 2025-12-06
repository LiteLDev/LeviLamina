#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct BedrockTextureData;
namespace cg { struct ImageBuffer; }
namespace mce { struct TextureDescription; }
// clang-format on

class AbstractTextureAccessor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AbstractTextureAccessor() = default;

    // vIndex: 1
    virtual ::cg::ImageBuffer* insertImageIntoCache(::ResourceLocation const&, ::cg::ImageBuffer&&) = 0;

    // vIndex: 2
    virtual ::cg::ImageBuffer* getCachedImageOrLoadSync(::ResourceLocation const&, bool const) = 0;

    // vIndex: 3
    virtual ::cg::ImageBuffer* getCachedImage(::ResourceLocation const&) const = 0;

    // vIndex: 4
    virtual void setTextureMetadata(::ResourceLocation const&, ::mce::TextureDescription const&) = 0;

    // vIndex: 5
    virtual ::BedrockTextureData const* getBedrockTextureData(::ResourceLocation const&) const = 0;

    // vIndex: 6
    virtual bool isLoaded(::ResourceLocation const&, bool, ::cg::TextureSetLayerType const) const = 0;

    // vIndex: 7
    virtual ::cg::ImageBuffer const& getMissingImageBuffer() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
