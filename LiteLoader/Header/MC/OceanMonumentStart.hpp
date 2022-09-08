/**
 * @file  OceanMonumentStart.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentStart.
 *
 */
class OceanMonumentStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTSTART
public:
    class OceanMonumentStart& operator=(class OceanMonumentStart const &) = delete;
    OceanMonumentStart(class OceanMonumentStart const &) = delete;
    OceanMonumentStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1795944903
     */
    virtual ~OceanMonumentStart();
    /**
     * @vftbl  1
     * @symbol ?postProcess@OceanMonumentStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1506684742
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?createMonument@OceanMonumentStart@@QEAAXAEAVDimension@@AEAVRandom@@HH@Z
     * @hash   -824302583
     */
    MCAPI void createMonument(class Dimension &, class Random &, int, int);

};