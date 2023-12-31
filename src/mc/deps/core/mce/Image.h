#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/Blob.h"

// auto generated inclusion list
#include "mc/deps/core/mce/ImageFormat.h"
#include "mc/deps/core/mce/ImageUsage.h"

namespace mce {

struct Image {
public:
    ImageFormat imageFormat{}; // this+0x0
    uint        mWidth{};      // this+0x4
    uint        mHeight{};     // this+0x8
    uint        mDepth{};      // this+0xC
    ImageUsage  mUsage{};      // this+0x10
    Blob        mImageBytes;   // this+0x18

    [[nodiscard]] constexpr Image()                        = default;
    LL_CLANG_CEXPR Image& operator=(Image&&) noexcept      = default;
    [[nodiscard]] constexpr Image(Image&&) noexcept        = default;
    LL_CLANG_CEXPR Image& operator=(Image const&) noexcept = default;
    [[nodiscard]] constexpr Image(Image const&) noexcept   = default;

public:
    // NOLINTBEGIN
    // symbol: ??0Image@mce@@QEAA@IIW4ImageFormat@1@W4ImageUsage@1@@Z
    MCAPI Image(uint w, uint h, ::mce::ImageFormat format, ::mce::ImageUsage usage);

    // symbol: ?clone@Image@mce@@QEBA?AU12@XZ
    MCAPI struct mce::Image clone() const;

    // symbol: ?isEmpty@Image@mce@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?resizeImageBytesToFitImageDescription@Image@mce@@QEAAXXZ
    MCAPI void resizeImageBytesToFitImageDescription();

    // symbol: ??1Image@mce@@QEAA@XZ
    MCAPI ~Image();

    // NOLINTEND
};

}; // namespace mce
