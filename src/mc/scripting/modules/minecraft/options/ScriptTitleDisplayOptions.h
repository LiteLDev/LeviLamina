#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/interfaces/ScriptRawMessageInterface.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTitleDisplayOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        224,
        ::std::optional<::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>>>>
                                  mSubtitle;
    ::ll::TypedStorage<4, 4, int> mFadeInTime;
    ::ll::TypedStorage<4, 4, int> mStayTime;
    ::ll::TypedStorage<4, 4, int> mFadeOutTime;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTitleDisplayOptions& operator=(ScriptTitleDisplayOptions const&);
    ScriptTitleDisplayOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptTitleDisplayOptions(::ScriptModuleMinecraft::ScriptTitleDisplayOptions const&);

    MCAPI ::ScriptModuleMinecraft::ScriptTitleDisplayOptions&
    operator=(::ScriptModuleMinecraft::ScriptTitleDisplayOptions&&);

    MCAPI ~ScriptTitleDisplayOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptTitleDisplayOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
