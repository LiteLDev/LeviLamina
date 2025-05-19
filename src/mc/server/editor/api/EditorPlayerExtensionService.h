#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/server/editor/api/EditorPlayerExtensionServiceProvider.h"

// auto generated forward declare list
// clang-format off
namespace Editor::API { class EditorExtension; }
namespace Editor::API { class EditorExtensionContext; }
namespace Editor::ScriptModule { class ScriptInternalPlayerServiceContext; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::API {

class EditorPlayerExtensionService : public ::Editor::Services::IEditorService,
                                     public ::Editor::API::EditorPlayerExtensionServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk5a7855;
    ::ll::UntypedStorage<8, 16> mUnkd0eb60;
    ::ll::UntypedStorage<8, 16> mUnk9e4b1b;
    ::ll::UntypedStorage<8, 16> mUnkf7f171;
    ::ll::UntypedStorage<8, 24> mUnkade424;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorPlayerExtensionService& operator=(EditorPlayerExtensionService const&);
    EditorPlayerExtensionService(EditorPlayerExtensionService const&);
    EditorPlayerExtensionService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorPlayerExtensionService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void>
    startExtensions(::std::optional<::Scripting::ContextId> optionalContextId) /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> stopExtensions() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> forEachExtension(
        ::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func
    ) /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result<
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptInternalPlayerServiceContext>,
        ::Scripting::Error>
    getInternalServiceContext(::Scripting::WeakLifetimeScope const& scope) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void>
    _createAndStartExtensionContexts(::std::optional<::Scripting::ContextId> optionalContextId);

    MCNAPI ::Scripting::Result<void>
    _createExtensionContexts(::std::optional<::Scripting::ContextId> optionalContextId);

    MCNAPI ::Scripting::Result<void> _destroyExtensionContexts();

    MCNAPI ::Scripting::Result<void> _handleStartExtensions(::std::optional<::Scripting::ContextId> optionalContextId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> $init();

    MCNAPI ::Scripting::Result<void> $ready();

    MCNAPI ::Scripting::Result<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result<void> $startExtensions(::std::optional<::Scripting::ContextId> optionalContextId);

    MCNAPI ::Scripting::Result<void> $stopExtensions();

    MCNAPI ::Scripting::Result<void>
    $forEachExtension(::std::function<void(::Bedrock::NotNullNonOwnerPtr<::Editor::API::EditorExtension>)> func);

    MCNAPI ::Scripting::Result<
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptInternalPlayerServiceContext>,
        ::Scripting::Error>
    $getInternalServiceContext(::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorPlayerExtensionServiceProvider();
    // NOLINTEND
};

} // namespace Editor::API
