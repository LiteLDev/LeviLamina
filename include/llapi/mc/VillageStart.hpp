/**
 * @file  VillageStart.hpp
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
 * @brief MC class VillageStart.
 *
 */
class VillageStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGESTART
public:
    class VillageStart& operator=(class VillageStart const &) = delete;
    VillageStart(class VillageStart const &) = delete;
    VillageStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~VillageStart();
    /**
     * @vftbl  2
     * @symbol  ?isValid\@VillageStart\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @symbol  ??0VillageStart\@\@QEAA\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@HHAEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI VillageStart(class Dimension &, class BiomeSource const &, class Random &, int, int, class IPreliminarySurfaceProvider const &);

};