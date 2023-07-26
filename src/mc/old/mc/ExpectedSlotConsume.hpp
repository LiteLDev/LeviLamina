/**
 * @file  ExpectedSlotConsume.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ExpectedSlotConsume {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPECTEDSLOTCONSUME
public:
    struct ExpectedSlotConsume& operator=(struct ExpectedSlotConsume const &) = delete;
    ExpectedSlotConsume(struct ExpectedSlotConsume const &) = delete;
    ExpectedSlotConsume() = delete;
#endif

public:
    /**
     * @symbol  ??0ExpectedSlotConsume\@\@QEAA\@W4ContainerEnumName\@\@EAEBVItemStack\@\@E\@Z
     */
    MCAPI ExpectedSlotConsume(enum class ContainerEnumName, unsigned char, class ItemStack const &, unsigned char);

};