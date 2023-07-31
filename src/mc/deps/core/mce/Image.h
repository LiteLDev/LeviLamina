#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { enum class ImageFormat; }
namespace mce { enum class ImageUsage; }
// clang-format on

namespace mce {

struct Image {

public:
    // prevent constructor by default
    Image& operator=(Image const&) = delete;
    Image(Image const&)            = delete;
    Image()                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Image\@mce\@\@QEAA\@IIW4ImageFormat\@1\@W4ImageUsage\@1\@\@Z
     */
    MCAPI Image(unsigned int, unsigned int, enum class mce::ImageFormat, enum class mce::ImageUsage);
    /**
     * @symbol ?clone\@Image\@mce\@\@QEBA?AU12\@XZ
     */
    MCAPI struct mce::Image clone() const;
    /**
     * @symbol ?isEmpty\@Image\@mce\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ??4Image\@mce\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct mce::Image& operator=(struct mce::Image&&);
    /**
     * @symbol ?resizeImageBytesToFitImageDescription\@Image\@mce\@\@QEAAXXZ
     */
    MCAPI void resizeImageBytesToFitImageDescription();
    /**
     * @symbol ??1Image\@mce\@\@QEAA\@XZ
     */
    MCAPI ~Image();
    // NOLINTEND
};

}; // namespace mce
