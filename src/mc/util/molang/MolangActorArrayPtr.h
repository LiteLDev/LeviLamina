#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangActorArrayPtr {

public:
    // prevent constructor by default
    MolangActorArrayPtr& operator=(MolangActorArrayPtr const&) = delete;
    MolangActorArrayPtr(MolangActorArrayPtr const&)            = delete;
    MolangActorArrayPtr()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0MolangActorArrayPtr\@\@QEAA\@V?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI MolangActorArrayPtr(std::vector<class Actor*>);
    /**
     * @symbol ??1MolangActorArrayPtr\@\@QEAA\@XZ
     */
    MCAPI ~MolangActorArrayPtr();
    // NOLINTEND
};
