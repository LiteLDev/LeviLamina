#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct EditorBlockPalette; }
namespace Editor { struct ProbabilityBlockPaletteItem; }
namespace Editor { struct SimpleBlockPaletteItem; }
namespace Editor::ScriptModule { class ScriptBlockPalette; }
namespace Editor::ScriptModule { class ScriptIBlockPaletteItem; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::EnumBinding bindAxisEnums();

MCNAPI ::Scripting::EnumBinding bindPlaneEnums();

MCNAPI ::Scripting::EnumBinding bindRenderPlaneGridResolution();

MCNAPI ::Scripting::InterfaceBinding bindScriptBindingCategoryInfo();

MCNAPI ::Scripting::EnumBinding bindScriptBlockPaletteItemType();

MCNAPI ::Scripting::InterfaceBinding bindScriptInputBindingInfo();

MCNAPI ::Scripting::EnumBinding bindScriptInputModifier();

MCNAPI ::Scripting::InterfaceBinding bindScriptLocalizationEntry();

MCNAPI ::Scripting::EnumBinding bindScriptMouseActionCategory();

MCNAPI ::Scripting::EnumBinding bindScriptMouseCursorIconType();

#ifdef LL_PLAT_S
MCNAPI ::Scripting::EnumBinding bindStructureSourceEnum();
#endif

MCNAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem>
convertServiceItemToScriptItem(
    ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& serviceItem,
    ::Scripting::WeakLifetimeScope const&                                                          scope
);

MCNAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptBlockPalette>
convertServicePaletteToScriptPalette(
    ::Editor::EditorBlockPalette const&   servicePalette,
    ::Scripting::WeakLifetimeScope const& scope
);
// NOLINTEND

} // namespace Editor::ScriptModule
