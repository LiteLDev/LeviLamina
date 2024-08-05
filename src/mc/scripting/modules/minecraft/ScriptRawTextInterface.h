#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawTextInterface {
public:
    // prevent constructor by default
    ScriptRawTextInterface& operator=(ScriptRawTextInterface const&);
    ScriptRawTextInterface(ScriptRawTextInterface const&);
    ScriptRawTextInterface();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptRawTextInterface&
    operator=(struct ScriptModuleMinecraft::ScriptRawTextInterface&&);

    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptRawTextInterface const& other) const;

    MCAPI ~ScriptRawTextInterface();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptRawTextInterface> bind();

    MCAPI static struct ScriptModuleMinecraft::ScriptRawTextInterface fromJSON(class Json::Value const& json);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
