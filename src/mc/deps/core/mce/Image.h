#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/mce/ImageFormat.h"
#include "mc/deps/core/mce/ImageUsage.h"

namespace mce {

struct Image {
public:
    // prevent constructor by default
    Image& operator=(Image const&);
    Image(Image const&);
    Image();

public:
    // NOLINTBEGIN
    // symbol: ??0Image@mce@@QEAA@IIW4ImageFormat@1@W4ImageUsage@1@@Z
    MCAPI Image(uint w, uint h, ::mce::ImageFormat format, ::mce::ImageUsage usage);

    // symbol: ?clone@Image@mce@@QEBA?AU12@XZ
    MCAPI struct mce::Image clone() const;

    // symbol: ?isEmpty@Image@mce@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ??4Image@mce@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct mce::Image& operator=(struct mce::Image&&);

    // symbol: ?resizeImageBytesToFitImageDescription@Image@mce@@QEAAXXZ
    MCAPI void resizeImageBytesToFitImageDescription();

    // symbol: ??1Image@mce@@QEAA@XZ
    MCAPI ~Image();

    // NOLINTEND
};

}; // namespace mce
