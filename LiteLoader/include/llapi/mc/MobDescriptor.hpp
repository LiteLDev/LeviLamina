/**
 * @file  MobDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure MobDescriptor.
 *
 */
struct MobDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBDESCRIPTOR
public:
    struct MobDescriptor& operator=(struct MobDescriptor const &) = delete;
    MobDescriptor() = delete;
#endif

public:
    /**
     * @hash   -834854715
     * @symbol ??0MobDescriptor@@QEAA@AEBU0@@Z
     */
    MCAPI MobDescriptor(struct MobDescriptor const &);
    /**
     * @hash   937844219
     * @symbol ??1MobDescriptor@@QEAA@XZ
     */
    MCAPI ~MobDescriptor();

};