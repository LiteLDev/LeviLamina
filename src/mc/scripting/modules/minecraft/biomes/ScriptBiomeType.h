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
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::Biome const*>                  mBiome;
    ::ll::TypedStorage<8, 8, ::BiomeRegistry const*>          mBiomeRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getId() const;

    MCAPI ::std::vector<::std::string> getTags() const;

    MCAPI bool hasTags(::std::vector<::std::string> const& tags) const;
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
};

} // namespace ScriptModuleMinecraft
