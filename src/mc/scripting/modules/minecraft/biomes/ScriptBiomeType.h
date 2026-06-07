#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
namespace Scripting { struct ClassBinding; }
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
        ::ll::TypedStorage<8, 8, ::Biome const*> mBiomePtr;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>         mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Biome const*>>         mBiome;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BiomeRegistry const*>> mBiomeRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeType& operator=(ScriptBiomeType const&);
    ScriptBiomeType();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBiomeType(::ScriptModuleMinecraft::ScriptBiomeType&&);

    MCAPI ScriptBiomeType(::ScriptModuleMinecraft::ScriptBiomeType const&);

    MCAPI
    ScriptBiomeType(::Biome const& biome, ::BiomeRegistry const& registry, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI ::std::string getId() const;

    MCAPI ::std::vector<::std::string> getTags() const;

    MCAPI bool hasTags(::std::vector<::std::string> const& tags) const;

    MCAPI ::ScriptModuleMinecraft::ScriptBiomeType& operator=(::ScriptModuleMinecraft::ScriptBiomeType&& rhs);

    MCAPI ~ScriptBiomeType();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBiomeType> getOrCreateHandle(
        ::Biome const&                        biome,
        ::BiomeRegistry const&                registry,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBiomeType&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBiomeType const&);

    MCAPI void*
    $ctor(::Biome const& biome, ::BiomeRegistry const& registry, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
