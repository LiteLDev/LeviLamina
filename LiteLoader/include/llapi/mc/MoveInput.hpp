/**
 * @file  MoveInput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~MoveInput();
    /**
     * @hash   1041141361
     * @vftbl  1
     * @symbol  ?tick\@MoveInput\@\@UEAAXAEAUIPlayerMovementProxy\@\@\@Z
     */
    virtual void tick(struct IPlayerMovementProxy &);
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -349848414
     * @vftbl  4
     * @symbol  ?clearInputState\@MoveInput\@\@UEAAXXZ
     */
    virtual void clearInputState();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -1753385496
     * @vftbl  6
     * @symbol  ?allowPicking\@MoveInput\@\@UEAA_NMM\@Z
     */
    virtual bool allowPicking(float, float);
    /**
     * @hash   1957152444
     * @vftbl  7
     * @symbol  ?setJumping\@MoveInput\@\@UEAAX_N\@Z
     */
    virtual void setJumping(bool);
    /**
     * @hash   -1344030673
     * @vftbl  8
     * @symbol  ?setAutoJumpingInWater\@MoveInput\@\@UEAAX_N\@Z
     */
    virtual void setAutoJumpingInWater(bool);
    /**
     * @hash   -112899456
     * @vftbl  9
     * @symbol  ?isChangeHeight\@MoveInput\@\@UEBA_NXZ
     */
    virtual bool isChangeHeight() const;
    /**
     * @hash   1037215512
     * @vftbl  10
     * @symbol  ?isPlayerMoving\@MoveInput\@\@UEBA_NXZ
     */
    virtual bool isPlayerMoving() const;
    /**
     * @hash   -180172301
     * @vftbl  11
     * @symbol  ?extractInputComponent\@MoveInput\@\@UEBA?AUMoveInputComponent\@\@XZ
     */
    virtual struct MoveInputComponent extractInputComponent() const;
    /**
     * @hash   -239315205
     * @vftbl  12
     * @symbol  ?applyInputComponent\@MoveInput\@\@UEAAXAEBUMoveInputComponent\@\@\@Z
     */
    virtual void applyInputComponent(struct MoveInputComponent const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEINPUT
    /**
     * @hash   969794307
     * @symbol  ?clearMovementState\@MoveInput\@\@UEAAXXZ
     */
    MCVAPI void clearMovementState();
    /**
     * @hash   -1308973986
     * @symbol  ?render\@MoveInput\@\@UEAAXM\@Z
     */
    MCVAPI void render(float);
    /**
     * @hash   79516280
     * @symbol  ?setKey\@MoveInput\@\@UEAAXH_N\@Z
     */
    MCVAPI void setKey(int, bool);
#endif

};