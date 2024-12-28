#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/Axis.h"
#include "mc/editor/Plane.h"
#include "mc/editor/input/KeyInputType.h"
#include "mc/editor/input/Modifier.h"
#include "mc/editor/script/ScriptBlockPaletteItemType.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct EditorBlockPalette; }
namespace Editor { struct ProbabilityBlockPaletteItem; }
namespace Editor { struct SimpleBlockPaletteItem; }
namespace Editor::Input { struct BindingInfo; }
namespace Editor::ScriptModule { class ScriptBlockPalette; }
namespace Editor::ScriptModule { class ScriptIBlockPaletteItem; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {
// functions
// NOLINTBEGIN
MCAPI ::Scripting::EnumBindingBuilder<::Editor::Axis, ::Editor::Axis> bindAxisEnums();

MCAPI ::Scripting::EnumBindingBuilder<::Editor::Plane, ::Editor::Plane> bindPlaneEnums();

MCAPI ::Scripting::EnumBindingBuilder<
    ::Editor::ScriptModule::ScriptBlockPaletteItemType,
    ::Editor::ScriptModule::ScriptBlockPaletteItemType>
bindScriptBlockPaletteItemType();

MCAPI ::Scripting::InterfaceBindingBuilder<::Editor::Input::BindingInfo> bindScriptInputBindingInfo();

MCAPI ::Scripting::EnumBindingBuilder<::Editor::Input::Modifier, ::Editor::Input::Modifier> bindScriptInputModifier();

MCAPI ::Scripting::EnumBindingBuilder<::Editor::Input::KeyInputType, ::Editor::Input::KeyInputType>
bindScriptKeyInputType();

MCAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem>
convertServiceItemToScriptItem(
    ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& serviceItem,
    ::Scripting::WeakLifetimeScope const&                                                          scope
);

MCAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptBlockPalette>
convertServicePaletteToScriptPalette(
    ::Editor::EditorBlockPalette const&   servicePalette,
    ::Scripting::WeakLifetimeScope const& scope
);
// NOLINTEND

} // namespace Editor::ScriptModule
