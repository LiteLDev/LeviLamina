#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class ItemStack;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentMineBlockEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentMineBlockEvent& operator=(ScriptItemCustomComponentMineBlockEvent const&);
    ScriptItemCustomComponentMineBlockEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptItemCustomComponentMineBlockEvent(struct ScriptModuleMinecraft::
                                                      ScriptItemCustomComponentMineBlockEvent const&);

    MCAPI ScriptItemCustomComponentMineBlockEvent(
        bool&                                     result,
        class ItemStack&                          item,
        class Block const&                        block,
        int                                       x,
        int                                       y,
        int                                       z,
        class Actor&                              owner,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent&&);

    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
