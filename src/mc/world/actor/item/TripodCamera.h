#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class EntityContext;
class Player;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class TripodCamera : public ::Mob {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd137d8;
    ::ll::UntypedStorage<1, 1>  mUnk9b536d;
    ::ll::UntypedStorage<4, 4>  mUnkccdabb;
    // NOLINTEND

public:
    // prevent constructor by default
    TripodCamera& operator=(TripodCamera const&);
    TripodCamera(TripodCamera const&);
    TripodCamera();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 50
    virtual bool isTargetable() const /*override*/;

    // vIndex: 172
    virtual bool canExistWhenDisallowMob() const /*override*/;

    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 8
    virtual ~TripodCamera() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TripodCamera(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void startTakingPicture(::Player& player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI float $getShadowRadius() const;

    MCNAPI bool $isTargetable() const;

    MCNAPI bool $canExistWhenDisallowMob() const;

    MCNAPI void $remove();

    MCNAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
