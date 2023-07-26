#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangActorIdArrayPtr {

public:
    // prevent constructor by default
    MolangActorIdArrayPtr& operator=(MolangActorIdArrayPtr const&) = delete;
    MolangActorIdArrayPtr(MolangActorIdArrayPtr const&)            = delete;
    MolangActorIdArrayPtr()                                        = delete;

public:
    /**
     * @symbol
     * ??0MolangActorIdArrayPtr\@\@QEAA\@V?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI MolangActorIdArrayPtr(std::vector<struct ActorUniqueID>); // NOLINT
    /**
     * @symbol ??1MolangActorIdArrayPtr\@\@QEAA\@XZ
     */
    MCAPI ~MolangActorIdArrayPtr(); // NOLINT
};
