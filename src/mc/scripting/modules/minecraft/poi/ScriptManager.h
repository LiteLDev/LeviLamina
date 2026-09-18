#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#include "mc/scripting/modules/minecraft/poi/OccupancyFilter.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Poi { class Manager; }
namespace Poi { struct Registry; }
namespace ScriptModuleMinecraft::Poi::Block { struct ScriptInstance; }
namespace ScriptModuleMinecraft::Poi::Block { struct ScriptNameFilter; }
namespace ScriptModuleMinecraft::Poi::Block { struct ScriptTagFilter; }
namespace ScriptModuleMinecraft::Poi::Block { struct ScriptType; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft::Poi::Block {

struct ScriptManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Poi::Manager*>                 mManager;
    ::ll::TypedStorage<8, 8, ::Poi::Registry const*>          mRegistry;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::ScriptModuleMinecraft::Poi::Block::ScriptInstance> getInRange(
        ::std::variant<
            ::ScriptModuleMinecraft::Poi::Block::ScriptNameFilter,
            ::ScriptModuleMinecraft::Poi::Block::ScriptTagFilter,
            ::Scripting::Closure<
                bool(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::Poi::Block::ScriptType>)>> filter,
        ::Vec3                                                                                                center,
        ushort                                                                blockRadius,
        ::std::optional<::ScriptModuleMinecraft::Poi::Block::OccupancyFilter> occupancyFilter
    );

    MCAPI ::std::vector<::ScriptModuleMinecraft::Poi::Block::ScriptInstance> getInSquare(
        ::std::variant<
            ::ScriptModuleMinecraft::Poi::Block::ScriptNameFilter,
            ::ScriptModuleMinecraft::Poi::Block::ScriptTagFilter,
            ::Scripting::Closure<
                bool(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::Poi::Block::ScriptType>)>> filter,
        ::Vec3                                                                                                center,
        ushort                                                                blockRadius,
        ::std::optional<::ScriptModuleMinecraft::Poi::Block::OccupancyFilter> occupancyFilter
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::Poi::Block
