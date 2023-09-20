/**
 * @file  StartGlidingActionSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace StartGlidingActionSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?doStartGlidingAction\@StartGlidingActionSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUPlayerActionComponent\@\@AEAUSynchedActorDataComponent\@\@V?$optional_ref\@UElytraFlightTimeTicksComponent\@\@\@\@AEBUTick\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UShouldUpdateBoundingBoxRequestComponent\@\@\@\@\@Z
     */
    MCAPI void doStartGlidingAction(class StrictEntityContext const &, struct PlayerActionComponent const &, struct SynchedActorDataComponent &, class optional_ref<struct ElytraFlightTimeTicksComponent>, struct Tick const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ShouldUpdateBoundingBoxRequestComponent> &);

};