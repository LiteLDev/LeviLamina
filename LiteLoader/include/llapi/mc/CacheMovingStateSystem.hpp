/**
 * @file  MC/CacheMovingStateSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace CacheMovingStateSystem.
 *
 */
namespace CacheMovingStateSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   331808180
     * @symbol ?cacheMovingStateForNonRemotePlayers@CacheMovingStateSystem@@YAXAEBVStrictEntityContext@@AEAUSynchedActorDataComponent@@AEAUActorRotationComponent@@AEBUPostTickPositionDeltaComponent@@@Z
     */
    MCAPI void cacheMovingStateForNonRemotePlayers(class StrictEntityContext const &, struct SynchedActorDataComponent &, struct ActorRotationComponent &, struct PostTickPositionDeltaComponent const &);
    /**
     * @hash   -630786018
     * @symbol ?tickCacheMovingState@CacheMovingStateSystem@@YAXV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@USynchedActorDataComponent@@UActorRotationComponent@@V?$Optional@V?$FlagComponent@UMovingFlag@@@@@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UUsesECSMovementFlag@@@@@@U?$Exclude@UPassengerComponent@@V?$FlagComponent@UPlayerComponentFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@USynchedActorDataComponent@@UActorRotationComponent@@V?$Optional@V?$FlagComponent@UMovingFlag@@@@@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UUsesECSMovementFlag@@@@V?$FlagComponent@URemotePlayerComponentFlag@@@@@@U?$Exclude@UPassengerComponent@@@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@USynchedActorDataComponent@@UActorRotationComponent@@$$CBUPostTickPositionDeltaComponent@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UUsesECSMovementFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@@@U?$Exclude@UPassengerComponent@@V?$FlagComponent@URemotePlayerComponentFlag@@@@@@@@@Z
     */
    MCAPI void tickCacheMovingState(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent, struct ActorRotationComponent, class Optional<class FlagComponent<struct MovingFlag>>, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>>, struct Exclude<struct PassengerComponent, class FlagComponent<struct PlayerComponentFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent, struct ActorRotationComponent, class Optional<class FlagComponent<struct MovingFlag>>, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>, class FlagComponent<struct RemotePlayerComponentFlag>>, struct Exclude<struct PassengerComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent, struct ActorRotationComponent, struct PostTickPositionDeltaComponent const, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Exclude<struct PassengerComponent, class FlagComponent<struct RemotePlayerComponentFlag>>>);
    /**
     * @hash   1111215676
     * @symbol ?tickEntity@CacheMovingStateSystem@@YAXAEAVStrictEntityContext@@AEAUSynchedActorDataComponent@@AEAUActorRotationComponent@@V?$Optional@V?$FlagComponent@UMovingFlag@@@@@@@Z
     */
    MCAPI void tickEntity(class StrictEntityContext &, struct SynchedActorDataComponent &, struct ActorRotationComponent &, class Optional<class FlagComponent<struct MovingFlag>>);
    /**
     * @hash   -1115783300
     * @symbol ?tickNonRemotePlayerPassengerEntity@CacheMovingStateSystem@@YAXAEBVStrictEntityContext@@AEBUPassengerComponent@@AEAUSynchedActorDataComponent@@AEAUActorRotationComponent@@AEBUPostTickPositionDeltaComponent@@AEBV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@V?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@@Z
     */
    MCAPI void tickNonRemotePlayerPassengerEntity(class StrictEntityContext const &, struct PassengerComponent const &, struct SynchedActorDataComponent &, struct ActorRotationComponent &, struct PostTickPositionDeltaComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct ControlledByLocalInstanceFlag>> const &);
    /**
     * @hash   -300840814
     * @symbol ?tickPassengerCacheMovingState@CacheMovingStateSystem@@YAXV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUPassengerComponent@@USynchedActorDataComponent@@UActorRotationComponent@@V?$Optional@V?$FlagComponent@UMovingFlag@@@@@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UUsesECSMovementFlag@@@@@@U?$Exclude@V?$FlagComponent@UPlayerComponentFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUPassengerComponent@@USynchedActorDataComponent@@UActorRotationComponent@@V?$Optional@V?$FlagComponent@UMovingFlag@@@@@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UUsesECSMovementFlag@@@@V?$FlagComponent@URemotePlayerComponentFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUPassengerComponent@@USynchedActorDataComponent@@UActorRotationComponent@@$$CBUPostTickPositionDeltaComponent@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UUsesECSMovementFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@@@U?$Exclude@V?$FlagComponent@URemotePlayerComponentFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@V?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@@Z
     */
    MCAPI void tickPassengerCacheMovingState(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const, struct SynchedActorDataComponent, struct ActorRotationComponent, class Optional<class FlagComponent<struct MovingFlag>>, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>>, struct Exclude<class FlagComponent<struct PlayerComponentFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const, struct SynchedActorDataComponent, struct ActorRotationComponent, class Optional<class FlagComponent<struct MovingFlag>>, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>, class FlagComponent<struct RemotePlayerComponentFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const, struct SynchedActorDataComponent, struct ActorRotationComponent, struct PostTickPositionDeltaComponent const, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Exclude<class FlagComponent<struct RemotePlayerComponentFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct ControlledByLocalInstanceFlag>>);
    /**
     * @hash   1123488028
     * @symbol ?tickPassengerEntity@CacheMovingStateSystem@@YAXAEAVStrictEntityContext@@AEBUPassengerComponent@@AEAUSynchedActorDataComponent@@AEAUActorRotationComponent@@V?$Optional@V?$FlagComponent@UMovingFlag@@@@@@AEBV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@V?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@@Z
     */
    MCAPI void tickPassengerEntity(class StrictEntityContext &, struct PassengerComponent const &, struct SynchedActorDataComponent &, struct ActorRotationComponent &, class Optional<class FlagComponent<struct MovingFlag>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct ControlledByLocalInstanceFlag>> const &);

};