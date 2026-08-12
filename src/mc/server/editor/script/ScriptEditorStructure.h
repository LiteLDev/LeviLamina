#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
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
    MCNAPI ::Scripting::InvalidArgumentError
    _createBoundsError(int index, ::BlockPos const& pos, ::BlockPos const& size) const;

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getDescription() const;

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getDisplayName() const;

#ifdef LL_PLAT_C
    MCNAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getNormalizedOrigin() const;
#endif

#ifdef LL_PLAT_S
    MCNAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getNormalizedOrigin() const;
#endif

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidStructureError> getNotes() const;

#ifdef LL_PLAT_C
    MCNAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError> getOffset() const;
#endif

#ifdef LL_PLAT_S
    MCNAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError> getOffset() const;
#endif

    MCNAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getOriginalWorldLocation() const;

    MCNAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError> getSize() const;

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getStructureFullName() const;

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getStructureName() const;

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
    getStructureNamespace() const;

    MCNAPI bool isValid() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::Scripting::ClassBinding bindScript();
#endif

#ifdef LL_PLAT_C
    MCNAPI static ::Scripting::ClassBinding bindScript();
#endif
    // NOLINTEND
};

} // namespace Editor::ScriptModule
