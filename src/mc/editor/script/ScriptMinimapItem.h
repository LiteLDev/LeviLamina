#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/MinimapMarkerType.h"
#include "mc/common/editor/MinimapViewType.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptMinimapItem : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptMinimapItem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk76d8a4;
    ::ll::UntypedStorage<8, 16> mUnke05d60;
    ::ll::UntypedStorage<8, 16> mUnk36dc66;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinimapItem& operator=(ScriptMinimapItem const&);
    ScriptMinimapItem(ScriptMinimapItem const&);
    ScriptMinimapItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> addMarker(::Editor::Services::MinimapMarkerType markerType) const;

    MCNAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptRGBA>
    getPlayerColor(::std::string const& playerId) const;

    MCNAPI bool isActive() const;

    MCNAPI ::Editor::ScriptModule::ScriptMinimapItem& operator=(::Editor::ScriptModule::ScriptMinimapItem&&);

    MCNAPI ::Scripting::Result_deprecated<void> removeMarker(::Editor::Services::MinimapMarkerType markerType) const;

    MCNAPI ::Scripting::Result_deprecated<void> setActive(bool active) const;

    MCNAPI ::Scripting::Result_deprecated<void> setMinimapViewType(::Editor::Services::MinimapViewType viewType) const;

    MCNAPI ::Scripting::Result_deprecated<void> setSize(int mapWidth, int mapHeight) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindMinimapMarkerType();

    MCNAPI static ::Scripting::EnumBinding bindMinimapViewType();

    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
