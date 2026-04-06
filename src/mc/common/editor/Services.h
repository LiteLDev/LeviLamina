#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/vanilla/remapping/ActionEnum.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::Network { class WidgetPrimComponentAxialSphere; }
namespace Editor::Network { class WidgetPrimComponentBox; }
namespace Editor::Network { class WidgetPrimComponentCone; }
namespace Editor::Network { class WidgetPrimComponentCuboid; }
namespace Editor::Network { class WidgetPrimComponentCylinder; }
namespace Editor::Network { class WidgetPrimComponentDisc; }
namespace Editor::Network { class WidgetPrimComponentEllipsoid; }
namespace Editor::Network { class WidgetPrimComponentLine; }
namespace Editor::Network { class WidgetPrimComponentPyramid; }
namespace Editor::Services { struct EditorRealmsWorld; }
namespace Editor::Services { struct PersistenceGroupItemMetadata; }
namespace Editor::Services { struct PersistenceGroupMetadata; }
class KeyboardRemappingLayout;
namespace Scripting::RenderHelper { class BasePrimitive; }
// clang-format on

namespace Editor::Services {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::optional<int> _getVanillaActionKey(::KeyboardRemappingLayout& layout, ::Remapping::ActionEnum action);

MCNAPI ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
createPrimitive(::Editor::Network::WidgetPrimComponentAxialSphere const& data);

MCNAPI ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
createPrimitive(::Editor::Network::WidgetPrimComponentBox const& data);

MCNAPI ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
createPrimitive(::Editor::Network::WidgetPrimComponentCone const& data);

MCNAPI ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
createPrimitive(::Editor::Network::WidgetPrimComponentCuboid const& data);

MCNAPI ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
createPrimitive(::Editor::Network::WidgetPrimComponentCylinder const& data);

MCNAPI ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
createPrimitive(::Editor::Network::WidgetPrimComponentDisc const& data);

MCNAPI ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
createPrimitive(::Editor::Network::WidgetPrimComponentEllipsoid const& data);

MCNAPI ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
createPrimitive(::Editor::Network::WidgetPrimComponentLine const& data);

MCNAPI ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
createPrimitive(::Editor::Network::WidgetPrimComponentPyramid const& data);
#endif

MCNAPI bool
operator==(::Editor::Services::EditorRealmsWorld const& __P0, ::Editor::Services::EditorRealmsWorld const& __P1);

MCNAPI bool operator==(
    ::Editor::Services::PersistenceGroupItemMetadata const& __P0,
    ::Editor::Services::PersistenceGroupItemMetadata const& __P1
);

MCNAPI bool operator==(
    ::Editor::Services::PersistenceGroupMetadata const& __P0,
    ::Editor::Services::PersistenceGroupMetadata const& __P1
);

MCNAPI ::std::optional<::Vec3> parseVec3(::std::string const& s);
// NOLINTEND

} // namespace Editor::Services
