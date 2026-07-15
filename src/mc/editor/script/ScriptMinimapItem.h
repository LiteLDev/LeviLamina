#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
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
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindMinimapMarkerData();

    MCNAPI static ::Scripting::EnumBinding bindMinimapMarkerType();

    MCNAPI static ::Scripting::EnumBinding bindMinimapTrackingMode();

    MCNAPI static ::Scripting::EnumBinding bindMinimapViewType();

    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
