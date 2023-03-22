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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@MoveInputHandler\@\@UEAAXAEAUIPlayerMovementProxy\@\@\@Z
     */
    virtual void tick(struct IPlayerMovementProxy &);
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?clearInputState\@MoveInputHandler\@\@UEAAXXZ
     */
    virtual void clearInputState();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 9
     * @symbol ?isChangeHeight\@MoveInputHandler\@\@UEBA_NXZ
     */
    virtual bool isChangeHeight() const;
    /**
     * @vftbl 10
     * @symbol ?isPlayerMoving\@MoveInputHandler\@\@UEBA_NXZ
     */
    virtual bool isPlayerMoving() const;
    /**
     * @vftbl 11
     * @symbol ?extractInputComponent\@MoveInputHandler\@\@UEBA?AUMoveInputComponent\@\@XZ
     */
    virtual struct MoveInputComponent extractInputComponent() const;
    /**
     * @vftbl 12
     * @symbol ?applyInputComponent\@MoveInputHandler\@\@UEAAXAEBUMoveInputComponent\@\@\@Z
     */
    virtual void applyInputComponent(struct MoveInputComponent const &);
    /**
     * @vftbl 13
     * @symbol ?fillInputPacket\@MoveInputHandler\@\@UEAAXAEAVPlayerAuthInputPacket\@\@\@Z
     */
    virtual void fillInputPacket(class PlayerAuthInputPacket &);
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14() = 0;
    /**
     * @vftbl 15
     * @symbol ?createSnapshot\@MoveInputHandler\@\@UEAA?AV?$unique_ptr\@UIReplayableActorInput\@\@U?$default_delete\@UIReplayableActorInput\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<struct IReplayableActorInput> createSnapshot();
    /**
     * @vftbl 16
     * @symbol ?getClientRawInputStateCopy\@MoveInputHandler\@\@UEBA?AUMoveInputState\@\@XZ
     */
    virtual struct MoveInputState getClientRawInputStateCopy() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEINPUTHANDLER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveInputHandler();
#endif
    /**
     * @symbol ?isAscendBlock\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool isAscendBlock() const;
    /**
     * @symbol ?isDescendBlock\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool isDescendBlock() const;
    /**
     * @symbol ?isSneakDown\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool isSneakDown() const;
    /**
     * @symbol ?isSneakToggleButtonDown\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool isSneakToggleButtonDown() const;
    /**
     * @symbol ?setInputState\@MoveInputHandler\@\@QEAAXAEAUMoveInputState\@\@\@Z
     */
    MCAPI void setInputState(struct MoveInputState &);
    /**
     * @symbol ?wantsDownSlow\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool wantsDownSlow() const;
    /**
     * @symbol ?wantsMoveForward\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool wantsMoveForward() const;
    /**
     * @symbol ?wantsUpSlow\@MoveInputHandler\@\@QEBA_NXZ
     */
    MCAPI bool wantsUpSlow() const;

//protected:
    /**
     * @symbol ??0MoveInputHandler\@\@IEAA\@XZ
     */
    MCAPI MoveInputHandler();

protected:

};
