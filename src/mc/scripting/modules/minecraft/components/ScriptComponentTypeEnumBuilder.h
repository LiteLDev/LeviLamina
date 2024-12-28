#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/scripting/modules/minecraft/components/ScriptComponentType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptComponentTypeEnumBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnka1fc59;
    ::ll::UntypedStorage<8, 280> mUnk1f98b8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptComponentTypeEnumBuilder& operator=(ScriptComponentTypeEnumBuilder const&);
    ScriptComponentTypeEnumBuilder(ScriptComponentTypeEnumBuilder const&);
    ScriptComponentTypeEnumBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptComponentTypeEnumBuilder(::ScriptModuleMinecraft::ScriptComponentType componentType);

    MCAPI ::Scripting::EnumBindingBuilder<::std::string, ::std::string>
    bind(::std::optional<::Scripting::Version> releaseVersion);

    MCAPI ::Scripting::ConstantFactory&
    bindComponentId(::std::string const& componentName, ::std::string const& componentId);

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
