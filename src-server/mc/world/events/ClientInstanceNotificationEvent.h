#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/PlayerViewPerspectiveChangedEvent.h"
#include "mc/world/events/ScreenSizeChangedEvent.h"

// auto generated inclusion list
#include "mc/world/events/EventVariantImpl.h"

// auto generated forward declare list
// clang-format off
struct PlayerViewPerspectiveChangedEvent;
struct ScreenSizeChangedEvent;
// clang-format on

struct ClientInstanceNotificationEvent
: public ::EventVariantImpl<::PlayerViewPerspectiveChangedEvent const, ::ScreenSizeChangedEvent const> {};
