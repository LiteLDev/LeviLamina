#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

class JumpControl : public ::Control {

public:
    // prevent constructor by default
    JumpControl& operator=(JumpControl const&) = delete;
    JumpControl(JumpControl const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initializeInternal\@JumpControl\@\@UEAAXAEAVMob\@\@PEAUJumpControlDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob&, struct JumpControlDescription*);
    /**
     * @vftbl 2
     * @symbol
     * ?clone\@JumpControl\@\@UEBA?AV?$unique_ptr\@VJumpControl\@\@U?$default_delete\@VJumpControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class JumpControl> clone() const;
    /**
     * @vftbl 3
     * @symbol ?tick\@JumpControl\@\@MEAAXAEAVJumpControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class JumpControlComponent&, class Mob&);
    /**
     * @vftbl 4
     * @symbol ?getJumpDelay\@JumpControl\@\@MEBAHAEBVJumpControlComponent\@\@\@Z
     */
    virtual int getJumpDelay(class JumpControlComponent const&) const;
    /**
     * @vftbl 5
     * @symbol ?getJumpPower\@JumpControl\@\@MEBAMAEBVJumpControlComponent\@\@\@Z
     */
    virtual float getJumpPower(class JumpControlComponent const&) const;
    /**
     * @vftbl 6
     * @symbol ?getJumpType\@JumpControl\@\@MEBA?AW4JumpType\@\@AEBVJumpControlComponent\@\@\@Z
     */
    virtual enum class JumpType getJumpType(class JumpControlComponent const&) const;
    /**
     * @vftbl 7
     * @symbol ?setJumpType\@JumpControl\@\@MEAAXAEAVJumpControlComponent\@\@W4JumpType\@\@\@Z
     */
    virtual void setJumpType(class JumpControlComponent&, enum class JumpType);
    /**
     * @vftbl 8
     * @symbol ?resetSpeedModifier\@JumpControl\@\@MEAAXAEBVJumpControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void resetSpeedModifier(class JumpControlComponent const&, class Mob&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPCONTROL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~JumpControl();
#endif
    /**
     * @symbol ??0JumpControl\@\@QEAA\@XZ
     */
    MCAPI JumpControl();
    // NOLINTEND
};
