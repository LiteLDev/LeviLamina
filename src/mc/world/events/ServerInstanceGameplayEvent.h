#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/ServerInstanceLeaveGameDoneEvent.h"
#include "mc/world/events/ServerInstanceRequestResourceReload.h"

template <typename Return>
struct ServerInstanceGameplayEvent;

template <>
struct ServerInstanceGameplayEvent<void>
: ConstEventVariant<ServerInstanceLeaveGameDoneEvent, ServerInstanceRequestResourceReload> {};

struct ServerInstanceNotificationEvent;
