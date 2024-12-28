#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
class StructureTemplate;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptStructureTemplate; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace ScriptModuleMinecraft { struct ScriptJigsawPlaceOptions; }
namespace ScriptModuleMinecraft { struct ScriptJigsawStructurePlaceOptions; }
namespace ScriptModuleMinecraft { struct ScriptPlaceJigsawError; }
namespace ScriptModuleMinecraft { struct ScriptStructureCreateOptions; }
namespace ScriptModuleMinecraft { struct ScriptStructurePlaceOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStructureManager : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptStructureManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk250945;
    ::ll::UntypedStorage<8, 8>  mUnk5c39b7;
    ::ll::UntypedStorage<8, 64> mUnk95af6c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStructureManager& operator=(ScriptStructureManager const&);
    ScriptStructureManager(ScriptStructureManager const&);
    ScriptStructureManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptStructureManager(::ScriptModuleMinecraft::ScriptStructureManager&&);

    MCAPI ScriptStructureManager(::Scripting::WeakLifetimeScope const& scope, ::gsl::not_null<::ServerLevel*> level);

    MCAPI ::std::string_view _getPlaceErrorMessage(::std::string_view key) const;

    MCAPI ::StructureTemplate const*
    _getStructure(::std::variant<
                  ::std::string,
                  ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>> const&
                      scriptStructureOrName) const;

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>,
        ::Scripting::InvalidArgumentError,
        ::Scripting::EngineError>
    createEmptyStructure(::std::string const& identifier, ::Vec3 const& size, ::StructureRedstoneSaveMode saveMode);

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>,
        ::Scripting::InvalidArgumentError>
    createStructureFromWorld(
        ::std::string const&                                                                  identifier,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> const& scriptDimension,
        ::Vec3 const&                                                                         from,
        ::Vec3 const&                                                                         to,
        ::std::optional<::ScriptModuleMinecraft::ScriptStructureCreateOptions> const&         options
    );

    MCAPI ::Scripting::Result<bool, ::Scripting::InvalidArgumentError>
    deleteStructure(::std::variant<
                    ::std::string,
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>> const&
                        scriptStructureOrName);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>
    getOrCreateScriptStructure(::StructureTemplate& structureTemplate);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>>
    getStructure(::std::string const& identifier);

    MCAPI ::std::vector<::std::string> getWorldStructureIds() const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptPlaceJigsawError> placeJigsaw(
        ::std::string const&                                                                  pool,
        ::std::string const&                                                                  targetJigsaw,
        int                                                                                   maxDepth,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> const& scriptDimension,
        ::Vec3 const&                                                                         location,
        ::std::optional<::ScriptModuleMinecraft::ScriptJigsawPlaceOptions> const&             options
    );

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptPlaceJigsawError> placeJigsawStructure(
        ::std::string const&                                                                  identifier,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> const& scriptDimension,
        ::Vec3 const&                                                                         location,
        ::std::optional<::ScriptModuleMinecraft::ScriptJigsawStructurePlaceOptions> const&    options
    );

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidStructureError,
        ::Scripting::InvalidArgumentError,
        ::Scripting::ArgumentOutOfBoundsError>
    placeStructure(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>>&
                                                                                              scriptStructureOrName,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> const& scriptDimension,
        ::Vec3 const&                                                                         location,
        ::std::optional<::ScriptModuleMinecraft::ScriptStructurePlaceOptions> const&          options
    );

    MCAPI ::std::optional<::Scripting::InvalidArgumentError> validateIdentifier(::std::string const& identifier) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptStructureManager> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptStructureManager&&);

    MCAPI void* $ctor(::Scripting::WeakLifetimeScope const& scope, ::gsl::not_null<::ServerLevel*> level);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
