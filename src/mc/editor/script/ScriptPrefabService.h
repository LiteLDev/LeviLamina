#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Prefabs { class PrefabDBServerPlayerServiceProvider; }
namespace Editor::Prefabs { struct PrefabDBInstanceInteractionEvent; }
namespace Editor::ScriptModule { class ScriptPrefabTemplate; }
namespace Editor::ScriptModule { class ScriptPrefabTemplateInstance; }
namespace Editor::ScriptModule { class ScriptPrefabTemplateMetadata; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidInstance; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidName; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidTemplate; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorServiceError; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorStringInvalidLength; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorTemplateExists; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorTemplateNotFound; }
namespace Editor::ScriptModule { struct ScriptPrefabServiceCreateTemplateOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPrefabService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPrefabService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1f4e57;
    ::ll::UntypedStorage<8, 8>  mUnk695a90;
    ::ll::UntypedStorage<8, 16> mUnkd311b8;
    ::ll::UntypedStorage<8, 16> mUnk89c3d7;
    ::ll::UntypedStorage<8, 16> mUnk14906d;
    ::ll::UntypedStorage<8, 16> mUnkcce71c;
    ::ll::UntypedStorage<8, 32> mUnkef299b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabService& operator=(ScriptPrefabService const&);
    ScriptPrefabService(ScriptPrefabService const&);
    ScriptPrefabService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPrefabService();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPrefabService(
        ::Editor::ServiceProviderCollection&  serviceProviders,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorServiceError> _beginCaptureMouseClicks();

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorServiceError>
    _clearSelectedPrefabInstances();

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplate>,
        ::Scripting::Error,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidName,
        ::Editor::ScriptModule::ScriptPrefabErrorTemplateNotFound,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorTemplateExists>
    _cloneTemplate(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplate>,
            ::Editor::ScriptModule::ScriptPrefabTemplateMetadata> templateHandleOrMetadata,
        ::std::string const&                                      newName,
        ::std::optional<::std::string> const&                     optNewDisplayName
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplate>,
        ::Scripting::Error,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidName,
        ::Editor::ScriptModule::ScriptPrefabErrorStringInvalidLength>
    _createTemplate(
        ::std::string const&                                                                     name,
        ::std::optional<::Editor::ScriptModule::ScriptPrefabServiceCreateTemplateOptions> const& optOptions
    );

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _deletePrefabInstance(
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplateInstance> instance
    );

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorTemplateNotFound,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidName>
    _deleteTemplate(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplate>,
            ::Editor::ScriptModule::ScriptPrefabTemplateMetadata> templateHandleOrMetadata
    );

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _deselectPrefabInstance(
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplateInstance> instance
    );

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorServiceError> _endCaptureMouseClicks();

    MCNAPI ::std::shared_ptr<::Editor::Prefabs::PrefabDBServerPlayerServiceProvider> _getPrefabDBService();

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplate>,
        ::Scripting::Error,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidName,
        ::Editor::ScriptModule::ScriptPrefabErrorTemplateNotFound>
    _getTemplate(
        ::std::variant<::Editor::ScriptModule::ScriptPrefabTemplateMetadata, ::std::string> searchMetadata_or_name
    );

    MCNAPI ::Scripting::Result<
        ::std::vector<::Editor::ScriptModule::ScriptPrefabTemplateMetadata>,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError>
    _getTemplateList();

    MCNAPI void _handlePrefabInstanceInteractionEvent(::Editor::Prefabs::PrefabDBInstanceInteractionEvent const& event);

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _selectPrefabInstance(
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplateInstance> instance,
        bool                                                                                       appendToSelection
    );

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorServiceError>
    _shouldCaptureMouseClicks(bool active);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Editor::ServiceProviderCollection& serviceProviders, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
