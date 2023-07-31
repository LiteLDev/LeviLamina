#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveControl {

public:
    // prevent constructor by default
    MoveControl& operator=(MoveControl const&) = delete;
    MoveControl(MoveControl const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initializeInternal\@MoveControl\@\@UEAAXAEAVMob\@\@PEAUMoveControlDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob&, struct MoveControlDescription*);
    /**
     * @vftbl 2
     * @symbol ?tick\@MoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent&, class Mob&);
    /**
     * @vftbl 3
     * @symbol ?setWantedPosition\@MoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    virtual void setWantedPosition(class MoveControlComponent&, class Mob&, class Vec3 const&, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveControl();
#endif
    /**
     * @symbol ??0MoveControl\@\@QEAA\@XZ
     */
    MCAPI MoveControl();
    /**
     * @symbol ?getDiffVector\@MoveControl\@\@SA?AVVec3\@\@AEBV2\@AEBVMob\@\@\@Z
     */
    MCAPI static class Vec3 getDiffVector(class Vec3 const&, class Mob const&);
    /**
     * @symbol ?MIN_DELTA_TO_JUMP\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_DELTA_TO_JUMP;
    /**
     * @symbol ?MIN_DELTA_TO_JUMP_UNDERWATER\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_DELTA_TO_JUMP_UNDERWATER;
    /**
     * @symbol ?MIN_DELTA_TO_MOVE\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_DELTA_TO_MOVE;
    /**
     * @symbol ?MIN_SPEED\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_SPEED;
    /**
     * @symbol ?MIN_SPEED_SQR\@MoveControl\@\@2MB
     */
    MCAPI static float const MIN_SPEED_SQR;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?calculateMoveSpeed\@MoveControl\@\@IEAAMAEBVMoveControlComponent\@\@AEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI float calculateMoveSpeed(class MoveControlComponent const&, class Mob&, class Vec3 const&, float);
    /**
     * @symbol ?calculateYRotation\@MoveControl\@\@IEAAMAEBVMoveControlComponent\@\@AEBVMob\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI float calculateYRotation(class MoveControlComponent const&, class Mob const&, class Vec3 const&, float);
    // NOLINTEND
};
