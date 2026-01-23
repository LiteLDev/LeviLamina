#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/vanilla/remapping/ActionEnum.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/editor/realms/EditorRealmsWorld.h"
#include "mc/editor/services/persistence/PersistenceGroupItemMetadata.h"
#include "mc/editor/services/persistence/PersistenceGroupMetadata.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::Network { class WidgetPrimComponentAxialSphere; }
namespace Editor::Network { class WidgetPrimComponentBox; }
namespace Editor::Network { class WidgetPrimComponentDisc; }
namespace Editor::Network { class WidgetPrimComponentLine; }
class KeyboardRemappingLayout;
namespace Scripting::RenderHelper { struct BasePrimitive; }
// clang-format on

namespace Editor::Services {
// functions
// NOLINTBEGIN
MCNAPI_C ::std::optional<int> _getVanillaActionKey(::KeyboardRemappingLayout& layout, ::Remapping::ActionEnum action);

MCNAPI_C ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
createPrimitive(::Editor::Network::WidgetPrimComponentAxialSphere const& data);

MCNAPI_C ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
createPrimitive(::Editor::Network::WidgetPrimComponentBox const& data);

MCNAPI_C ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
createPrimitive(::Editor::Network::WidgetPrimComponentDisc const& data);

MCNAPI_C ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
createPrimitive(::Editor::Network::WidgetPrimComponentLine const& data);

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
