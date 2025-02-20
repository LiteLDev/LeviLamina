#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentIntermediateStorage.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class ItemStack;
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
    struct IntermediateStorage : public ::ScriptModuleMinecraft::ScriptItemCustomComponentIntermediateStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 152> mUnka96cd3;
        ::ll::UntypedStorage<8, 24>  mUnkbb1723;
        ::ll::UntypedStorage<8, 8>   mUnke55e46;
        ::ll::UntypedStorage<8, 8>   mUnk98d58f;
        ::ll::UntypedStorage<4, 12>  mUnkd74da3;
        // NOLINTEND

    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI
        IntermediateStorage(bool& result, ::ItemStack& item, ::Block const& block, int x, int y, int z, ::Actor& owner);

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
    ::ll::UntypedStorage<8, 40> mUnkb730a2;
    ::ll::UntypedStorage<8, 32> mUnk617734;
    ::ll::UntypedStorage<8, 32> mUnk7be1d6;
    ::ll::UntypedStorage<8, 32> mUnkd1c6f0;
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

    MCAPI
    ScriptItemCustomComponentMineBlockEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent const&);

    MCAPI ScriptItemCustomComponentMineBlockEvent(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent::IntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                        scope
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
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent const&);

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentMineBlockEvent::IntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                        scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
