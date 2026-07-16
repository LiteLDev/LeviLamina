#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture/IImageCache.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace cg { class ImageBuffer; }
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
    virtual ~TextureGroupImageCache() /*override*/ = default;

    virtual ::cg::ImageBuffer* getCachedImage(::ResourceLocation const&) /*override*/;

    virtual ::cg::ImageBuffer* insertImageIntoCache(::ResourceLocation const&, ::cg::ImageBuffer&&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
