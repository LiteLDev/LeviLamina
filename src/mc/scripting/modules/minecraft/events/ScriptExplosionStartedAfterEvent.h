#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlock; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionStartedAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkaf9f5f;
    ::ll::UntypedStorage<8, 32> mUnkfbe091;
    ::ll::UntypedStorage<8, 40> mUnkb1360a;
    ::ll::UntypedStorage<8, 8>  mUnkd4f494;
    ::ll::UntypedStorage<8, 8>  mUnk8d39a4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptExplosionStartedAfterEvent& operator=(ScriptExplosionStartedAfterEvent const&);
    ScriptExplosionStartedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptExplosionStartedAfterEvent(::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent const&);

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>
    getImpactedBlocks() const;

    MCNAPI ~ScriptExplosionStartedAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
