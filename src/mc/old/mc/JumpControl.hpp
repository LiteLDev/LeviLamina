/**
 * @file  JumpControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JumpControl.
 *
 */
class JumpControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPCONTROL
public:
    class JumpControl& operator=(class JumpControl const &) = delete;
    JumpControl(class JumpControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~JumpControl();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?clone\@JumpControl\@\@UEBA?AV?$unique_ptr\@VJumpControl\@\@U?$default_delete\@VJumpControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class JumpControl> clone() const;
    /**
     * @vftbl  3
     * @symbol  ?tick\@JumpControl\@\@MEAAXAEAVJumpControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class JumpControlComponent &, class Mob &);
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  ?getJumpPower\@JumpControl\@\@MEBAMAEBVJumpControlComponent\@\@\@Z
     */
    virtual float getJumpPower(class JumpControlComponent const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPCONTROL
    /**
     * @symbol  ?getJumpDelay\@JumpControl\@\@MEBAHAEBVJumpControlComponent\@\@\@Z
     */
    MCVAPI int getJumpDelay(class JumpControlComponent const &) const;
    /**
     * @symbol  ?getJumpType\@JumpControl\@\@MEBA?AW4JumpType\@\@AEBVJumpControlComponent\@\@\@Z
     */
    MCVAPI enum class JumpType getJumpType(class JumpControlComponent const &) const;
    /**
     * @symbol  ?initializeInternal\@JumpControl\@\@UEAAXAEAVMob\@\@PEAUJumpControlDescription\@\@\@Z
     */
    MCVAPI void initializeInternal(class Mob &, struct JumpControlDescription *);
    /**
     * @symbol  ?resetSpeedModifier\@JumpControl\@\@MEAAXAEBVJumpControlComponent\@\@AEAVMob\@\@\@Z
     */
    MCVAPI void resetSpeedModifier(class JumpControlComponent const &, class Mob &);
    /**
     * @symbol  ?setJumpType\@JumpControl\@\@MEAAXAEAVJumpControlComponent\@\@W4JumpType\@\@\@Z
     */
    MCVAPI void setJumpType(class JumpControlComponent &, enum class JumpType);
#endif
    /**
     * @symbol  ??0JumpControl\@\@QEAA\@XZ
     */
    MCAPI JumpControl();

};