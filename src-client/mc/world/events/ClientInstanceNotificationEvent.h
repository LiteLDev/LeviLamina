#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventVariantImpl.h"

// auto generated forward declare list
// clang-format off
struct PlayerViewPerspectiveChangedEvent;
struct ScreenSizeChangedEvent;
// clang-format on

struct ClientInstanceNotificationEvent
: public ::EventVariantImpl<::PlayerViewPerspectiveChangedEvent const, ::ScreenSizeChangedEvent const> {};
