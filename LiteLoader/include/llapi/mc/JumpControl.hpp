/**
 * @file  JumpControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -656568489
     * @vftbl  2
     * @symbol  ?clone\@JumpControl\@\@UEBA?AV?$unique_ptr\@VJumpControl\@\@U?$default_delete\@VJumpControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class JumpControl> clone() const;
    /**
     * @hash   -1838393644
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
     * @hash   753079176
     * @vftbl  5
     * @symbol  ?getJumpPower\@JumpControl\@\@MEBAMAEBVJumpControlComponent\@\@\@Z
     */
    virtual float getJumpPower(class JumpControlComponent const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPCONTROL
    /**
     * @hash   1580998109
     * @symbol  ?getJumpDelay\@JumpControl\@\@MEBAHAEBVJumpControlComponent\@\@\@Z
     */
    MCVAPI int getJumpDelay(class JumpControlComponent const &) const;
    /**
     * @hash   738010689
     * @symbol  ?getJumpType\@JumpControl\@\@MEBA?AW4JumpType\@\@AEBVJumpControlComponent\@\@\@Z
     */
    MCVAPI enum class JumpType getJumpType(class JumpControlComponent const &) const;
    /**
     * @hash   1260571561
     * @symbol  ?initializeInternal\@JumpControl\@\@UEAAXAEAVMob\@\@PEAUJumpControlDescription\@\@\@Z
     */
    MCVAPI void initializeInternal(class Mob &, struct JumpControlDescription *);
    /**
     * @hash   -910761367
     * @symbol  ?resetSpeedModifier\@JumpControl\@\@MEAAXAEBVJumpControlComponent\@\@AEAVMob\@\@\@Z
     */
    MCVAPI void resetSpeedModifier(class JumpControlComponent const &, class Mob &);
    /**
     * @hash   -457830207
     * @symbol  ?setJumpType\@JumpControl\@\@MEAAXAEAVJumpControlComponent\@\@W4JumpType\@\@\@Z
     */
    MCVAPI void setJumpType(class JumpControlComponent &, enum class JumpType);
#endif
    /**
     * @hash   288801355
     * @symbol  ??0JumpControl\@\@QEAA\@XZ
     */
    MCAPI JumpControl();

};