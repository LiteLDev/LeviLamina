#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/server/editor/serviceproviders/ServerCursorServiceProvider.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Cursor { class ServerCursor; }
namespace Editor::Cursor { struct AttachmentProperties; }
namespace Editor::Cursor { struct CursorState; }
namespace Editor::Cursor { struct Position; }
namespace Editor::Cursor { struct Ray; }
namespace Editor::Network { class CursorServicePositionChangePayload; }
// clang-format on

namespace Editor::Cursor {

class ServerCursorService : public ::Editor::Services::IEditorService,
                            public ::Editor::Services::PayloadStoreHelper,
                            public ::Editor::Cursor::ServerCursorServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb8f196;
    ::ll::UntypedStorage<8, 16> mUnkcf80cc;
    ::ll::UntypedStorage<8, 24> mUnka7b08b;
    ::ll::UntypedStorage<8, 48> mUnkb594c0;
    ::ll::UntypedStorage<8, 48> mUnk282724;
    ::ll::UntypedStorage<8, 48> mUnk50310b;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCursorService& operator=(ServerCursorService const&);
    ServerCursorService(ServerCursorService const&);
    ServerCursorService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerCursorService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::StackRefResult<::Editor::Cursor::ServerCursor> getCursor() const /*override*/;

    // vIndex: 2
    virtual ::StackRefResult<::Editor::Cursor::Ray> getRay() const /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<::Editor::Cursor::CursorState> getCursorState() const /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<::Editor::Cursor::AttachmentProperties> getAttachmentProperties() const
        /*override*/;

    // vIndex: 5
    virtual ::Scripting::Result<void> setCursorState(::Editor::Cursor::CursorState&& state) /*override*/;

    // vIndex: 6
    virtual ::Scripting::Result<void>
    setAttachmentProperties(::Editor::Cursor::AttachmentProperties&& props) /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<::BlockPos> moveBy(::glm::ivec3 const& offset) /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> listenForCursorStateChanges(
        ::std::function<void(::Editor::Cursor::CursorState const&, ::Editor::Cursor::CursorState const&)> callback
    ) /*override*/;

    // vIndex: 9
    virtual ::Bedrock::PubSub::Subscription listenForCursorPositionChanges(
        ::std::function<void(::std::optional<::Editor::Cursor::Position> const&, ::Editor::Cursor::CursorState const&)>
            callback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<::WeakRef<::Editor::Cursor::ServerCursor>> _createCursor();

    MCNAPI void _handlePayloadPositionChange(::Editor::Network::CursorServicePositionChangePayload const& payload);
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

    MCNAPI ::StackRefResult<::Editor::Cursor::ServerCursor> $getCursor() const;

    MCNAPI ::StackRefResult<::Editor::Cursor::Ray> $getRay() const;

    MCNAPI ::Scripting::Result_deprecated<::Editor::Cursor::CursorState> $getCursorState() const;

    MCNAPI ::Scripting::Result_deprecated<::Editor::Cursor::AttachmentProperties> $getAttachmentProperties() const;

    MCNAPI ::Scripting::Result<void> $setCursorState(::Editor::Cursor::CursorState&& state);

    MCNAPI ::Scripting::Result<void> $setAttachmentProperties(::Editor::Cursor::AttachmentProperties&& props);

    MCNAPI ::Scripting::Result_deprecated<::BlockPos> $moveBy(::glm::ivec3 const& offset);

    MCNAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> $listenForCursorStateChanges(
        ::std::function<void(::Editor::Cursor::CursorState const&, ::Editor::Cursor::CursorState const&)> callback
    );

    MCNAPI ::Bedrock::PubSub::Subscription $listenForCursorPositionChanges(
        ::std::function<void(::std::optional<::Editor::Cursor::Position> const&, ::Editor::Cursor::CursorState const&)>
            callback
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForServerCursorServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Cursor
