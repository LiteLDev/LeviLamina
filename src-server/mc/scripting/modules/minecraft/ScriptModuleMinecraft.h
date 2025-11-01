#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/world/persistence/DynamicPropertyDefinePropertyError.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class CommandParameterData;
class PlayerUpdateEntityOverridesPacket;
class Potion;
class PropertyComponent;
class PropertyMetadata;
namespace ScriptModuleMinecraft { class IScriptItemComponentFactory; }
namespace ScriptModuleMinecraft { class ParamStorageBase; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptAimAssistCategorySettings; }
namespace ScriptModuleMinecraft { class ScriptAimAssistPresetSettings; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandInterface; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct Error; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::CommandParameterData> CreateCommandParameters(::ScriptModuleMinecraft::ScriptCustomCommandInterface const& commandInterface, ::std::vector<::std::unique_ptr<::std::string>>& enumNameStorage);

MCNAPI ::std::vector<::std::unique_ptr<::ScriptModuleMinecraft::ParamStorageBase>> CreateParamStorage(::ScriptModuleMinecraft::ScriptCustomCommandInterface const& commandInterface);

MCNAPI ::std::unordered_map<::std::string_view, ::std::shared_ptr<::ScriptModuleMinecraft::IScriptItemComponentFactory>> const& _getOrCreateNativeItemComponentFactories();

MCNAPI ::Scripting::Error _handleDefinePropertyError(::DynamicPropertyDefinePropertyError error, ::std::string const& identifier);

MCNAPI ::PropertyMetadata const* _tryGetPropertyMetadata(::PropertyComponent const* props, ::std::string const& identifier);

MCNAPI ::std::optional<::Scripting::Error> _tryQueueUpdateForOverridenProperty(::Actor& actor, ::PropertyComponent const& props, ::PlayerUpdateEntityOverridesPacket& packet, ::PropertyMetadata const& propertyMetadata, ::std::variant<float, bool, ::std::string> const& value);

MCNAPI ::std::optional<::Scripting::Error> _tryQueueUpdateForRemovedOverride(::Actor& actor, ::PropertyComponent const& props, ::PropertyMetadata const& propertyMetadata);

MCNAPI ::std::optional<::Scripting::Error> _validatePropertyMetadata(::PropertyMetadata const* propertyMetadata, ::Actor const* actor, ::std::string const& identifier);

MCNAPI ::Scripting::ClassBinding bindBlockLocation();

MCNAPI ::Scripting::EnumBinding bindButtonInputAction();

MCNAPI ::Scripting::EnumBinding bindButtonInputState();

MCNAPI ::Scripting::EnumBinding bindCommandPermissionLevel();

MCNAPI ::Scripting::EnumBinding bindCustomCommandParamTypes();

MCNAPI ::Scripting::EnumBinding bindCustomCommandSource();

MCNAPI ::Scripting::EnumBinding bindCustomCommandStatus();

MCNAPI ::Scripting::EnumBinding bindEntitySpawnCategory();

MCNAPI ::Scripting::EnumBinding bindEntitySpawnReason();

MCNAPI ::Scripting::EnumBinding bindFacingEnumV010();

MCNAPI ::Scripting::EnumBinding bindFacingEnumV1();

MCNAPI ::Scripting::EnumBinding bindHeldItemOption();

MCNAPI void bindHudElements(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCNAPI void bindHudVisibility(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCNAPI ::Scripting::EnumBinding bindItemLockMode();

MCNAPI ::Scripting::EnumBinding bindLiquidTypeEnum();

MCNAPI void bindMoonPhases(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCNAPI ::Scripting::EnumBinding bindPlayerPermissionLevel();

MCNAPI ::Scripting::EnumBinding bindScriptDisplayObjectiveSlotId();

MCNAPI ::Scripting::EnumBinding bindScriptEventSource();

MCNAPI ::Scripting::EnumBinding bindScriptPlayerInventoryType();

MCNAPI ::Scripting::EnumBinding bindTimeOfDay();

MCNAPI ::Scripting::EnumBinding bindTintMethodEnums();

MCNAPI ::Block const* extractBlockFromVariant(::std::variant<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const& block);

MCNAPI ::std::string getScriptScoreboardParticipantName(::std::variant<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>, ::std::string> const& participant);

MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition makeAimAssistCategoryDefinition(::ScriptModuleMinecraft::ScriptAimAssistCategorySettings const& category);

MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition makeAimAssistPresetDefinition(::ScriptModuleMinecraft::ScriptAimAssistPresetSettings const& preset);

MCNAPI ::std::optional<::std::shared_ptr<::Potion const> const> tryGetPotion(::std::string const& potionNameId);
// NOLINTEND

}
