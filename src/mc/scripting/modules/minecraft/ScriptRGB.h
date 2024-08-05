#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRGB {
public:
    // prevent constructor by default
    ScriptRGB& operator=(ScriptRGB const&);
    ScriptRGB(ScriptRGB const&);
    ScriptRGB();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptRGB() = default;

    // vIndex: 1
    virtual bool isValid() const;

    MCAPI class mce::Color const& getColor() const;

    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptRGB> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
