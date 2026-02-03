#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/scripting/modules/minecraft/components/ScriptComponentType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptComponentTypeEnumBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptComponentType const>              mType;
    ::ll::TypedStorage<8, 152, ::Scripting::EnumBindingBuilder<::std::string, ::std::string>> mEnumBuilder;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptComponentTypeEnumBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptComponentTypeEnumBuilder(::ScriptModuleMinecraft::ScriptComponentType componentType);

    MCAPI ::Scripting::EnumBinding bind(::std::optional<::Scripting::Version> releaseVersion);

    MCAPI ~ScriptComponentTypeEnumBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptComponentType componentType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
