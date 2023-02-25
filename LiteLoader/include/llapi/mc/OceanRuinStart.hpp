/**
 * @file  OceanRuinStart.hpp
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
 * @brief MC class OceanRuinStart.
 *
 */
class OceanRuinStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANRUINSTART
public:
    class OceanRuinStart& operator=(class OceanRuinStart const &) = delete;
    OceanRuinStart(class OceanRuinStart const &) = delete;
    OceanRuinStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OceanRuinStart();
    /**
     * @symbol  ?createRuin\@OceanRuinStart\@\@QEAAXAEAVDimension\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI void createRuin(class Dimension &, class Random &, int, int);

};