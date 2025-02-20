#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/selection/SelectionServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class SelectionContainerClonePayload; }
namespace Editor::Network { class SelectionContainerColorPayload; }
namespace Editor::Network { class SelectionContainerErrorPayload; }
namespace Editor::Network { class SelectionContainerPushPayload; }
namespace Editor::Network { class SelectionContainerReplacePayload; }
namespace Editor::Network { class SelectionContainerTranslatePayload; }
namespace Editor::Network { class SelectionContainerUnaryPayload; }
namespace Editor::Network { class SelectionContainerVisiblePayload; }
namespace Editor::Network { class SelectionServicePayload; }
namespace Editor::Network { class ServerScriptTeardownRebuildPayload; }
namespace Editor::Selection { class SelectionContainer; }
namespace Editor::Services { struct SelectionEvent; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class SelectionService : public ::Editor::Services::IEditorService,
                         public ::Editor::Services::SelectionServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf0eb1f;
    ::ll::UntypedStorage<8, 24> mUnk915822;
    ::ll::UntypedStorage<1, 1>  mUnka98316;
    ::ll::UntypedStorage<8, 16> mUnkcf2516;
    ::ll::UntypedStorage<8, 48> mUnk7f6d98;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionService& operator=(SelectionService const&);
    SelectionService(SelectionService const&);
    SelectionService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<::WeakRef<::Editor::Selection::SelectionContainer>>
    createContainer() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> destroyContainer(::WeakRef<::Editor::Selection::SelectionContainer> containerRef
    ) /*override*/;

    // vIndex: 3
    virtual ::StackRefResult<::Editor::Selection::SelectionContainer> getPrimaryContainer() const /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<::WeakRef<::Editor::Selection::SelectionContainer>>
    findContainer(::mce::UUID const& id) const /*override*/;

    // vIndex: 5
    virtual ::Scripting::Result_deprecated<::std::vector<::mce::UUID>> getContainerIdList() const /*override*/;

    // vIndex: 6
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    registerSelectionEventListener(::std::function<void(::Editor::Services::SelectionEvent const&)> callback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _cleanGarbageCollection(::Editor::ServiceProviderCollection&);

    MCAPI ::WeakRef<::Editor::Selection::SelectionContainer>
    _createContainer(::mce::UUID const& newId, bool isPrimary, bool requiresReplication, bool fromNetwork);

    MCAPI ::Scripting::Result<void> _destroyContainer(::mce::UUID const& idToDestroy, bool force, bool fromNetwork);

    MCAPI void _handlePayloadClone(::Editor::Network::SelectionContainerClonePayload const& payload);

    MCAPI void _handlePayloadColor(::Editor::Network::SelectionContainerColorPayload const& payload);

    MCAPI void _handlePayloadError(::Editor::Network::SelectionContainerErrorPayload const& payload);

    MCAPI void _handlePayloadPush(::Editor::Network::SelectionContainerPushPayload const& payload);

    MCAPI void _handlePayloadReplace(::Editor::Network::SelectionContainerReplacePayload const& payload);

    MCAPI void _handlePayloadTranslate(::Editor::Network::SelectionContainerTranslatePayload const& payload);

    MCAPI void _handlePayloadUnary(::Editor::Network::SelectionContainerUnaryPayload const& payload);

    MCAPI void _handlePayloadVisible(::Editor::Network::SelectionContainerVisiblePayload const& payload);

    MCAPI void _handleServicePayloadMessage(::Editor::Network::SelectionServicePayload const& payload);

    MCAPI void
    _handle_ServerScriptTeardownRebuildPayload(::Editor::Network::ServerScriptTeardownRebuildPayload const& payload);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $ready();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::Scripting::Result_deprecated<::WeakRef<::Editor::Selection::SelectionContainer>> $createContainer();

    MCAPI ::Scripting::Result<void> $destroyContainer(::WeakRef<::Editor::Selection::SelectionContainer> containerRef);

    MCAPI ::StackRefResult<::Editor::Selection::SelectionContainer> $getPrimaryContainer() const;

    MCAPI ::Scripting::Result_deprecated<::WeakRef<::Editor::Selection::SelectionContainer>>
    $findContainer(::mce::UUID const& id) const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::mce::UUID>> $getContainerIdList() const;

    MCAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    $registerSelectionEventListener(::std::function<void(::Editor::Services::SelectionEvent const&)> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIEditorService();

    MCAPI static void** $vftableForSelectionServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
