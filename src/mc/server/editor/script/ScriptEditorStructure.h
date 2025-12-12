#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class EditorStructureTemplate; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptEditorStructure {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka12754;
    ::ll::UntypedStorage<8, 16> mUnk751c7d;
    ::ll::UntypedStorage<8, 16> mUnk4b8574;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEditorStructure& operator=(ScriptEditorStructure const&);
    ScriptEditorStructure(ScriptEditorStructure const&);
    ScriptEditorStructure();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::Editor::EditorStructureTemplate> _getEditorStructureTemplate() const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>,
        ::ScriptModuleMinecraft::ScriptInvalidStructureError,
        ::Scripting::InvalidArgumentError>
    getBlockPermutation(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getDescription() const;

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getDisplayName() const;

    MCNAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getNormalizedOrigin() const;

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidStructureError> getNotes() const;

    MCNAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError> getOffset() const;

    MCNAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getOriginalWorldLocation() const;

    MCNAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError> getSize() const;

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getStructureFullName() const;

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getStructureName() const;

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getStructureNamespace() const;

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getTags();

    MCNAPI ::std::string getUUID() const;

    MCNAPI bool isValid() const;

    MCNAPI ::Scripting::
        Result<bool, ::ScriptModuleMinecraft::ScriptInvalidStructureError, ::Scripting::InvalidArgumentError>
        isWaterlogged(::Vec3 const& location) const;

    MCNAPI ::Editor::ScriptModule::ScriptEditorStructure& operator=(::Editor::ScriptModule::ScriptEditorStructure&&);

    MCNAPI ::Scripting::
        Result<void, ::Scripting::InvalidArgumentError, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
        setBlockPermutation(
            ::Vec3 const&                                                                         location,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation,
            bool                                                                                  waterlogged
        );

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    setTags(::std::vector<::std::string> const& tags) const;

    MCNAPI ~ScriptEditorStructure();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
