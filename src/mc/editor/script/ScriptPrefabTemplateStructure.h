#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Prefabs { class PrefabDBTemplateStructureRef; }
namespace Editor::ScriptModule { class ScriptEditorStructure; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidStructure; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidTemplateStructure; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorServiceError; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorValueOutOfBounds; }
namespace Scripting { class WeakLifetimeScope; }
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
    virtual ~ScriptPrefabTemplateStructure() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPrefabTemplateStructure(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplateStructureRef> templateStructureRef,
        ::Editor::ServiceProviderCollection&                       serviceProviders,
        ::Scripting::WeakLifetimeScope const&                      scope
    );

    MCNAPI ::Scripting::Result<::Mirror, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getInstanceMirror() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getInstanceOffset() const;

    MCNAPI ::Scripting::Result<::Rotation, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getInstanceRotation() const;

    MCNAPI ::Scripting::Result<::std::string, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getPrefabStructureId() const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptEditorStructure>,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidStructure>
    _getStructure() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getStructureNormalizedOrigin() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getStructureOffset() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _getStructureSize() const;

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _setInstanceMirror(::Mirror mirror);

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure,
        ::Editor::ScriptModule::ScriptPrefabErrorValueOutOfBounds>
    _setInstanceOffset(::Vec3 const& offset);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _setInstanceRotation(::Rotation rotation);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplateStructureRef> templateStructureRef,
        ::Editor::ServiceProviderCollection&                       serviceProviders,
        ::Scripting::WeakLifetimeScope const&                      scope
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
