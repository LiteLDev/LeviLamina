#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangActorArrayPtr {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGACTORARRAYPTR
public:
    MolangActorArrayPtr& operator=(MolangActorArrayPtr const&) = delete;
    MolangActorArrayPtr(MolangActorArrayPtr const&)            = delete;
    MolangActorArrayPtr()                                      = delete;
#endif

public:
    /**
     * @symbol ??0MolangActorArrayPtr\@\@QEAA\@V?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI MolangActorArrayPtr(std::vector<class Actor*>);
    /**
     * @symbol ??1MolangActorArrayPtr\@\@QEAA\@XZ
     */
    MCAPI ~MolangActorArrayPtr();
};
