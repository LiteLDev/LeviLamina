#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/BeforeWatchdogTerminateEvent.h"
#include "mc/world/events/EventVariantImpl.h"

template<typename Result>
struct MutableScriptingGameplayEvent;

template <>
struct MutableScriptingGameplayEvent<CoordinatorResult> : MutableEventVariant<BeforeWatchdogTerminateEvent> {
};
