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
    ::ll::UntypedStorage<8, 64> mUnk6289c3;
    ::ll::UntypedStorage<8, 24> mUnka904b7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeTypes& operator=(ScriptBiomeTypes const&);
    ScriptBiomeTypes(ScriptBiomeTypes const&);
    ScriptBiomeTypes();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptBiomeTypes(::Bedrock::NonOwnerPointer<::BiomeRegistry> registry);

    MCNAPI void _generateAllBiomeTypeHandles(::Scripting::WeakLifetimeScope& scope);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBiomeType>> get(::std::string const& biomeName, ::Scripting::WeakLifetimeScope& scope);

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBiomeType>> getAllBiomeTypes(::Scripting::WeakLifetimeScope& scope);

    MCNAPI ::ScriptModuleMinecraft::ScriptBiomeTypes& operator=(::ScriptModuleMinecraft::ScriptBiomeTypes&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind(::Bedrock::NonOwnerPointer<::BiomeRegistry> biomeRegistry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::BiomeRegistry> registry);
    // NOLINTEND

};

}
