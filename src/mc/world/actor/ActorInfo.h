#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorInfo {

public:
    // prevent constructor by default
    ActorInfo() = delete;

public:
    /**
     * @symbol ??0ActorInfo\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorInfo(struct ActorInfo const&); // NOLINT
    /**
     * @symbol ?load\@ActorInfo\@\@QEAAXPEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const*); // NOLINT
    /**
     * @symbol ??4ActorInfo\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ActorInfo& operator=(struct ActorInfo const&); // NOLINT
    /**
     * @symbol
     * ?save\@ActorInfo\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const; // NOLINT
    /**
     * @symbol ??1ActorInfo\@\@QEAA\@XZ
     */
    MCAPI ~ActorInfo(); // NOLINT
};
