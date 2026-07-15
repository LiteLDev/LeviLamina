#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct DimensionType;
namespace ScriptModuleMinecraft { class ScriptDimensionType; }
namespace Scripting { class ModuleBindingBuilder; }
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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::std::string> _getDimensionStringNames();

    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCAPI static ::DimensionType fromString(::std::string const& name);

    MCAPI static ::std::string toString(::DimensionType const& type);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
