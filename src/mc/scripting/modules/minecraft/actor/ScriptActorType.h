#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorType {
public:
    // ScriptActorType inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptActorType inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnkb0097b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
        Key(Key const&);
        Key();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Key();
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
    ::ll::UntypedStorage<8, 8> mUnk8cd362;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorType& operator=(ScriptActorType const&);
    ScriptActorType(ScriptActorType const&);
    ScriptActorType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> addDynamicPropertiesDefinition(
        ::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const& dynamicPropertiesDefinition
    );

    MCNAPI ::std::string getId() const;

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptActorType const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorType>
    getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::ActorDefinition& actorDef);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
