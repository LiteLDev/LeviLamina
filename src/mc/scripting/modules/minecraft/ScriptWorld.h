#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptAimAssistRegistry; }
namespace ScriptModuleMinecraft { class ScriptLootTableManager; }
namespace ScriptModuleMinecraft { class ScriptPrimitiveManager; }
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace ScriptModuleMinecraft { class ScriptTickingAreaManager; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptWorldBeforeEvents; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorld {
public:
    // ScriptWorld inner types define
    using Key = ::ServerLevel const*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptV010Events>>
        mLevelV010EventsHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldBeforeEvents>>
        mBeforeEventsHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
        mAfterEventsHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager>>
        mStructureManager;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistRegistry>>
        mAimAssistRegistry;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootTableManager>>
        mLootTableManager;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTickingAreaManager>>
        mTickingAreaManager;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPrimitiveManager>>
        mPrimitiveShapesManager;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptWorld();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
