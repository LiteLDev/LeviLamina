/**
 * @file  MountainAttributes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure MountainAttributes.
 *
 */
struct MountainAttributes {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTAINATTRIBUTES
public:
    struct MountainAttributes& operator=(struct MountainAttributes const &) = delete;
    MountainAttributes(struct MountainAttributes const &) = delete;
    MountainAttributes() = delete;
#endif

public:
    /**
     * @symbol ??0MountainAttributes\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI MountainAttributes(struct MountainAttributes &&);
    /**
     * @symbol ??4MountainAttributes\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct MountainAttributes & operator=(struct MountainAttributes &&);
    /**
     * @symbol ??1MountainAttributes\@\@QEAA\@XZ
     */
    MCAPI ~MountainAttributes();

};