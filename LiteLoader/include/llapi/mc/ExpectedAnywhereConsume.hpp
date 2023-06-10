/**
 * @file  ExpectedAnywhereConsume.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ExpectedAnywhereConsume {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPECTEDANYWHERECONSUME
public:
    struct ExpectedAnywhereConsume& operator=(struct ExpectedAnywhereConsume const &) = delete;
    ExpectedAnywhereConsume(struct ExpectedAnywhereConsume const &) = delete;
    ExpectedAnywhereConsume() = delete;
#endif

public:
    /**
     * @symbol ??0ExpectedAnywhereConsume\@\@QEAA\@AEBVItemStack\@\@I\@Z
     */
    MCAPI ExpectedAnywhereConsume(class ItemStack const &, unsigned int);

};