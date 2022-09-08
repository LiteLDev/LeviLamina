/**
 * @file  StrongholdStart.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StrongholdStart.
 *
 */
class StrongholdStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRONGHOLDSTART
public:
    class StrongholdStart& operator=(class StrongholdStart const &) = delete;
    StrongholdStart(class StrongholdStart const &) = delete;
    StrongholdStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   59493498
     */
    virtual ~StrongholdStart();
    /**
     * @vftbl  2
     * @symbol ?isValid@StrongholdStart@@UEBA_NXZ
     * @hash   -1271846754
     */
    virtual bool isValid() const;
    /**
     * @symbol ??0StrongholdStart@@QEAA@AEAVDimension@@AEAVRandom@@HH@Z
     * @hash   -106673894
     */
    MCAPI StrongholdStart(class Dimension &, class Random &, int, int);

//private:
    /**
     * @symbol ?_initializePieceSet@StrongholdStart@@AEAAXAEAVRandom@@@Z
     * @hash   1920833526
     */
    MCAPI void _initializePieceSet(class Random &);

private:

};