/**
 * @file  LegacyBodyControl.hpp
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
 * @brief MC class LegacyBodyControl.
 *
 */
class LegacyBodyControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYBODYCONTROL
public:
    class LegacyBodyControl& operator=(class LegacyBodyControl const &) = delete;
    LegacyBodyControl(class LegacyBodyControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -540468064
     */
    virtual ~LegacyBodyControl();
    /**
     * @vftbl  1
     * @symbol ?clientTick@LegacyBodyControl@@UEAAXAEAVMob@@@Z
     * @hash   -1862017313
     */
    virtual void clientTick(class Mob &);
    /**
     * @symbol ??0LegacyBodyControl@@QEAA@XZ
     * @hash   -1901847970
     */
    MCAPI LegacyBodyControl();

};