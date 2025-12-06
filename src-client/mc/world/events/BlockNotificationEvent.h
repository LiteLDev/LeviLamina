#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
