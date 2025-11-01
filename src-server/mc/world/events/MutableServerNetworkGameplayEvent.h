#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/ChatEvent.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/IncomingPacketEvent.h"
#include "mc/world/events/OutgoingPacketEvent.h"

template<typename Return>
struct MutableServerNetworkGameplayEvent;

template <>
struct MutableServerNetworkGameplayEvent<CoordinatorResult>
: MutableEventVariant<ChatEvent, IncomingPacketEvent, OutgoingPacketEvent> {};