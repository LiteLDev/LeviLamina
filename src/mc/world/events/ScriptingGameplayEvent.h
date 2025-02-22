#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/ScriptCommandMessageEvent.h"
#include "mc/world/events/ScriptModuleShutdownEvent.h"
#include "mc/world/events/ScriptModuleStartupEvent.h"

template <typename Result>
struct ScriptingGameplayEvent;

template <>
struct ScriptingGameplayEvent<CoordinatorResult>
: ConstEventVariant<ScriptCommandMessageEvent, ScriptModuleStartupEvent, ScriptModuleShutdownEvent> {
    using ConstEventVariant<ScriptCommandMessageEvent, ScriptModuleStartupEvent, ScriptModuleShutdownEvent>::
        ConstEventVariant;
};