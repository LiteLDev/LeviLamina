#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Biome;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBiomeType {
public:
    // ScriptBiomeType inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptBiomeType inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb84624;
        // NOLINTEND

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
        Key(Key const&);
        Key();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb4cea5;
    ::ll::UntypedStorage<8, 8>  mUnkd2271f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeType& operator=(ScriptBiomeType const&);
    ScriptBiomeType();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBiomeType(::ScriptModuleMinecraft::ScriptBiomeType const&);

    MCAPI ::std::string getId() const;

    MCFOLD ::ScriptModuleMinecraft::ScriptBiomeType& operator=(::ScriptModuleMinecraft::ScriptBiomeType&&);

    MCAPI ~ScriptBiomeType();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBiomeType> bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBiomeType>
    getOrCreateHandle(::Biome const& biome, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptBiomeType const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
