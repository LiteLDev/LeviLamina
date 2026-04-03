#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/MinimapViewType.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptMinimapItem; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptMinimapService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptMinimapService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4b9b31;
    ::ll::UntypedStorage<8, 16> mUnk6d40e1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinimapService& operator=(ScriptMinimapService const&);
    ScriptMinimapService(ScriptMinimapService const&);
    ScriptMinimapService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptMinimapItem>>
    createMinimap(
        ::Editor::Services::MinimapViewType viewType,
        int                                 mapWidth,
        int                                 mapHeight,
        ::std::optional<::std::string>      dataId
    );

    MCNAPI ::Scripting::Result_deprecated<void> destroyMinimap(::mce::UUID const& minimapId);

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getAllMinimapIds();

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptMinimapItem>>
    getMinimap(::mce::UUID const& minimapId);

    MCNAPI ::Editor::ScriptModule::ScriptMinimapService& operator=(::Editor::ScriptModule::ScriptMinimapService&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
