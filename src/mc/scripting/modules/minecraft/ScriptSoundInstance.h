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
    MCNAPI ScriptSoundInstance(::ScriptModuleMinecraft::ScriptSoundInstance const&);

    MCNAPI ScriptSoundInstance(
        ::ServerSoundInstance                                                                        soundInstance,
        ::Scripting::WeakLifetimeScope                                                               scope,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> recipient
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptSoundInstance& operator=(::ScriptModuleMinecraft::ScriptSoundInstance&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptSoundInstance& operator=(::ScriptModuleMinecraft::ScriptSoundInstance const&);

    MCNAPI void setPitch(float pitch);

    MCNAPI void setVolume(float volume);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptSoundInstance const&);

    MCNAPI void* $ctor(
        ::ServerSoundInstance                                                                        soundInstance,
        ::Scripting::WeakLifetimeScope                                                               scope,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> recipient
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
