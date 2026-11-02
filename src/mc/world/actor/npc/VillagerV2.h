#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/npc/VillagerBase.h"
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class DwellerComponent;
class EntityContext;
class Interaction;
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

    virtual ::Interaction getInteraction(::Player& player, ::Vec3 const& location, ::HandSlot handSlot) /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const /*override*/;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $newServerAiStep();

    MCNAPI void $die(::ActorDamageSource const& source);

    MCNAPI void $remove();

    MCNAPI void $buildDebugInfo(::std::string& out) const;

    MCNAPI ::Interaction $getInteraction(::Player& player, ::Vec3 const& location, ::HandSlot handSlot);

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
