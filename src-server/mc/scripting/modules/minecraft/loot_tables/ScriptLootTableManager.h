#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptLootTable; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptUnloadedChunksError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootTableManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2b659e;
    ::ll::UntypedStorage<8, 8> mUnk81cf33;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootTableManager& operator=(ScriptLootTableManager const&);
    ScriptLootTableManager(ScriptLootTableManager const&);
    ScriptLootTableManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> _itemStacksToScriptItemStacks(::std::vector<::ItemStack> const& itemStacks) const;

    MCNAPI ::Scripting::Result<::std::optional<::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>, ::ScriptModuleMinecraft::ScriptUnloadedChunksError, ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> generateLootFromBlock(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock> scriptBlock, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> tool) const;

    MCNAPI ::std::optional<::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>> generateLootFromBlockPermutation(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> scriptBlockPermutation, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> tool) const;

    MCNAPI ::std::optional<::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>> generateLootFromBlockType(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType> scriptBlockType, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> tool) const;

    MCNAPI ::Scripting::Result<::std::optional<::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>, ::ScriptModuleMinecraft::ScriptInvalidActorError> generateLootFromEntity(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> scriptActor, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> tool) const;

    MCNAPI ::std::optional<::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>> generateLootFromEntityType(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorType> scriptActorType, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> tool) const;

    MCNAPI ::std::optional<::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>> generateLootFromTable(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootTable> scriptLootTable, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> tool) const;

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootTable>> getLootTable(::std::string const& path) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}
