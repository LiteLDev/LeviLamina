#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobDescriptor {

public:
    // prevent constructor by default
    MobDescriptor() = delete;

public:
    /**
     * @symbol ??0MobDescriptor\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI MobDescriptor(struct MobDescriptor const&); // NOLINT
    /**
     * @symbol ??4MobDescriptor\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct MobDescriptor& operator=(struct MobDescriptor const&); // NOLINT
    /**
     * @symbol ??1MobDescriptor\@\@QEAA\@XZ
     */
    MCAPI ~MobDescriptor(); // NOLINT
};
