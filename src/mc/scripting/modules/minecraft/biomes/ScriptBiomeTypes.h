#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBiomeTypes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBiomeType>>>
                                                                           mBiomeTypes;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::BiomeRegistry>> mBiomeRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeTypes& operator=(ScriptBiomeTypes const&);
    ScriptBiomeTypes(ScriptBiomeTypes const&);
    ScriptBiomeTypes();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptBiomeTypes(::Bedrock::NonOwnerPointer<::BiomeRegistry> registry);

    MCAPI void _generateAllBiomeTypeHandles(::Scripting::WeakLifetimeScope& scope);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBiomeType>>
    get(::std::string const& biomeName, ::Scripting::WeakLifetimeScope& scope);

    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBiomeType>>
    getAllBiomeTypes(::Scripting::WeakLifetimeScope& scope);

    MCAPI ::ScriptModuleMinecraft::ScriptBiomeTypes& operator=(::ScriptModuleMinecraft::ScriptBiomeTypes&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind(::Bedrock::NonOwnerPointer<::BiomeRegistry> biomeRegistry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::BiomeRegistry> registry);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
