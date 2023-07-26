#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockGeometryComponent {

public:
    // prevent constructor by default
    BlockGeometryComponent& operator=(BlockGeometryComponent const&) = delete;
    BlockGeometryComponent(BlockGeometryComponent const&)            = delete;
    BlockGeometryComponent()                                         = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKGEOMETRYCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockGeometryComponent(); // NOLINT
#endif
    /**
     * @symbol ??0BlockGeometryComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockGeometryComponent(struct BlockGeometryComponent&&); // NOLINT
    /**
     * @symbol ??4BlockGeometryComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockGeometryComponent& operator=(struct BlockGeometryComponent&&); // NOLINT
};
