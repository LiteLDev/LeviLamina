#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace ScriptModuleMinecraft { class ScriptDimensionType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimensionTypes {
public:
    // ScriptDimensionTypes inner types define
    using DimensionTypeMap =
        ::std::map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimensionType>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimensionType>>>
                                   mDimensionTypes;
    ::ll::TypedStorage<1, 1, bool> mRegisteredTypes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimensionType>>
    get(::Scripting::WeakLifetimeScope scope, ::std::string const& identifier);

    MCAPI void registerTypes(::Scripting::WeakLifetimeScope scope);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::std::string> _getDimensionStringNames();

    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCAPI static ::DimensionType fromString(::std::string const& name);

    MCAPI static ::std::string toString(::DimensionType const& type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& sMinecraftNamespace();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
