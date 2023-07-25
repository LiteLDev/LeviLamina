#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobDescriptor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBDESCRIPTOR
public:
    MobDescriptor() = delete;
#endif

public:
    /**
     * @symbol ??0MobDescriptor\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI MobDescriptor(struct MobDescriptor const&);
    /**
     * @symbol ??4MobDescriptor\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct MobDescriptor& operator=(struct MobDescriptor const&);
    /**
     * @symbol ??1MobDescriptor\@\@QEAA\@XZ
     */
    MCAPI ~MobDescriptor();
};
