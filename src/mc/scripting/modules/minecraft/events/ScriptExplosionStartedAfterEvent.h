#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct ExplosionStartedEvent;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace Scripting { class WeakLifetimeScope; }
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
    MCAPI ScriptExplosionStartedAfterEvent(::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent const&);

    MCAPI ScriptExplosionStartedAfterEvent(
        ::ExplosionStartedEvent const&        explosionStartedEvent,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI void copyTo(::ExplosionStartedEvent& explosionStartedEvent) const;

    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>
    getImpactedBlocks() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent const&);

    MCAPI void*
    $ctor(::ExplosionStartedEvent const& explosionStartedEvent, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
