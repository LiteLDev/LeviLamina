#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ItemEventListener.h"

// auto generated forward declare list
// clang-format off
struct ItemCompleteUseEvent;
struct ItemReleaseUseEvent;
struct ItemStartUseEvent;
struct ItemStartUseOnEvent;
struct ItemStopUseEvent;
struct ItemStopUseOnEvent;
struct ItemUseEvent;
struct ItemUsedOnEvent;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemEventListener : public ::EventListenerDispatcher<::ItemEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldAfterEvents>>
                                                              mScriptEventsHandle;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::ItemUsedOnEvent const& itemEvent) /*override*/;

    virtual ::EventResult onEvent(::ItemStartUseOnEvent const& itemEvent) /*override*/;

    virtual ::EventResult onEvent(::ItemStopUseOnEvent const& itemEvent) /*override*/;

    virtual ::EventResult onEvent(::ItemUseEvent const& itemEvent) /*override*/;

    virtual ::EventResult onEvent(::ItemStartUseEvent const& itemEvent) /*override*/;

    virtual ::EventResult onEvent(::ItemCompleteUseEvent const& itemEvent) /*override*/;

    virtual ::EventResult onEvent(::ItemReleaseUseEvent const& itemEvent) /*override*/;

    virtual ::EventResult onEvent(::ItemStopUseEvent const& itemEvent) /*override*/;

    virtual ~ScriptItemEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ItemUsedOnEvent const& itemEvent);

    MCAPI ::EventResult $onEvent(::ItemStartUseOnEvent const& itemEvent);

    MCAPI ::EventResult $onEvent(::ItemStopUseOnEvent const& itemEvent);

    MCAPI ::EventResult $onEvent(::ItemUseEvent const& itemEvent);

    MCAPI ::EventResult $onEvent(::ItemStartUseEvent const& itemEvent);

    MCAPI ::EventResult $onEvent(::ItemCompleteUseEvent const& itemEvent);

    MCAPI ::EventResult $onEvent(::ItemReleaseUseEvent const& itemEvent);

    MCAPI ::EventResult $onEvent(::ItemStopUseEvent const& itemEvent);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
