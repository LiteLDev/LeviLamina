#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentIntermediateStorage.h"
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentMineBlockEvent : public ::ScriptModuleMinecraft::ScriptItemCustomComponentAfterEvent {
public:
    // ScriptItemCustomComponentMineBlockEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on
    
    // ScriptItemCustomComponentMineBlockEvent inner types define
    using EventConnectorsType = ::ScriptModuleMinecraft::ScriptCustomComponentPubSubConnectors<void(bool&, ::ItemStack&, ::Block const&, int, int, int, ::Actor&)>;
    
    struct IntermediateStorage : public ::ScriptModuleMinecraft::ScriptItemCustomComponentIntermediateStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack const> mItemStack;
        ::ll::TypedStorage<8, 24, ::WeakEntityRef const> mEntity;
        ::ll::TypedStorage<8, 8, ::Block const&> mBlock;
        ::ll::TypedStorage<8, 8, ::BlockSource&> mRegion;
        ::ll::TypedStorage<4, 12, ::BlockPos const> mBlockPos;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI IntermediateStorage(bool& result, ::ItemStack& item, ::Block const& block, int x, int y, int z, ::Actor& owner);
    
        MCAPI ~IntermediateStorage();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(bool& result, ::ItemStack& item, ::Block const& block, int x, int y, int z, ::Actor& owner);
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>> mScriptItem;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>> mBlock;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> mMinedBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentMineBlockEvent& operator=(ScriptItemCustomComponentMineBlockEvent const&);
    ScriptItemCustomComponentMineBlockEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemCustomComponentMineBlockEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemCustomComponentMineBlockEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent&&);

    MCAPI ScriptItemCustomComponentMineBlockEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent const&);

    MCAPI ScriptItemCustomComponentMineBlockEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent::IntermediateStorage const& eventData, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent const&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent::IntermediateStorage const& eventData, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
