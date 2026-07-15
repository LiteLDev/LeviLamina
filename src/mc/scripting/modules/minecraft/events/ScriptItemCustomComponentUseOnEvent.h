#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentIntermediateStorage.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemUseOnEvent.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentUseOnEvent : public ::ScriptModuleMinecraft::ScriptItemCustomComponentAfterEvent,
                                             public ::ScriptModuleMinecraft::ScriptItemUseOnEvent {
public:
    // ScriptItemCustomComponentUseOnEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptItemCustomComponentUseOnEvent inner types define
    struct IntermediateStorage : public ::ScriptModuleMinecraft::ScriptItemCustomComponentIntermediateStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack const>    mItemStack;
        ::ll::TypedStorage<8, 24, ::WeakEntityRef const> mEntity;
        ::ll::TypedStorage<8, 8, ::Block const&>         mBlock;
        ::ll::TypedStorage<8, 8, ::BlockSource&>         mRegion;
        ::ll::TypedStorage<4, 12, ::BlockPos const>      mBlockPos;
        ::ll::TypedStorage<1, 1, uchar const>            mFace;
        ::ll::TypedStorage<4, 12, ::Vec3 const>          mFaceLocation;
        // NOLINTEND

    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();
    };

    using EventConnectorsType = ::ScriptModuleMinecraft::ScriptCustomComponentPubSubConnectors<
        void(bool&, ::ItemStack const&, ::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mEntity;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
        mUsedBlockPermutation;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
