#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidTemplateStructure; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPrefabTemplateStructure
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPrefabTemplateStructure> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk39ddd0;
    ::ll::UntypedStorage<8, 8>  mUnkae5593;
    ::ll::UntypedStorage<8, 16> mUnkd44537;
    ::ll::UntypedStorage<8, 16> mUnka791b8;
    ::ll::UntypedStorage<8, 16> mUnkbfe6d0;
    ::ll::UntypedStorage<8, 16> mUnk507ffe;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplateStructure& operator=(ScriptPrefabTemplateStructure const&);
    ScriptPrefabTemplateStructure(ScriptPrefabTemplateStructure const&);
    ScriptPrefabTemplateStructure();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPrefabTemplateStructure();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<::Mirror, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getInstanceMirror() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getInstanceOffset() const;

    MCNAPI ::Scripting::Result<::Rotation, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getInstanceRotation() const;

    MCNAPI ::Scripting::Result<::std::string, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getPrefabStructureId() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getStructureNormalizedOrigin() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getStructureOffset() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getStructureSize() const;
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
