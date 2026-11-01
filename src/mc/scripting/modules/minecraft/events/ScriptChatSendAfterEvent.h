#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ChatEvent;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptChatSendIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptChatSendAfterEvent {
public:
    // ScriptChatSendAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptChatSendIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mMessage;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>>
                                                                                                           mTargets;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mSender;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptChatSendAfterEvent& operator=(ScriptChatSendAfterEvent const&);
    ScriptChatSendAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptChatSendAfterEvent(::ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCNAPI ScriptChatSendAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptChatSendIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                             scope
    );

    MCNAPI ScriptChatSendAfterEvent(
        ::ChatEvent const&                    chatEvent,
        ::Player const&                       player,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCNAPI void copyTo(::ChatEvent& chatEvent) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
    getTargets_V010();

    MCNAPI ::Scripting::Result_deprecated<void>
    setTargets_V010(::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> targets);

    MCNAPI ~ScriptChatSendAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCNAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptChatSendIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                             scope
    );

    MCNAPI void*
    $ctor(::ChatEvent const& chatEvent, ::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
