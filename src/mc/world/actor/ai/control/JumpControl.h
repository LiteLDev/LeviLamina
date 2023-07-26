#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JumpControl {

public:
    // prevent constructor by default
    JumpControl& operator=(JumpControl const&) = delete;
    JumpControl(JumpControl const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?clone\@JumpControl\@\@UEBA?AV?$unique_ptr\@VJumpControl\@\@U?$default_delete\@VJumpControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class JumpControl> clone() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?tick\@JumpControl\@\@MEAAXAEAVJumpControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class JumpControlComponent&, class Mob&); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getJumpPower\@JumpControl\@\@MEBAMAEBVJumpControlComponent\@\@\@Z
     */
    virtual float getJumpPower(class JumpControlComponent const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPCONTROL
    /**
     * @symbol ?getJumpDelay\@JumpControl\@\@MEBAHAEBVJumpControlComponent\@\@\@Z
     */
    MCVAPI int getJumpDelay(class JumpControlComponent const&) const; // NOLINT
    /**
     * @symbol ?getJumpType\@JumpControl\@\@MEBA?AW4JumpType\@\@AEBVJumpControlComponent\@\@\@Z
     */
    MCVAPI enum class JumpType getJumpType(class JumpControlComponent const&) const; // NOLINT
    /**
     * @symbol ?initializeInternal\@JumpControl\@\@UEAAXAEAVMob\@\@PEAUJumpControlDescription\@\@\@Z
     */
    MCVAPI void initializeInternal(class Mob&, struct JumpControlDescription*); // NOLINT
    /**
     * @symbol ?resetSpeedModifier\@JumpControl\@\@MEAAXAEBVJumpControlComponent\@\@AEAVMob\@\@\@Z
     */
    MCVAPI void resetSpeedModifier(class JumpControlComponent const&, class Mob&); // NOLINT
    /**
     * @symbol ?setJumpType\@JumpControl\@\@MEAAXAEAVJumpControlComponent\@\@W4JumpType\@\@\@Z
     */
    MCVAPI void setJumpType(class JumpControlComponent&, enum class JumpType); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~JumpControl(); // NOLINT
#endif
    /**
     * @symbol ??0JumpControl\@\@QEAA\@XZ
     */
    MCAPI JumpControl(); // NOLINT
};
