#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/ScriptTimeOfDay.h"
#include "mc/scripting/modules/minecraft/events/ScriptEventSource.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptDisplayObjectiveSlotId.h"
#include "mc/world/item/ItemLockMode.h"
#include "mc/world/item/alchemy/Potion.h"
#include "mc/world/level/block/LiquidType.h"
#include "mc/world/persistence/DynamicPropertyDefinePropertyError.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class PlayerUpdateEntityOverridesPacket;
class Potion;
class PropertyComponent;
class PropertyMetadata;
namespace ScriptModuleMinecraft { class IScriptItemComponentFactory; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptAimAssistCategorySettings; }
namespace ScriptModuleMinecraft { class ScriptAimAssistPresetSettings; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptPotionEffectType; }
namespace ScriptModuleMinecraft { class ScriptPotionModifierType; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct Error; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {
// functions
// NOLINTBEGIN
MCNAPI ::std::
    unordered_map<::std::string, ::std::shared_ptr<::ScriptModuleMinecraft::IScriptItemComponentFactory>> const&
    _getAllSupportedItemComponents();

MCNAPI ::Scripting::Error
_handleDefinePropertyError(::DynamicPropertyDefinePropertyError error, ::std::string const& identifier);

MCNAPI ::PropertyMetadata const*
_tryGetPropertyMetadata(::PropertyComponent const* props, ::std::string const& identifier);

MCNAPI ::std::optional<::Scripting::Error> _tryQueueUpdateForOverridenProperty(
    ::Actor&                                          actor,
    ::PropertyComponent const&                        props,
    ::PlayerUpdateEntityOverridesPacket&              packet,
    ::PropertyMetadata const&                         propertyMetadata,
    ::std::variant<float, bool, ::std::string> const& value
);

MCNAPI ::std::optional<::Scripting::Error> _tryQueueUpdateForRemovedOverride(
    ::Actor&                   actor,
    ::PropertyComponent const& props,
    ::PropertyMetadata const&  propertyMetadata
);

MCNAPI ::std::optional<::Scripting::Error> _validatePropertyMetadata(
    ::PropertyMetadata const* propertyMetadata,
    ::Actor const*            actor,
    ::std::string const&      identifier
);

MCNAPI ::Scripting::ClassBindingBuilder<::BlockPos> bindBlockLocation();

MCNAPI ::Scripting::EnumBinding bindButtonInputAction();

MCNAPI ::Scripting::EnumBinding bindButtonInputState();

MCNAPI ::Scripting::EnumBinding bindEntitySpawnCategory();

MCNAPI ::Scripting::EnumBinding bindEntitySpawnReason();

MCNAPI ::Scripting::EnumBindingBuilder<::ScriptModuleMinecraft::ScriptFacing, ::ScriptModuleMinecraft::ScriptFacing>
bindFacingEnumV010();

MCNAPI ::Scripting::EnumBindingBuilder<::std::string, ::ScriptModuleMinecraft::ScriptFacing> bindFacingEnumV1();

MCNAPI void bindHudElements(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCNAPI void bindHudVisibility(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCNAPI ::Scripting::EnumBindingBuilder<::std::string, ::ItemLockMode> bindItemLockMode();

MCNAPI ::Scripting::EnumBindingBuilder<::std::string, ::LiquidType> bindLiquidTypeEnum();

MCNAPI void bindMoonPhases(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCNAPI ::Scripting::EnumBindingBuilder<::std::string, ::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId>
bindScriptDisplayObjectiveSlotId();

MCNAPI ::Scripting::EnumBindingBuilder<::std::string, ::ScriptModuleMinecraft::ScriptEventSource>
bindScriptEventSource();

MCNAPI ::Scripting::
    EnumBindingBuilder<::ScriptModuleMinecraft::ScriptTimeOfDay, ::ScriptModuleMinecraft::ScriptTimeOfDay>
    bindTimeOfDay();

MCNAPI ::Block const* extractBlockFromVariant(
    ::std::variant<
        ::std::string,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const& block
);

MCNAPI ::std::shared_ptr<::Potion const> const getLongPotion(::Potion::PotionVariant potionEffect);

MCNAPI ::std::shared_ptr<::Potion const> const getNormalPotion(::Potion::PotionVariant potionEffect);

MCNAPI ::std::shared_ptr<::Potion const> const getPotion(
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>   effect,
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionModifierType> modifier
);

MCNAPI ::std::optional<int> getPotionId(
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>   effect,
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionModifierType> modifier
);

MCNAPI ::std::string getScriptScoreboardParticipantName(
    ::std::variant<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::std::string> const& participant
);

MCNAPI ::std::shared_ptr<::Potion const> const getStrongPotion(::Potion::PotionVariant potionEffect);

MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition
makeAimAssistCategoryDefinition(::ScriptModuleMinecraft::ScriptAimAssistCategorySettings const& category);

MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition
makeAimAssistPresetDefinition(::ScriptModuleMinecraft::ScriptAimAssistPresetSettings const& preset);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& POSITION_IN_UNLOADED_CHUNK_TAG();

MCNAPI ::std::string const& POSITION_OUT_OF_WORLD_BOUNDS_TAG();

MCNAPI ::std::string const& UNLOADED_CHUNK_TAG();
// NOLINTEND

} // namespace ScriptModuleMinecraft
