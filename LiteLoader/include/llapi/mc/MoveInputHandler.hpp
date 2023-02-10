/**
 * @file  MoveInputHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveInput.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveInputHandler.
 *
 */
class MoveInputHandler : public MoveInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINPUTHANDLER
public:
    class MoveInputHandler& operator=(class MoveInputHandler const &) = delete;
    MoveInputHandler(class MoveInputHandler const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MoveInputHandler();
    /**
     * @hash   -2002376247
     * @vftbl  1
     * @symbol  ?tick\@MoveInputHandler\@\@UEAAXAEAUIPlayerMovementProxy\@\@\@Z
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
     * @hash   1654296170
     * @vftbl  4
     * @symbol  ?clearInputState\@MoveInputHandler\@\@UEAAXXZ
     */
    virtual void clearInputState();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -2042251240
     * @vftbl  9
     * @symbol  ?isChangeHeight\@MoveInputHandler\@\@UEBA_NXZ
     */
    virtual bool isChangeHeight() const;
    /**
     * @hash   608144592
     * @vftbl  10
     * @symbol  ?isPlayerMoving\@MoveInputHandler\@\@UEBA_NXZ
     */
    virtual bool isPlayerMoving() const;
    /**
     * @hash   719760347
     * @vftbl  11
     * @symbol  ?extractInputComponent\@MoveInputHandler\@\@UEBA?AUMoveInputComponent\@\@XZ
     */
    virtual struct MoveInputComponent extractInputComponent() const;
    /**
     * @hash   -1616556141
     * @vftbl  12
     * @symbol  ?applyInputComponent\@MoveInputHandler\@\@UEAAXAEBUMoveInputComponent\@\@\@Z
     */
    virtual void applyInputComponent(struct MoveInputComponent const &);
    /**
     * @hash   1335991374
     * @vftbl  13
     * @symbol  ?fillInputPacket\@MoveInputHandler\@\@UEAAXAEAVPlayerAuthInputPacket\@\@\@Z
     */
    virtual void fillInputPacket(class PlayerAuthInputPacket &);
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14() = 0;
    /**
     * @hash   87072761
     * @vftbl  15
     * @symbol  ?createSnapshot\@MoveInputHandler\@\@UEAA?AV?$unique_ptr\@UIReplayableActorInput\@\@U?$default_delete\@UIReplayableActorInput\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<struct IReplayableActorInput> createSnapshot();
    /**
     * @symbol  ?isAscendBlock\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool isAscendBlock() const;
    /**
     * @symbol  ?isDescendBlock\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool isDescendBlock() const;
    /**
     * @symbol  ?isSneakDown\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool isSneakDown() const;
    /**
     * @symbol  ?isSneakToggleButtonDown\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool isSneakToggleButtonDown() const;
    /**
     * @symbol  ?wantsDownSlow\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool wantsDownSlow() const;
    /**
     * @hash   -1856397810
     * @symbol  ?wantsMoveForward\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool wantsMoveForward() const;
    /**
     * @symbol  ?wantsUpSlow\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool wantsUpSlow() const;

//protected:
    /**
     * @hash   -1957567741
     * @symbol  ??0MoveInputHandler\@\@IEAA\@XZ
     */
    MCAPI MoveInputHandler();
    /**
     * @symbol  ?_calculateMoveVector\@MoveInputHandler\@\@KA?AVVec2\@\@AEBUMoveInputState\@\@\@Z
     */
    MCAPI static class Vec2 _calculateMoveVector(struct MoveInputState const &);

protected:

};