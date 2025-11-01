#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/CraftUpdateResultItemClientEvent.h"
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
#include "mc/world/events/ShapedRecipeTriggeredEvent.h"

// auto generated inclusion list
#include "mc/world/events/EventVariantImpl.h"

// auto generated forward declare list
// clang-format off
struct CraftUpdateResultItemClientEvent;
struct ItemCompleteUseEvent;
struct ItemDefinitionEventTriggeredEvent;
struct ItemReleaseUseEvent;
struct ItemStartUseEvent;
struct ItemStartUseOnEvent;
struct ItemStopUseEvent;
struct ItemStopUseOnEvent;
struct ItemUseEvent;
struct ItemUseOnEvent;
struct ItemUsedOnEvent;
struct ShapedRecipeTriggeredEvent;
// clang-format on

struct ItemNotificationEvent : public ::EventVariantImpl<::ShapedRecipeTriggeredEvent const, ::CraftUpdateResultItemClientEvent const, ::ItemDefinitionEventTriggeredEvent const, ::ItemUseOnEvent const, ::ItemUseEvent const, ::ItemUsedOnEvent const, ::ItemStartUseOnEvent const, ::ItemStopUseOnEvent const, ::ItemStartUseEvent const, ::ItemCompleteUseEvent const, ::ItemReleaseUseEvent const, ::ItemStopUseEvent const> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemNotificationEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
