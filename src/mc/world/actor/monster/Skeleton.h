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
class EntityContext;
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
    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 154
    virtual bool doHurtTarget(::Actor*, ::SharedTypes::Legacy::ActorDamageCause const&) /*override*/;

    // vIndex: 105
    virtual bool canBeAffected(uint id) const /*override*/;

    // vIndex: 51
    virtual void setTarget(::Actor* entity) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 85
    virtual bool canFreeze() const /*override*/;

    // vIndex: 113
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

    MCFOLD void setSkeletonType(::Skeleton::SkeletonType type);
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI bool $canBeAffected(uint id) const;

    MCFOLD void $setTarget(::Actor* target);

    MCAPI void $normalTick();

    MCAPI bool $canFreeze() const;

    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
