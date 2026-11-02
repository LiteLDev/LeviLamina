#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/monster/HumanoidMonster.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
class WitherBoss;
struct ActorDefinitionIdentifier;
// clang-format on

class Skeleton : public ::HumanoidMonster {
public:
    // Skeleton inner types define
    enum class SkeletonType : int {
        Default = 0,
        Wither  = 1,
        Stray   = 2,
        Bogged  = 3,
        Parched = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WitherBoss*> mParentWither;
    // NOLINTEND

public:
    // prevent constructor by default
    Skeleton();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual ::ActorHurtResult
    doHurtTarget(::Actor* target, ::SharedTypes::Legacy::ActorDamageCause const& cause) /*override*/;

    virtual bool canBeAffected(uint effectId) const /*override*/;

    virtual void setTarget(::Actor* target) /*override*/;

    virtual void normalTick() /*override*/;

    virtual void getDebugText(::std::vector<::std::string>& outputInfo) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Skeleton(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $die(::ActorDamageSource const& source);

    MCNAPI ::ActorHurtResult $doHurtTarget(::Actor* target, ::SharedTypes::Legacy::ActorDamageCause const& cause);

    MCNAPI bool $canBeAffected(uint effectId) const;

    MCNAPI void $setTarget(::Actor* target);

    MCNAPI void $normalTick();

    MCNAPI void $getDebugText(::std::vector<::std::string>& outputInfo);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
