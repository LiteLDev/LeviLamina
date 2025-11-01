#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/ItemCompleteUseEvent.h"
#include "mc/world/events/ItemDefinitionEventTriggeredEvent.h"
#include "mc/world/events/ItemReleaseUseEvent.h"
#include "mc/world/events/ItemStartUseEvent.h"
#include "mc/world/events/ItemStartUseOnEvent.h"
#include "mc/world/events/ItemStopUseEvent.h"
#include "mc/world/events/ItemStopUseOnEvent.h"
#include "mc/world/events/ItemUseEvent.h"
#include "mc/world/events/ItemUseOnEvent.h"
#include "mc/world/events/ItemUsedOnEvent.h"

template <std::size_t N>
struct ItemEventPlaceHolder {
    char pad[N];
};

template<typename Return>
struct MutableItemGameplayEvent;

template <>
struct MutableItemGameplayEvent<CoordinatorResult> : MutableEventVariant<
                                                         ItemDefinitionEventTriggeredEvent,
                                                         ItemUseOnEvent,
                                                         ItemUseEvent,
                                                         ItemUsedOnEvent,
                                                         ItemStartUseOnEvent,
                                                         ItemStopUseOnEvent,
                                                         ItemStartUseEvent,
                                                         ItemCompleteUseEvent,
                                                         ItemReleaseUseEvent,
                                                         ItemStopUseEvent> {
};
