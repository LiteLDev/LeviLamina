/**
 * @file  ShipwreckStart.hpp
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
 * @brief MC class ShipwreckStart.
 *
 */
class ShipwreckStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIPWRECKSTART
public:
    class ShipwreckStart& operator=(class ShipwreckStart const &) = delete;
    ShipwreckStart(class ShipwreckStart const &) = delete;
    ShipwreckStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ShipwreckStart();
    /**
     * @symbol  ??0ShipwreckStart\@\@QEAA\@AEBVBiomeSource\@\@AEAVRandom\@\@HHF\@Z
     */
    MCAPI ShipwreckStart(class BiomeSource const &, class Random &, int, int, short);

};