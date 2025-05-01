#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
namespace mce { class Color; }
// clang-format on

class Squid : public ::Mob {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk7fce78;
    ::ll::UntypedStorage<4, 4>  mUnk5e9d92;
    ::ll::UntypedStorage<4, 4>  mUnk50b096;
    ::ll::UntypedStorage<4, 4>  mUnk62e2ee;
    ::ll::UntypedStorage<4, 4>  mUnk713e69;
    ::ll::UntypedStorage<4, 4>  mUnkb67107;
    ::ll::UntypedStorage<4, 4>  mUnk7592ae;
    ::ll::UntypedStorage<4, 4>  mUnke10f3c;
    ::ll::UntypedStorage<4, 4>  mUnkcf3931;
    ::ll::UntypedStorage<4, 4>  mUnkd1e7d7;
    ::ll::UntypedStorage<4, 4>  mUnkd41b7e;
    ::ll::UntypedStorage<4, 4>  mUnk159f78;
    ::ll::UntypedStorage<4, 4>  mUnk21f29d;
    ::ll::UntypedStorage<4, 4>  mUnka0bf64;
    ::ll::UntypedStorage<4, 4>  mUnk586089;
    // NOLINTEND

public:
    // prevent constructor by default
    Squid& operator=(Squid const&);
    Squid(Squid const&);
    Squid();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 148
    virtual bool checkSpawnObstruction() const /*override*/;

    // vIndex: 147
    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 177
    virtual ::SharedTypes::Legacy::LevelSoundEvent _getInkSquirtSoundEvent() const;

    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 8
    virtual ~Squid() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Squid(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        ::mce::Color const&                inkParticleColor
    );

    MCNAPI ::Vec3 _randomInkDir();

    MCNAPI void postAiStep();

    MCNAPI void spawnInkParticles();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        ::mce::Color const&                inkParticleColor
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $checkSpawnObstruction() const;

    MCNAPI bool $checkSpawnRules(bool fromSpawner);

    MCNAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $_getInkSquirtSoundEvent() const;

    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
