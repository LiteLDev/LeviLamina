#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace cg { class ImageBuffer; }
// clang-format on

class IImageCache {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IImageCache() = default;

    virtual ::cg::ImageBuffer* getCachedImage(::ResourceLocation const&) = 0;

    virtual ::cg::ImageBuffer* insertImageIntoCache(::ResourceLocation const&, ::cg::ImageBuffer&&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
