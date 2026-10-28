#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptPlayerCraftRecipeIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerCraftRecipeAfterEvent {
public:
    // ScriptPlayerCraftRecipeAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPlayerCraftRecipeIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mPlayer;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mItemStack;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
            mBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerCraftRecipeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerCraftRecipeAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerCraftRecipeIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                      scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerCraftRecipeIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                      scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
