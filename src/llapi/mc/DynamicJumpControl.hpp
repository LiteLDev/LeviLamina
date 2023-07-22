/**
 * @file  DynamicJumpControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DynamicJumpControl.
 *
 */
class DynamicJumpControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYNAMICJUMPCONTROL
public:
    class DynamicJumpControl& operator=(class DynamicJumpControl const &) = delete;
    DynamicJumpControl(class DynamicJumpControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DynamicJumpControl();
    /**
     * @vftbl  1
     * @symbol  ?initializeInternal\@DynamicJumpControl\@\@UEAAXAEAVMob\@\@PEAUJumpControlDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob &, struct JumpControlDescription *);
    /**
     * @vftbl  2
     * @symbol  ?clone\@DynamicJumpControl\@\@UEBA?AV?$unique_ptr\@VJumpControl\@\@U?$default_delete\@VJumpControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class JumpControl> clone() const;
    /**
     * @vftbl  3
     * @symbol  ?tick\@DynamicJumpControl\@\@MEAAXAEAVJumpControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class JumpControlComponent &, class Mob &);
    /**
     * @vftbl  4
     * @symbol  ?getJumpDelay\@DynamicJumpControl\@\@MEBAHAEBVJumpControlComponent\@\@\@Z
     */
    virtual int getJumpDelay(class JumpControlComponent const &) const;
    /**
     * @vftbl  5
     * @symbol  ?getJumpPower\@DynamicJumpControl\@\@MEBAMAEBVJumpControlComponent\@\@\@Z
     */
    virtual float getJumpPower(class JumpControlComponent const &) const;
    /**
     * @vftbl  6
     * @symbol  ?getJumpType\@DynamicJumpControl\@\@MEBA?AW4JumpType\@\@AEBVJumpControlComponent\@\@\@Z
     */
    virtual enum class JumpType getJumpType(class JumpControlComponent const &) const;
    /**
     * @vftbl  7
     * @symbol  ?setJumpType\@DynamicJumpControl\@\@MEAAXAEAVJumpControlComponent\@\@W4JumpType\@\@\@Z
     */
    virtual void setJumpType(class JumpControlComponent &, enum class JumpType);
    /**
     * @vftbl  8
     * @symbol  ?resetSpeedModifier\@DynamicJumpControl\@\@MEAAXAEBVJumpControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void resetSpeedModifier(class JumpControlComponent const &, class Mob &);
    /**
     * @symbol  ??0DynamicJumpControl\@\@QEAA\@XZ
     */
    MCAPI DynamicJumpControl();

};