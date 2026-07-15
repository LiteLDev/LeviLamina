#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBookItemComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // ScriptBookItemComponent inner types define
    using ContentType = ::std::variant<
        ::std::string,
        ::ScriptModuleMinecraft::ScriptRawMessageInterface,
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBookItemComponent() /*override*/ = default;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
