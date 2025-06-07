#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    MCNAPI explicit ScriptComponentTypeEnumBuilder(::ScriptModuleMinecraft::ScriptComponentType componentType);

    MCNAPI ::Scripting::EnumBinding bind(::std::optional<::Scripting::Version> releaseVersion);

    MCNAPI ~ScriptComponentTypeEnumBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptComponentType componentType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
