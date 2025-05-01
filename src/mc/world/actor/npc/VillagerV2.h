#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/npc/VillagerBase.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorInteraction;
class DwellerComponent;
class EntityContext;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class VillagerV2 : public ::VillagerBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 175
    virtual void newServerAiStep() /*override*/;

    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 102
    virtual void buildDebugInfo(::std::string& out) const /*override*/;

    // vIndex: 118
    virtual bool getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location) /*override*/;

    // vIndex: 63
    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const /*override*/;

    // vIndex: 8
    virtual ~VillagerV2() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VillagerV2(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void _fixupVillagerProfessionSkinIfNeeded(::DwellerComponent const& dweller);
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

    MCNAPI void $newServerAiStep();

    MCNAPI void $die(::ActorDamageSource const& source);

    MCNAPI void $remove();

    MCNAPI void $buildDebugInfo(::std::string& out) const;

    MCNAPI bool $getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location);

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
