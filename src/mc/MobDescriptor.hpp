/**
 * @file  MobDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0MobDescriptor\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI MobDescriptor(struct MobDescriptor const &);
    /**
     * @symbol  ??1MobDescriptor\@\@QEAA\@XZ
     */
    MCAPI ~MobDescriptor();

};