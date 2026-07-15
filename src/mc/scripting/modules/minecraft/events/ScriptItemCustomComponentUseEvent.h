#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentIntermediateStorage.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemOnUseResult;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentUseEvent : public ::ScriptModuleMinecraft::ScriptItemCustomComponentAfterEvent {
public:
    // ScriptItemCustomComponentUseEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptItemCustomComponentUseEvent inner types define
    struct IntermediateStorage : public ::ScriptModuleMinecraft::ScriptItemCustomComponentIntermediateStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack const>    mItemStack;
        ::ll::TypedStorage<8, 24, ::WeakEntityRef const> mPlayer;
        // NOLINTEND
    };

    using EventConnectorsType = ::ScriptModuleMinecraft::ScriptCustomComponentPubSubConnectors<
        void(::ItemOnUseResult&, ::ItemStack&, ::Player&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
                                                                                                           mScriptItem;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mPlayer;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
