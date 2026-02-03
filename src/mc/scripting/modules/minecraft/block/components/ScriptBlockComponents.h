#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class IScriptBlockCustomComponentReader; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::WeakRef<::ScriptModuleMinecraft::IScriptBlockCustomComponentReader const>>
        mCustomComponentReader;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::BaseScriptBlockComponent>>
    createV010(
        ::std::string const&                  componentName,
        ::BlockSource&                        region,
        ::BlockPos                            position,
        ::Scripting::WeakLifetimeScope const& scope
    ) const;

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::BaseScriptBlockComponent>>
    createV1(
        ::std::string const&                  componentName,
        ::BlockSource&                        region,
        ::BlockPos                            position,
        ::Scripting::WeakLifetimeScope const& scope
    ) const;

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::BaseScriptBlockComponent>>
    createV2(
        ::std::string const&                  componentName,
        ::BlockSource&                        region,
        ::BlockPos                            position,
        ::Scripting::WeakLifetimeScope const& scope
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(
        ::Scripting::ModuleBindingBuilder&                       moduleBuilder,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& blockComponentTypeEnumBuilder
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
