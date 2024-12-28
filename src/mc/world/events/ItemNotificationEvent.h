#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

struct ItemNotificationEvent : public ::EventVariantImpl<
                                   ::ShapedRecipeTriggeredEvent const,
                                   ::CraftUpdateResultItemClientEvent const,
                                   ::ItemDefinitionEventTriggeredEvent const,
                                   ::ItemUseOnEvent const,
                                   ::ItemUseEvent const,
                                   ::ItemUsedOnEvent const,
                                   ::ItemStartUseOnEvent const,
                                   ::ItemStopUseOnEvent const,
                                   ::ItemStartUseEvent const,
                                   ::ItemCompleteUseEvent const,
                                   ::ItemReleaseUseEvent const,
                                   ::ItemStopUseEvent const> {
public:
    // prevent constructor by default
    ItemNotificationEvent& operator=(ItemNotificationEvent const&);
    ItemNotificationEvent(ItemNotificationEvent const&);
    ItemNotificationEvent();

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
