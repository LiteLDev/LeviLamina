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
    // prevent constructor by default
    VillagerV2();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void newServerAiStep() /*override*/;

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual void remove() /*override*/;

    virtual void buildDebugInfo(::std::string& out) const /*override*/;

    virtual bool getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location) /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const /*override*/;

    virtual ~VillagerV2() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VillagerV2(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _fixupVillagerProfessionSkinIfNeeded(::DwellerComponent const& dweller);
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
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $newServerAiStep();

    MCFOLD void $die(::ActorDamageSource const& source);

    MCAPI void $remove();

    MCAPI void $buildDebugInfo(::std::string& out) const;

    MCAPI bool $getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location);

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
