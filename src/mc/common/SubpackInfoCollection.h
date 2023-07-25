#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubpackInfoCollection {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBPACKINFOCOLLECTION
public:
    SubpackInfoCollection& operator=(SubpackInfoCollection const&) = delete;
    SubpackInfoCollection(SubpackInfoCollection const&)            = delete;
    SubpackInfoCollection()                                        = delete;
#endif

public:
    /**
     * @symbol ?addSubpackInfo\@SubpackInfoCollection\@\@QEAAX$$QEAUSubpackInfo\@\@\@Z
     */
    MCAPI void addSubpackInfo(struct SubpackInfo&&);
};
