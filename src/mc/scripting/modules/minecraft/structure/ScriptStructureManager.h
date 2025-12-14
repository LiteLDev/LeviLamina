#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
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
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
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
    ScriptStructureManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptStructureManager(::ScriptModuleMinecraft::ScriptStructureManager&&);

    MCNAPI ScriptStructureManager(::ScriptModuleMinecraft::ScriptStructureManager const&);

    MCNAPI ::std::string_view _getPlaceErrorMessage(::std::string_view key) const;

    MCNAPI ::StructureTemplate const* _getStructure(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>> const&
            scriptStructureOrName
    ) const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>,
        ::Scripting::InvalidArgumentError,
        ::Scripting::EngineError>
    createEmptyStructure(::std::string const& identifier, ::Vec3 const& size, ::StructureRedstoneSaveMode saveMode);

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>,
        ::Scripting::InvalidArgumentError>
    createStructureFromWorld(
        ::std::string const&                                                                  identifier,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> const& scriptDimension,
        ::Vec3 const&                                                                         from,
        ::Vec3 const&                                                                         to,
        ::std::optional<::ScriptModuleMinecraft::ScriptStructureCreateOptions> const&         options
    );

    MCNAPI ::Scripting::Result<bool, ::Scripting::InvalidArgumentError> deleteStructure(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>> const&
            scriptStructureOrName
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>
    getOrCreateScriptStructure(::StructureTemplate& structureTemplate);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>>
    getStructure(::std::string const& identifier);

    MCNAPI ::std::vector<::std::string> getWorldStructureIds() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptStructureManager& operator=(::ScriptModuleMinecraft::ScriptStructureManager&&
    );

    MCNAPI ::Scripting::Result<::BoundingBox, ::ScriptModuleMinecraft::ScriptPlaceJigsawError> placeJigsaw(
        ::std::string const&                                                                  pool,
        ::std::string const&                                                                  targetJigsaw,
        int                                                                                   maxDepth,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> const& scriptDimension,
        ::Vec3 const&                                                                         location,
        ::std::optional<::ScriptModuleMinecraft::ScriptJigsawPlaceOptions> const&             options
    );

    MCNAPI ::Scripting::Result<::BoundingBox, ::ScriptModuleMinecraft::ScriptPlaceJigsawError> placeJigsawStructure(
        ::std::string const&                                                                  identifier,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> const& scriptDimension,
        ::Vec3 const&                                                                         location,
        ::std::optional<::ScriptModuleMinecraft::ScriptJigsawStructurePlaceOptions> const&    options
    );

    MCNAPI ::Scripting::Result<
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

    MCNAPI ::std::optional<::Scripting::InvalidArgumentError> validateIdentifier(::std::string const& identifier) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptStructureManager&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptStructureManager const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
