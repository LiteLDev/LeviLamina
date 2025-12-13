#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/AbstractTextureAccessor.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct BedrockTextureData;
namespace cg { class ImageBuffer; }
namespace mce { struct TextureDescription; }
// clang-format on

class TextureAccessor : public ::AbstractTextureAccessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkec26ef;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAccessor& operator=(TextureAccessor const&);
    TextureAccessor(TextureAccessor const&);
    TextureAccessor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cg::ImageBuffer*
    insertImageIntoCache(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer&& imageBuffer) /*override*/;

    virtual ::cg::ImageBuffer*
    getCachedImageOrLoadSync(::ResourceLocation const& resourceLocation, bool const forceReload) /*override*/;

    virtual ::cg::ImageBuffer* getCachedImage(::ResourceLocation const& resourceLocation) const /*override*/;

    virtual void setTextureMetadata(
        ::ResourceLocation const&        resourceLocation,
        ::mce::TextureDescription const& textureDescription
    ) /*override*/;

    virtual ::BedrockTextureData const* getBedrockTextureData(::ResourceLocation const& resourceLocation) const
        /*override*/;

    virtual bool isLoaded(
        ::ResourceLocation const&       resourceLocation,
        bool                            ignoreCreation,
        ::cg::TextureSetLayerType const textureType
    ) const /*override*/;

    virtual ::cg::ImageBuffer const& getMissingImageBuffer() const /*override*/;

    virtual ~TextureAccessor() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cg::ImageBuffer*
    $insertImageIntoCache(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer&& imageBuffer);

    MCNAPI ::cg::ImageBuffer*
    $getCachedImageOrLoadSync(::ResourceLocation const& resourceLocation, bool const forceReload);

    MCNAPI ::cg::ImageBuffer* $getCachedImage(::ResourceLocation const& resourceLocation) const;

    MCNAPI void $setTextureMetadata(
        ::ResourceLocation const&        resourceLocation,
        ::mce::TextureDescription const& textureDescription
    );

    MCNAPI ::BedrockTextureData const* $getBedrockTextureData(::ResourceLocation const& resourceLocation) const;

    MCNAPI bool $isLoaded(
        ::ResourceLocation const&       resourceLocation,
        bool                            ignoreCreation,
        ::cg::TextureSetLayerType const textureType
    ) const;

    MCNAPI ::cg::ImageBuffer const& $getMissingImageBuffer() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
