#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptRGB.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace mce { class Color; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRGBA : public ::ScriptModuleMinecraft::ScriptRGB {
public:
    // prevent constructor by default
    ScriptRGBA& operator=(ScriptRGBA const&);
    ScriptRGBA(ScriptRGBA const&);
    ScriptRGBA();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptRGBA() = default;

    // vIndex: 1
    virtual bool isValid() const;

    MCAPI explicit ScriptRGBA(class mce::Color const& color);

    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptRGBA> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool isValid$() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
