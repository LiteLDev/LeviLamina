/**
 * @file  MC/MoveInput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveInput.
 *
 */
class MoveInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINPUT
public:
    class MoveInput& operator=(class MoveInput const &) = delete;
    MoveInput(class MoveInput const &) = delete;
    MoveInput() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveInput();
    /**
     * @hash   949254385
     * @vftbl  1
     * @symbol ?tick@MoveInput@@UEAAXAEAUIPlayerMovementProxy@@@Z
     */
    virtual void tick(struct IPlayerMovementProxy &);
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -441735390
     * @vftbl  4
     * @symbol ?clearInputState@MoveInput@@UEAAXXZ
     */
    virtual void clearInputState();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -1853283368
     * @vftbl  6
     * @symbol ?allowPicking@MoveInput@@UEAA_NMM@Z
     */
    virtual bool allowPicking(float, float);
    /**
     * @hash   -1409396596
     * @vftbl  7
     * @symbol ?setJumping@MoveInput@@UEAAX_N@Z
     */
    virtual void setJumping(bool);
    /**
     * @hash   -415612417
     * @vftbl  8
     * @symbol ?setAutoJumpingInWater@MoveInput@@UEAAX_N@Z
     */
    virtual void setAutoJumpingInWater(bool);
    /**
     * @hash   -213520000
     * @vftbl  9
     * @symbol ?isChangeHeight@MoveInput@@UEBA_NXZ
     */
    virtual bool isChangeHeight() const;
    /**
     * @hash   1726213178
     * @vftbl  10
     * @symbol ?setSneakDown@MoveInput@@UEAAX_N@Z
     */
    virtual void setSneakDown(bool);
    /**
     * @hash   936594968
     * @vftbl  11
     * @symbol ?isPlayerMoving@MoveInput@@UEBA_NXZ
     */
    virtual bool isPlayerMoving() const;
    /**
     * @hash   930757865
     * @vftbl  12
     * @symbol ?getGazeDirection@MoveInput@@UEBAAEBVVec3@@XZ
     */
    virtual class Vec3 const & getGazeDirection() const;
    /**
     * @hash   730625059
     * @vftbl  13
     * @symbol ?extractInputComponent@MoveInput@@UEBA?AUMoveInputComponent@@XZ
     */
    virtual struct MoveInputComponent extractInputComponent() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEINPUT
    /**
     * @hash   877907331
     * @symbol ?clearMovementState@MoveInput@@UEAAXXZ
     */
    MCVAPI void clearMovementState();
    /**
     * @hash   -1400860962
     * @symbol ?render@MoveInput@@UEAAXM@Z
     */
    MCVAPI void render(float);
    /**
     * @hash   -12370696
     * @symbol ?setKey@MoveInput@@UEAAXH_N@Z
     */
    MCVAPI void setKey(int, bool);
#endif

};