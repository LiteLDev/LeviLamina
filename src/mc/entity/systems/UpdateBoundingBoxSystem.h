#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class UpdateBoundingBoxSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEBOUNDINGBOXSYSTEM
public:
    UpdateBoundingBoxSystem& operator=(UpdateBoundingBoxSystem const&) = delete;
    UpdateBoundingBoxSystem(UpdateBoundingBoxSystem const&)            = delete;
    UpdateBoundingBoxSystem()                                          = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@UpdateBoundingBoxSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol
     * ?tick\@UpdateBoundingBoxSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@$$CBUShouldUpdateBoundingBoxRequestComponent\@\@VActorOwnerComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Exclude\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@$$CBUShouldUpdateBoundingBoxRequestComponent\@\@VActorOwnerComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UShouldUpdateBoundingBoxRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void
        tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct ShouldUpdateBoundingBoxRequestComponent const, class ActorOwnerComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Exclude<class FlagComponent<struct PlayerComponentFlag>>, struct ShouldUpdateBoundingBoxRequestComponent const, class ActorOwnerComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ShouldUpdateBoundingBoxRequestComponent>);
    /**
     * @symbol ?updateBoundingBoxFromDefinition\@UpdateBoundingBoxSystem\@\@SAXAEAVActor\@\@\@Z
     */
    MCAPI static void updateBoundingBoxFromDefinition(class Actor&);
    /**
     * @symbol ?updatePlayerBoundingBoxFromDefinition\@UpdateBoundingBoxSystem\@\@SAXAEAVPlayer\@\@\@Z
     */
    MCAPI static void updatePlayerBoundingBoxFromDefinition(class Player&);
};
