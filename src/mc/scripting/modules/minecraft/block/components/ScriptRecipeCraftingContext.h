#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/world/item/crafting/CraftingContext.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class IContainerManager;
class Recipes;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptRecipeCraftingContextConfig; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRecipeCraftingContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Recipes const&>        mRecipes;
    ::ll::TypedStorage<8, 8, ::CraftingContext const> mCraftingContext;
    ::ll::TypedStorage<8, 32, ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mPlayer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IContainerManager>> mContainerManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScriptModuleMinecraft::ScriptRecipeCraftingContextConfig const>>
                                                              mConfig;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mPosition;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRecipeCraftingContext& operator=(ScriptRecipeCraftingContext const&);
    ScriptRecipeCraftingContext(ScriptRecipeCraftingContext const&);
    ScriptRecipeCraftingContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptRecipeCraftingContext(
        ::Recipes const&                                                                    recipes,
        ::CraftingContext                                                                   craftingContext,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>         player,
        ::BlockPos                                                                          position,
        ::std::shared_ptr<::IContainerManager> const&                                       containerManager,
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptRecipeCraftingContextConfig const> config,
        ::Scripting::WeakLifetimeScope const&                                               scope
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
        ::Recipes const&                                                                    recipes,
        ::CraftingContext                                                                   craftingContext,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>         player,
        ::BlockPos                                                                          position,
        ::std::shared_ptr<::IContainerManager> const&                                       containerManager,
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptRecipeCraftingContextConfig const> config,
        ::Scripting::WeakLifetimeScope const&                                               scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
