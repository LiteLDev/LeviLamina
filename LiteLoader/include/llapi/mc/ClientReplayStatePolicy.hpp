/**
 * @file  ClientReplayStatePolicy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientReplayStatePolicy.
 *
 */
class ClientReplayStatePolicy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTREPLAYSTATEPOLICY
public:
    class ClientReplayStatePolicy& operator=(class ClientReplayStatePolicy const &) = delete;
    ClientReplayStatePolicy(class ClientReplayStatePolicy const &) = delete;
    ClientReplayStatePolicy() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isReplayNeeded\@ClientReplayStatePolicy\@\@UEBA_NW4AdvanceFrameResult\@\@\@Z
     */
    virtual bool isReplayNeeded(enum class AdvanceFrameResult) const;
    /**
     * @vftbl 2
     * @symbol ?canRewindToFrame\@ClientReplayStatePolicy\@\@UEAA_NAEAVEntityContext\@\@_K1\@Z
     */
    virtual bool canRewindToFrame(class EntityContext &, unsigned __int64, unsigned __int64);
    /**
     * @vftbl 3
     * @symbol ?shouldCorrectMovement\@ClientReplayStatePolicy\@\@UEAA?AUMovementCorrection\@\@AEAVEntityContext\@\@AEBVIConstBlockSource\@\@AEBVPlayerAuthInputPacket\@\@_K\@Z
     */
    virtual struct MovementCorrection shouldCorrectMovement(class EntityContext &, class IConstBlockSource const &, class PlayerAuthInputPacket const &, unsigned __int64);
    /**
     * @vftbl 4
     * @symbol ?flagUnsupportedMovement\@ClientReplayStatePolicy\@\@UEAAX_K\@Z
     */
    virtual void flagUnsupportedMovement(unsigned __int64);
    /**
     * @vftbl 5
     * @symbol ?storeCurrentFrameSupported\@ClientReplayStatePolicy\@\@UEAAX_KAEAVEntityContext\@\@AEBVIConstBlockSource\@\@\@Z
     */
    virtual void storeCurrentFrameSupported(unsigned __int64, class EntityContext &, class IConstBlockSource const &);
    /**
     * @symbol ?_checkSupportedFrame\@ClientReplayStatePolicy\@\@QEBA_NAEAVEntityContext\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI bool _checkSupportedFrame(class EntityContext &, class IConstBlockSource const &) const;

};
