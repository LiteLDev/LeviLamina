#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Interaction;
class ItemDescriptor;
class Player;
struct FeedItem;
namespace SharedTypes::v1_26_50 { struct MountTamingComponentDefinition; }
// clang-format on

class MountTamingComponent {
public:
    // MountTamingComponent inner types define
    using MountTamingDefinition = ::SharedTypes::v1_26_50::MountTamingComponentDefinition;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                              mTemper;
    ::ll::TypedStorage<4, 4, int>                              mCounter;
    ::ll::TypedStorage<4, 4, int>                              mTemperMod;
    ::ll::TypedStorage<4, 4, int>                              mWaitCount;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnTame;
    ::ll::TypedStorage<8, 24, ::std::vector<::FeedItem>>       mFeedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mAutoRejectItems;
    // NOLINTEND

public:
    // prevent constructor by default
    MountTamingComponent(MountTamingComponent const&);
    MountTamingComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void becomeTame(::Actor& owner, bool tamingParticles);

    MCAPI ::Interaction getInteraction(::Actor& owner, ::Player& player);

    MCAPI ::MountTamingComponent& operator=(::MountTamingComponent const&);

    MCAPI void tameToPlayer(::Actor& owner, ::Player& player, bool tamingParticles);

    MCAPI ~MountTamingComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
