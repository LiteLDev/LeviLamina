#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
class HitResult;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class FishingHook : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkcf4e6f;
    ::ll::UntypedStorage<4, 4>  mUnk76505b;
    ::ll::UntypedStorage<4, 4>  mUnk7c8b78;
    ::ll::UntypedStorage<4, 12> mUnk924a7e;
    ::ll::UntypedStorage<4, 4>  mUnk492d84;
    ::ll::UntypedStorage<4, 4>  mUnk2f83bf;
    ::ll::UntypedStorage<4, 4>  mUnkecddce;
    ::ll::UntypedStorage<4, 4>  mUnke90b0a;
    ::ll::UntypedStorage<4, 4>  mUnk860015;
    ::ll::UntypedStorage<4, 4>  mUnk5d4d06;
    ::ll::UntypedStorage<4, 4>  mUnk345281;
    ::ll::UntypedStorage<4, 4>  mUnkdbb449;
    ::ll::UntypedStorage<1, 1>  mUnkc2f77f;
    // NOLINTEND

public:
    // prevent constructor by default
    FishingHook& operator=(FishingHook const&);
    FishingHook(FishingHook const&);
    FishingHook();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ~FishingHook() /*override*/ = default;

    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 71
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 36
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 86
    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    // vIndex: 126
    virtual bool shouldDropDeathLoot() const /*override*/;

    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FishingHook(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _fishPosEvent();

    MCAPI void _fishTeaseEvent();

    MCAPI void _fishhookEvent();

    MCAPI float _getWaterPercentage();

    MCAPI ::HitResult _hitCheck();

    MCAPI void _pullCloser(::Actor& inEntity, float inSpeed);

    MCAPI bool _serverHooked();

    MCAPI bool _serverLured();

    MCAPI void _updateGravity();

    MCAPI void _updateServer();

    MCAPI ::Actor* getOwner();

    MCAPI void postNormalTick();

    MCAPI int retrieve();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& BOBBER_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $remove();

    MCAPI float $getShadowRadius() const;

    MCAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCAPI bool $shouldDropDeathLoot() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
