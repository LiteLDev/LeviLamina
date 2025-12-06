#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture/IImageCache.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace cg { struct ImageBuffer; }
// clang-format on

class TextureGroupImageCache : public ::IImageCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk11a07a;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureGroupImageCache& operator=(TextureGroupImageCache const&);
    TextureGroupImageCache(TextureGroupImageCache const&);
    TextureGroupImageCache();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextureGroupImageCache() /*override*/ = default;

    // vIndex: 1
    virtual ::cg::ImageBuffer* getCachedImage(::ResourceLocation const& resourceLocation) /*override*/;

    // vIndex: 2
    virtual ::cg::ImageBuffer*
    insertImageIntoCache(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer&& imageBuffer) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cg::ImageBuffer* $getCachedImage(::ResourceLocation const& resourceLocation);

    MCNAPI ::cg::ImageBuffer*
    $insertImageIntoCache(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer&& imageBuffer);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
