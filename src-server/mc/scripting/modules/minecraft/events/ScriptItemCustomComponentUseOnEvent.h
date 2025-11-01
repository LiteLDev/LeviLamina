#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentIntermediateStorage.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemUseOnEvent.h"
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentUseOnEvent : public ::ScriptModuleMinecraft::ScriptItemCustomComponentAfterEvent, public ::ScriptModuleMinecraft::ScriptItemUseOnEvent {
public:
    // ScriptItemCustomComponentUseOnEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on
    
    // ScriptItemCustomComponentUseOnEvent inner types define
    using EventConnectorsType = ::ScriptModuleMinecraft::ScriptCustomComponentPubSubConnectors<void(bool&, ::ItemStack const&, ::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&)>;
    
    struct IntermediateStorage : public ::ScriptModuleMinecraft::ScriptItemCustomComponentIntermediateStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack const> mItemStack;
        ::ll::TypedStorage<8, 24, ::WeakEntityRef const> mEntity;
        ::ll::TypedStorage<8, 8, ::Block const&> mBlock;
        ::ll::TypedStorage<8, 8, ::BlockSource&> mRegion;
        ::ll::TypedStorage<4, 12, ::BlockPos const> mBlockPos;
        ::ll::TypedStorage<1, 1, uchar const> mFace;
        ::ll::TypedStorage<4, 12, ::Vec3 const> mFaceLocation;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI IntermediateStorage(bool& result, ::ItemStack const& initialItemStack, ::ItemStack&, ::Actor& actor, ::BlockPos location, uchar face, ::Vec3 clickPos);
    
        MCAPI ~IntermediateStorage();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(bool& result, ::ItemStack const& initialItemStack, ::ItemStack&, ::Actor& actor, ::BlockPos location, uchar face, ::Vec3 clickPos);
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
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mEntity;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> mUsedBlockPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentUseOnEvent& operator=(ScriptItemCustomComponentUseOnEvent const&);
    ScriptItemCustomComponentUseOnEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemCustomComponentUseOnEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemCustomComponentUseOnEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent&&);

    MCAPI ScriptItemCustomComponentUseOnEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent const&);

    MCAPI ScriptItemCustomComponentUseOnEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent::IntermediateStorage const& eventData, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI ::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent& operator=(::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent const&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent::IntermediateStorage const& eventData, ::Scripting::WeakLifetimeScope const& scope);
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
