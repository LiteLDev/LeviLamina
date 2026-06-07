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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
