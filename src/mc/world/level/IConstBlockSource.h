#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IConstBlockSource {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICONSTBLOCKSOURCE
public:
    IConstBlockSource& operator=(IConstBlockSource const&) = delete;
    IConstBlockSource(IConstBlockSource const&)            = delete;
    IConstBlockSource()                                    = delete;
#endif

public:
    /**
     * @symbol ?checkMaterial\@IConstBlockSource\@\@QEBA_NAEBVAABB\@\@W4MaterialType\@\@\@Z
     */
    MCAPI bool checkMaterial(class AABB const&, enum class MaterialType) const;
};
