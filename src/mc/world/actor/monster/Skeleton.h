#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/monster/HumanoidMonster.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class EntityContext;
class WitherBoss;
struct ActorDefinitionIdentifier;
namespace mce { class UUID; }
// clang-format on

class Skeleton : public ::HumanoidMonster {
public:
    // Skeleton inner types define
    enum class SkeletonType : int {
        Default = 0,
        Wither  = 1,
        Stray   = 2,
        Bogged  = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8992a7;
    // NOLINTEND

public:
    // prevent constructor by default
    Skeleton& operator=(Skeleton const&);
    Skeleton(Skeleton const&);
    Skeleton();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 125
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 159
    virtual bool doHurtTarget(::Actor* target, ::ActorDamageCause const& cause) /*override*/;

    // vIndex: 107
    virtual bool canBeAffected(uint id) const /*override*/;

    // vIndex: 52
    virtual void setTarget(::Actor* entity) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 87
    virtual bool canFreeze() const /*override*/;

    // vIndex: 115
    virtual void getDebugText(::std::vector<::std::string>& outputInfo) /*override*/;

    // vIndex: 8
    virtual ~Skeleton() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Skeleton(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void setWitherParent(::WitherBoss* wither);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& SPEED_MODIFIER_ATTACK_UUID();
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
    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI bool $doHurtTarget(::Actor* target, ::ActorDamageCause const& cause);

    MCAPI bool $canBeAffected(uint id) const;

    MCAPI void $setTarget(::Actor* entity);

    MCAPI void $normalTick();

    MCAPI bool $canFreeze() const;

    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
