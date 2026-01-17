#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class SystemCacheStats {
public:
    // SystemCacheStats inner types declare
    // clang-format off
    struct ImageCacheStats;
    // clang-format on

    // SystemCacheStats inner types define
    struct ImageCacheStats {
    public:
        // ImageCacheStats inner types declare
        // clang-format off
        struct ImageData;
        struct OrphanedImage;
        // clang-format on

        // ImageCacheStats inner types define
        struct ImageData {
        public:
            // ImageData inner types define
            enum class ImageState : int {
                InternalError = 0,
                Loading       = 1,
                Decoded       = 2,
                OnGPU         = 3,
                ReadError     = 4,
                DecodeError   = 5,
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 8> mUnk411d85;
            ::ll::UntypedStorage<4, 4> mUnk9a0f23;
            ::ll::UntypedStorage<4, 4> mUnk41b0b0;
            ::ll::UntypedStorage<4, 4> mUnk321ff5;
            ::ll::UntypedStorage<8, 8> mUnk6e0f3a;
            ::ll::UntypedStorage<4, 4> mUnk6bf0ab;
            // NOLINTEND

        public:
            // prevent constructor by default
            ImageData& operator=(ImageData const&);
            ImageData(ImageData const&);
            ImageData();
        };

        struct OrphanedImage {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 8> mUnk677a49;
            ::ll::UntypedStorage<4, 4> mUnk4c90a3;
            ::ll::UntypedStorage<4, 4> mUnkc22932;
            // NOLINTEND

        public:
            // prevent constructor by default
            OrphanedImage& operator=(OrphanedImage const&);
            OrphanedImage(OrphanedImage const&);
            OrphanedImage();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk7551cd;
        ::ll::UntypedStorage<4, 4> mUnka1d346;
        ::ll::UntypedStorage<4, 4> mUnkf67301;
        ::ll::UntypedStorage<8, 8> mUnkd52286;
        ::ll::UntypedStorage<4, 4> mUnkeea677;
        ::ll::UntypedStorage<4, 4> mUnk98ffbf;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImageCacheStats& operator=(ImageCacheStats const&);
        ImageCacheStats(ImageCacheStats const&);
        ImageCacheStats();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SystemCacheStats() = default;

    virtual void Release() = 0;

    virtual ::cohtml::SystemCacheStats::ImageCacheStats const* GetImageCacheStats() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
