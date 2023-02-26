/**
 * @file  BuriedTreasureStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BuriedTreasureStart.
 *
 */
class BuriedTreasureStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURIEDTREASURESTART
public:
    class BuriedTreasureStart& operator=(class BuriedTreasureStart const &) = delete;
    BuriedTreasureStart(class BuriedTreasureStart const &) = delete;
    BuriedTreasureStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BuriedTreasureStart();
    /**
     * @symbol  ??0BuriedTreasureStart\@\@QEAA\@AEAVDimension\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI BuriedTreasureStart(class Dimension &, class Random &, int, int);

};