/**
 * @file  BlockPosNotificationSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace BlockPosNotificationSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_tickNotifierFilter\@BlockPosNotificationSystemImpl\@\@YAXU?$type_list\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@\@entt\@\@AEBVStrictEntityContext\@\@AEBUBlockPosTrackerComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UStandOnHoneyOrSlimeBlock\@\@\@\@V?$FlagComponent\@UStandOnOtherBlock\@\@\@\@\@\@\@Z
     */
    MCAPI void _tickNotifierFilter(struct entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct OnGroundFlag>>>, class StrictEntityContext const &, struct BlockPosTrackerComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct StandOnHoneyOrSlimeBlock>, class FlagComponent<struct StandOnOtherBlock>>);

};