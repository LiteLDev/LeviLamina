#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IConstBlockSource {

public:
    // prevent constructor by default
    IConstBlockSource& operator=(IConstBlockSource const&) = delete;
    IConstBlockSource(IConstBlockSource const&)            = delete;
    IConstBlockSource()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?checkMaterial\@IConstBlockSource\@\@QEBA_NAEBVAABB\@\@W4MaterialType\@\@\@Z
     */
    MCAPI bool checkMaterial(class AABB const&, enum class MaterialType) const;
    // NOLINTEND
};
