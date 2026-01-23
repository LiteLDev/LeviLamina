#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/PrefabSource.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Prefabs { class PrefabDBTemplate; }
namespace Editor::ScriptModule { class ScriptEditorStructure; }
namespace Editor::ScriptModule { class ScriptPrefabTemplateInstance; }
namespace Editor::ScriptModule { class ScriptPrefabTemplateMetadata; }
namespace Editor::ScriptModule { class ScriptPrefabTemplateStructure; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidInstance; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidName; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidStructure; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidTemplate; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidTemplateStructure; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorServiceError; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorStringInvalidLength; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorTemplateExists; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorValueOutOfBounds; }
namespace Editor::ScriptModule { struct ScriptPrefabTemplateAddStructureOptions; }
namespace Editor::ScriptModule { struct ScriptPrefabTemplateCreateInstanceOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPrefabTemplate : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPrefabTemplate> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka0e710;
    ::ll::UntypedStorage<8, 8>  mUnk3757bf;
    ::ll::UntypedStorage<8, 16> mUnk798cbd;
    ::ll::UntypedStorage<8, 16> mUnkf6df99;
    ::ll::UntypedStorage<8, 16> mUnk1eef67;
    ::ll::UntypedStorage<8, 16> mUnkf8ab6c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplate& operator=(ScriptPrefabTemplate const&);
    ScriptPrefabTemplate(ScriptPrefabTemplate const&);
    ScriptPrefabTemplate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPrefabTemplate() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPrefabTemplate(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> templateRef,
        ::Editor::ServiceProviderCollection&           serviceProviders,
        ::Scripting::WeakLifetimeScope const&          scope
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplateStructure>,
        ::Scripting::Error,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorValueOutOfBounds,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidStructure>
    _addStructure(
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptEditorStructure>     structureRef,
        ::std::optional<::Editor::ScriptModule::ScriptPrefabTemplateAddStructureOptions> const& optOptions
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplateInstance>,
        ::Scripting::Error,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _createInstance(
        ::Vec3 const&                                                                             location,
        ::std::optional<::Editor::ScriptModule::ScriptPrefabTemplateCreateInstanceOptions> const& optOptions
    );

    MCNAPI ::Scripting::Result<::std::string, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
    _getDescription() const;

    MCNAPI ::Scripting::Result<::std::string, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
    _getDisplayName() const;

    MCNAPI ::Scripting::Result<
        int,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
    _getInstanceCount();

    MCNAPI ::Scripting::Result<
        ::Editor::ScriptModule::ScriptPrefabTemplateMetadata,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
    _getMetadata() const;

    MCNAPI ::Scripting::Result<::std::string, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
    _getName() const;

    MCNAPI ::Scripting::Result<::std::string, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
    _getNotes() const;

    MCNAPI ::Scripting::
        Result<::Editor::Prefabs::PrefabSource, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
        _getSource() const;

    MCNAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplateStructure>>,
        ::Scripting::Error,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
    _getStructures();

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
    _getTags() const;

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure>
    _removeStructure(
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplateStructure> scriptStructureRef
    );

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorStringInvalidLength>
    _setDescription(::std::string const& newDescription);

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorStringInvalidLength>
    _setDisplayName(::std::string const& newName);

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorTemplateExists,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidName>
    _setName(::std::string const& newName);

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorStringInvalidLength>
    _setNotes(::std::string const& newNotes);

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorStringInvalidLength>
    _setTags(::std::vector<::std::string> const& newTags);

    MCNAPI ::StackRefResult<::Editor::Prefabs::PrefabDBTemplate const> getTemplate() const;

    MCNAPI ::StackRefResult<::Editor::Prefabs::PrefabDBTemplate> getTemplate();
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
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> templateRef,
        ::Editor::ServiceProviderCollection&           serviceProviders,
        ::Scripting::WeakLifetimeScope const&          scope
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
