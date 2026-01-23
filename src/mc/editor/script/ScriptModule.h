#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct EditorBlockPalette; }
namespace Editor::ScriptModule { class ScriptBlockPalette; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::EnumBinding bindAxisEnums();

MCNAPI ::Scripting::EnumBinding bindPlaneEnums();

MCNAPI ::Scripting::EnumBinding bindScriptBlockPaletteItemType();

MCNAPI ::Scripting::InterfaceBinding bindScriptInputBindingInfo();

MCNAPI ::Scripting::EnumBinding bindScriptInputModifier();

MCNAPI ::Scripting::InterfaceBinding bindScriptLocalizationEntry();

MCNAPI ::Scripting::EnumBinding bindScriptMouseActionCategory();

MCNAPI ::Scripting::EnumBinding bindStructureSourceEnum();

MCNAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptBlockPalette>
convertServicePaletteToScriptPalette(
    ::Editor::EditorBlockPalette const&   servicePalette,
    ::Scripting::WeakLifetimeScope const& scope
);
// NOLINTEND

} // namespace Editor::ScriptModule
