#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
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
        ::ll::TypedStorage<8, 48, ::HashedString> mId;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Key();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::ActorDefinition>> mActorDefinition;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<void> addDynamicPropertiesDefinition(::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const& dynamicPropertiesDefinition);

    MCAPI ::std::string getId() const;

    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptActorType const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorType> getOrCreateHandle(::Scripting::WeakLifetimeScope const& scope, ::ActorDefinition& actorDef);
    // NOLINTEND

};

}
