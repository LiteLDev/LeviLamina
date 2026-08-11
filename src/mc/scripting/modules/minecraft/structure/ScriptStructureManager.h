#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
class StructureTemplate;
namespace ScriptModuleMinecraft { class ScriptStructureTemplate; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStructureManager : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptStructureManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>>>
                                                                             mStructures;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mPackStructureIds;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStructureManager(ScriptStructureManager const&);
    ScriptStructureManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string_view _getPlaceErrorMessage(::std::string_view const key) const;

    MCAPI ::StructureTemplate const* _getStructure(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>> const&
            scriptStructureOrName
    ) const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>
    getOrCreateScriptStructure(::StructureTemplate& structureTemplate);

    MCAPI ::ScriptModuleMinecraft::ScriptStructureManager&
    operator=(::ScriptModuleMinecraft::ScriptStructureManager const&);

    MCAPI ::std::optional<::Scripting::InvalidArgumentError> validateIdentifier(::std::string const& identifier) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
