#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnEvent {
public:
    // prevent constructor by default
    ScriptItemUseOnEvent(ScriptItemUseOnEvent const&);
    ScriptItemUseOnEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptItemUseOnEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseOnEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemUseOnEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseOnEvent const&);

    MCAPI ~ScriptItemUseOnEvent();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseOnEvent> bind();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI
    ScriptItemUseOnEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, uchar, class Vec3, class BlockPos, class BlockSource&, class Scripting::WeakLifetimeScope const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
