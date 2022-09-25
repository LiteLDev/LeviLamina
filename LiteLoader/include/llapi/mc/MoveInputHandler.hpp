/**
 * @file  MoveInputHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~MoveInputHandler();
    /**
     * @hash   -1091548135
     * @vftbl  1
     * @symbol ?tick@MoveInputHandler@@UEAAXAEAUIPlayerMovementProxy@@@Z
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
     * @hash   -1729873766
     * @vftbl  4
     * @symbol ?clearInputState@MoveInputHandler@@UEAAXXZ
     */
    virtual void clearInputState();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -1191589416
     * @vftbl  9
     * @symbol ?isChangeHeight@MoveInputHandler@@UEBA_NXZ
     */
    virtual bool isChangeHeight() const;
    /**
     * @hash   1518972704
     * @vftbl  11
     * @symbol ?isPlayerMoving@MoveInputHandler@@UEBA_NXZ
     */
    virtual bool isPlayerMoving() const;
    /**
     * @hash   344729313
     * @vftbl  12
     * @symbol ?getGazeDirection@MoveInputHandler@@UEBAAEBVVec3@@XZ
     */
    virtual class Vec3 const & getGazeDirection() const;
    /**
     * @hash   1630557707
     * @vftbl  13
     * @symbol ?extractInputComponent@MoveInputHandler@@UEBA?AUMoveInputComponent@@XZ
     */
    virtual struct MoveInputComponent extractInputComponent() const;
    /**
     * @hash   -2048163186
     * @vftbl  14
     * @symbol ?fillInputPacket@MoveInputHandler@@UEAAXAEAVPlayerAuthInputPacket@@@Z
     */
    virtual void fillInputPacket(class PlayerAuthInputPacket &);
    /**
     * @vftbl  15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15() = 0;
    /**
     * @hash   -120949143
     * @vftbl  16
     * @symbol ?createSnapshot@MoveInputHandler@@UEAA?AV?$unique_ptr@UIReplayableActorInput@@U?$default_delete@UIReplayableActorInput@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<struct IReplayableActorInput> createSnapshot();
    /**
     * @hash   -945892594
     * @symbol ?wantsMoveForward@MoveInputHandler@@QEBA_NXZ
     */
    MCAPI bool wantsMoveForward() const;

//protected:
    /**
     * @hash   -1046247597
     * @symbol ??0MoveInputHandler@@IEAA@XZ
     */
    MCAPI MoveInputHandler();

protected:

};