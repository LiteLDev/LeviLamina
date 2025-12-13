#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptBlockComponentFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptBlockComponentFactory() = default;

    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::BaseScriptBlockComponent>>
    createComponent(::BlockSource&, ::BlockPos const&, ::Scripting::WeakLifetimeScope const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
