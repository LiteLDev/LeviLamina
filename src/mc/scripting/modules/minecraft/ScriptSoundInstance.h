#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerSoundInstance;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptSoundDurationInfo; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSoundInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ServerSoundInstance>> mSoundInstance;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
        mRecipient;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSoundDurationInfo>>>
        mDurationInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSoundInstance(::ScriptModuleMinecraft::ScriptSoundInstance const&);

    MCAPI ScriptSoundInstance(
        ::ServerSoundInstance                                                                        soundInstance,
        ::Scripting::WeakLifetimeScope                                                               scope,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> recipient
    );

    MCAPI ::ScriptModuleMinecraft::ScriptSoundInstance& operator=(::ScriptModuleMinecraft::ScriptSoundInstance&&);

    MCAPI ::ScriptModuleMinecraft::ScriptSoundInstance& operator=(::ScriptModuleMinecraft::ScriptSoundInstance const&);

    MCAPI void setPitch(float pitch);

    MCAPI void setVolume(float volume);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptSoundInstance const&);

    MCAPI void* $ctor(
        ::ServerSoundInstance                                                                        soundInstance,
        ::Scripting::WeakLifetimeScope                                                               scope,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> recipient
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
