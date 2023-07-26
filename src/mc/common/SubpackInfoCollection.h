#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubpackInfoCollection {

public:
    // prevent constructor by default
    SubpackInfoCollection& operator=(SubpackInfoCollection const&) = delete;
    SubpackInfoCollection(SubpackInfoCollection const&)            = delete;
    SubpackInfoCollection()                                        = delete;

public:
    /**
     * @symbol ?addSubpackInfo\@SubpackInfoCollection\@\@QEAAX$$QEAUSubpackInfo\@\@\@Z
     */
    MCAPI void addSubpackInfo(struct SubpackInfo&&); // NOLINT
};
