#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/ActorInsideBlockEvent.h"
#include "mc/world/events/ActorStandOnBlockEvent.h"
#include "mc/world/events/BlockPatternPostEvent.h"
#include "mc/world/events/BlockPatternPreEvent.h"
#include "mc/world/events/BlockRandomTickEvent.h"
#include "mc/world/events/BlockTryDestroyByPlayerEvent.h"
#include "mc/world/events/BlockTryPlaceByPlayerEvent.h"
#include "mc/world/events/ButtonPushEvent.h"
#include "mc/world/events/ChestBlockTryPairEvent.h"
#include "mc/world/events/CraftUISetResultNameEvent.h"
#include "mc/world/events/ExplosionStartedEvent.h"
#include "mc/world/events/LeverActionEvent.h"
#include "mc/world/events/PistonActionEvent.h"
#include "mc/world/events/PressurePlatePopEvent.h"
#include "mc/world/events/PressurePlatePushEvent.h"
#include "mc/world/events/TargetBlockHitEvent.h"
#include "mc/world/events/TripWireTripEvent.h"

// auto generated inclusion list
#include "mc/world/events/EventVariantImpl.h"

// auto generated forward declare list
// clang-format off
struct ActorInsideBlockEvent;
struct ActorStandOnBlockEvent;
struct BlockPatternPostEvent;
struct BlockPatternPreEvent;
struct BlockRandomTickEvent;
struct BlockTryDestroyByPlayerEvent;
struct BlockTryPlaceByPlayerEvent;
struct ButtonPushEvent;
struct ChestBlockTryPairEvent;
struct CraftUISetResultNameEvent;
struct ExplosionStartedEvent;
struct LeverActionEvent;
struct PistonActionEvent;
struct PressurePlatePopEvent;
struct PressurePlatePushEvent;
struct TargetBlockHitEvent;
struct TripWireTripEvent;
// clang-format on

struct BlockNotificationEvent : public ::EventVariantImpl<
                                    ::BlockPatternPostEvent const,
                                    ::ActorInsideBlockEvent const,
                                    ::ActorStandOnBlockEvent const,
                                    ::BlockPatternPreEvent const,
                                    ::BlockRandomTickEvent const,
                                    ::ChestBlockTryPairEvent const,
                                    ::PistonActionEvent const,
                                    ::LeverActionEvent const,
                                    ::ButtonPushEvent const,
                                    ::PressurePlatePushEvent const,
                                    ::PressurePlatePopEvent const,
                                    ::TargetBlockHitEvent const,
                                    ::TripWireTripEvent const,
                                    ::BlockTryPlaceByPlayerEvent const,
                                    ::CraftUISetResultNameEvent const,
                                    ::ExplosionStartedEvent const,
                                    ::BlockTryDestroyByPlayerEvent const> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockNotificationEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
