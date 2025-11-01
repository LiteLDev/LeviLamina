#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/CraftUpdateResultItemClientEvent.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/ShapedRecipeTriggeredEvent.h"

template <typename Return>
struct ItemGameplayEvent;

template <>
struct ItemGameplayEvent<void> : ConstEventVariant<ShapedRecipeTriggeredEvent, CraftUpdateResultItemClientEvent> {};
