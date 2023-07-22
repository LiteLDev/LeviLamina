/**
 * @file  SetActorLinkPacketSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SetActorLinkPacketSystemImpl.
 *
 */
class SetActorLinkPacketSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETACTORLINKPACKETSYSTEMIMPL
public:
    class SetActorLinkPacketSystemImpl& operator=(class SetActorLinkPacketSystemImpl const &) = delete;
    SetActorLinkPacketSystemImpl(class SetActorLinkPacketSystemImpl const &) = delete;
    SetActorLinkPacketSystemImpl() = delete;
#endif

public:
    /**
     * @symbol  ?_setActorLinkPacketSystem\@SetActorLinkPacketSystemImpl\@\@SAXAEAVStrictEntityContext\@\@AEBUActorUniqueIDComponent\@\@AEBURemovePassengersComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UPassengerInitiatedFlag\@\@\@\@\@\@AEAV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUActorUniqueIDComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@\@\@\@Z
     */
    MCAPI static void _setActorLinkPacketSystem(class StrictEntityContext &, struct ActorUniqueIDComponent const &, struct RemovePassengersComponent const &, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class Optional<class FlagComponent<struct PassengerInitiatedFlag> const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct ActorUniqueIDComponent const> &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent>);

};