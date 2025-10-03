#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentIntermediateStorage.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemUseOnEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class ItemStack;
class Vec3;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
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
        ::ll::UntypedStorage<8, 152> mUnkd9875b;
        ::ll::UntypedStorage<8, 24>  mUnk8d7ade;
        ::ll::UntypedStorage<8, 8>   mUnk7c0c1f;
        ::ll::UntypedStorage<8, 8>   mUnkcba8e3;
        ::ll::UntypedStorage<4, 12>  mUnke526bb;
        ::ll::UntypedStorage<1, 1>   mUnk7283ca;
        ::ll::UntypedStorage<4, 12>  mUnk20f39d;
        // NOLINTEND

    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI IntermediateStorage(
            bool&              result,
            ::ItemStack const& initialItemStack,
            ::ItemStack&,
            ::Actor&   actor,
            ::BlockPos location,
            uchar      face,
            ::Vec3     clickPos
        );

        MCNAPI ~IntermediateStorage();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            bool&              result,
            ::ItemStack const& initialItemStack,
            ::ItemStack&,
            ::Actor&   actor,
            ::BlockPos location,
            uchar      face,
            ::Vec3     clickPos
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf1143a;
    ::ll::UntypedStorage<8, 32> mUnkeca594;
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
    MCNAPI ScriptItemCustomComponentUseOnEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent&&);

    MCNAPI ScriptItemCustomComponentUseOnEvent(::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent const&);

    MCNAPI ScriptItemCustomComponentUseOnEvent(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent::IntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                    scope
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent&
    operator=(::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent const&);

    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent::IntermediateStorage const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                    scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
