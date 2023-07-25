#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINFO
public:
    ActorInfo() = delete;
#endif

public:
    /**
     * @symbol ??0ActorInfo\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorInfo(struct ActorInfo const&);
    /**
     * @symbol ?load\@ActorInfo\@\@QEAAXPEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const*);
    /**
     * @symbol ??4ActorInfo\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ActorInfo& operator=(struct ActorInfo const&);
    /**
     * @symbol
     * ?save\@ActorInfo\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol ??1ActorInfo\@\@QEAA\@XZ
     */
    MCAPI ~ActorInfo();
};
