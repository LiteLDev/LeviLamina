#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DynamicJumpControl {

public:
    // prevent constructor by default
    DynamicJumpControl& operator=(DynamicJumpControl const&) = delete;
    DynamicJumpControl(DynamicJumpControl const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initializeInternal\@DynamicJumpControl\@\@UEAAXAEAVMob\@\@PEAUJumpControlDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob&, struct JumpControlDescription*); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?clone\@DynamicJumpControl\@\@UEBA?AV?$unique_ptr\@VJumpControl\@\@U?$default_delete\@VJumpControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class JumpControl> clone() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?tick\@DynamicJumpControl\@\@MEAAXAEAVJumpControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class JumpControlComponent&, class Mob&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getJumpDelay\@DynamicJumpControl\@\@MEBAHAEBVJumpControlComponent\@\@\@Z
     */
    virtual int getJumpDelay(class JumpControlComponent const&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getJumpPower\@DynamicJumpControl\@\@MEBAMAEBVJumpControlComponent\@\@\@Z
     */
    virtual float getJumpPower(class JumpControlComponent const&) const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getJumpType\@DynamicJumpControl\@\@MEBA?AW4JumpType\@\@AEBVJumpControlComponent\@\@\@Z
     */
    virtual enum class JumpType getJumpType(class JumpControlComponent const&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?setJumpType\@DynamicJumpControl\@\@MEAAXAEAVJumpControlComponent\@\@W4JumpType\@\@\@Z
     */
    virtual void setJumpType(class JumpControlComponent&, enum class JumpType); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?resetSpeedModifier\@DynamicJumpControl\@\@MEAAXAEBVJumpControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void resetSpeedModifier(class JumpControlComponent const&, class Mob&); // NOLINT
    /**
     * @symbol ??0DynamicJumpControl\@\@QEAA\@XZ
     */
    MCAPI DynamicJumpControl(); // NOLINT
};
