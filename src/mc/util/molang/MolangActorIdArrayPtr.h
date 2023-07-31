#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangActorIdArrayPtr {

public:
    // prevent constructor by default
    MolangActorIdArrayPtr& operator=(MolangActorIdArrayPtr const&) = delete;
    MolangActorIdArrayPtr(MolangActorIdArrayPtr const&)            = delete;
    MolangActorIdArrayPtr()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0MolangActorIdArrayPtr\@\@QEAA\@V?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI MolangActorIdArrayPtr(std::vector<struct ActorUniqueID>);
    /**
     * @symbol ??1MolangActorIdArrayPtr\@\@QEAA\@XZ
     */
    MCAPI ~MolangActorIdArrayPtr();
    // NOLINTEND
};
