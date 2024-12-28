#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/ScriptTimeOfDay.h"
#include "mc/scripting/modules/minecraft/events/ScriptEventSource.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptDisplayObjectiveSlotId.h"
#include "mc/world/item/ItemLockMode.h"
#include "mc/world/item/alchemy/Potion.h"
#include "mc/world/persistence/DynamicPropertyDefinePropertyError.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Potion;
namespace ScriptModuleMinecraft { class IScriptItemComponentFactory; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptPotionEffectType; }
namespace ScriptModuleMinecraft { class ScriptPotionModifierType; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {
// functions
// NOLINTBEGIN
MCAPI void SetUpScriptAssertHandler();

MCAPI ::std::
    unordered_map<::std::string, ::std::shared_ptr<::ScriptModuleMinecraft::IScriptItemComponentFactory>> const&
    _getAllSupportedItemComponents();

MCAPI ::Scripting::Error
_handleDefinePropertyError(::DynamicPropertyDefinePropertyError error, ::std::string const& identifier);

MCAPI ::Scripting::ClassBindingBuilder<::BlockPos> bindBlockLocation();

MCAPI ::Scripting::EnumBinding bindButtonInputAction();

MCAPI ::Scripting::EnumBinding bindButtonInputState();

MCAPI ::Scripting::EnumBindingBuilder<::ScriptModuleMinecraft::ScriptFacing, ::ScriptModuleMinecraft::ScriptFacing>
bindFacingEnumV010();

MCAPI ::Scripting::EnumBindingBuilder<::std::string, ::ScriptModuleMinecraft::ScriptFacing> bindFacingEnumV1();

MCAPI void bindHudElements(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCAPI void bindHudVisibility(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCAPI ::Scripting::EnumBindingBuilder<::std::string, ::ItemLockMode> bindItemLockMode();

MCAPI void bindMoonPhases(::Scripting::ModuleBindingBuilder& moduleBuilder);

MCAPI ::Scripting::EnumBindingBuilder<::std::string, ::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId>
bindScriptDisplayObjectiveSlotId();

MCAPI ::Scripting::EnumBindingBuilder<::std::string, ::ScriptModuleMinecraft::ScriptEventSource>
bindScriptEventSource();

MCAPI ::Scripting::
    EnumBindingBuilder<::ScriptModuleMinecraft::ScriptTimeOfDay, ::ScriptModuleMinecraft::ScriptTimeOfDay>
    bindTimeOfDay();

MCAPI ::Block const* extractBlockFromVariant(
    ::std::variant<
        ::std::string,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const& block
);

MCAPI ::std::shared_ptr<::Potion const> const getLongPotion(::Potion::PotionVariant potionEffect);

MCAPI ::std::shared_ptr<::Potion const> const getNormalPotion(::Potion::PotionVariant potionEffect);

MCAPI ::std::shared_ptr<::Potion const> const getPotion(
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionEffectType>   effect,
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPotionModifierType> modifier
);

MCAPI ::std::string getScriptScoreboardParticipantName(
    ::std::variant<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::std::string> const& participant
);

MCAPI ::std::shared_ptr<::Potion const> const getStrongPotion(::Potion::PotionVariant potionEffect);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string const& POSITION_IN_UNLOADED_CHUNK_TAG();

MCAPI ::std::string const& POSITION_OUT_OF_WORLD_BOUNDS_TAG();

MCAPI ::std::string const& UNLOADED_CHUNK_TAG();
// NOLINTEND

} // namespace ScriptModuleMinecraft
