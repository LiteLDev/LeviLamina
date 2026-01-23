#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/server/editor/serviceproviders/ServerCursorServiceProvider.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ProjectRegion; }
namespace Editor::Cursor { class ServerCursor; }
namespace Editor::Cursor { struct AttachmentProperties; }
namespace Editor::Cursor { struct CursorState; }
namespace Editor::Cursor { struct Position; }
namespace Editor::Cursor { struct Ray; }
namespace Editor::Network { class CursorServicePositionChangePayload; }
namespace Editor::Network { class CursorServiceViewDistanceChangePayload; }
// clang-format on

namespace Editor::Cursor {

class ServerCursorService : public ::Editor::Services::IEditorService,
                            public ::Editor::Cursor::ServerCursorServiceProvider,
                            public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk34ac53;
    ::ll::UntypedStorage<8, 16> mUnkb8f196;
    ::ll::UntypedStorage<8, 16> mUnkcf80cc;
    ::ll::UntypedStorage<8, 24> mUnka7b08b;
    ::ll::UntypedStorage<4, 4>  mUnk10a236;
    ::ll::UntypedStorage<8, 48> mUnk6fe9e8;
    ::ll::UntypedStorage<8, 48> mUnk8dce3c;
    ::ll::UntypedStorage<8, 48> mUnk353ef0;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCursorService& operator=(ServerCursorService const&);
    ServerCursorService(ServerCursorService const&);
    ServerCursorService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerCursorService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::StackRefResult<::Editor::Cursor::ServerCursor> getCursor() const /*override*/;

    virtual ::StackRefResult<::Editor::Cursor::Ray> getRay() const /*override*/;

    virtual ::Scripting::Result_deprecated<::Editor::Cursor::CursorState> getCursorState() const /*override*/;

    virtual ::Scripting::Result_deprecated<::Editor::Cursor::AttachmentProperties> getAttachmentProperties() const
        /*override*/;

    virtual ::Scripting::Result_deprecated<void> setCursorState(::Editor::Cursor::CursorState&& state) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setAttachmentProperties(::Editor::Cursor::AttachmentProperties&& props) /*override*/;

    virtual ::Scripting::Result_deprecated<::BlockPos> moveBy(::glm::ivec3 const& offset) /*override*/;

    virtual ::Scripting::Result_deprecated<int> getMaxViewBlockDistance() const /*override*/;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> listenForCursorStateChanges(
        ::std::function<void(::Editor::Cursor::CursorState const&, ::Editor::Cursor::CursorState const&)> callback
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription listenForCursorPositionChanges(
        ::std::function<void(::std::optional<::Editor::Cursor::Position> const&, ::Editor::Cursor::CursorState const&)>
            callback
    ) /*override*/;

    virtual ::WeakRef<::Editor::ProjectRegion> getRegion() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<::WeakRef<::Editor::Cursor::ServerCursor>> _createCursor();

    MCNAPI void _createOrUpdateRegion(::BlockPos const& pos);

    MCNAPI void _handleMaxViewDistanceChange(::Editor::Network::CursorServiceViewDistanceChangePayload const& payload);

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
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::StackRefResult<::Editor::Cursor::ServerCursor> $getCursor() const;

    MCNAPI ::StackRefResult<::Editor::Cursor::Ray> $getRay() const;

    MCNAPI ::Scripting::Result_deprecated<::Editor::Cursor::CursorState> $getCursorState() const;

    MCNAPI ::Scripting::Result_deprecated<::Editor::Cursor::AttachmentProperties> $getAttachmentProperties() const;

    MCNAPI ::Scripting::Result_deprecated<void> $setCursorState(::Editor::Cursor::CursorState&& state);

    MCNAPI ::Scripting::Result_deprecated<void>
    $setAttachmentProperties(::Editor::Cursor::AttachmentProperties&& props);

    MCNAPI ::Scripting::Result_deprecated<::BlockPos> $moveBy(::glm::ivec3 const& offset);

    MCNAPI ::Scripting::Result_deprecated<int> $getMaxViewBlockDistance() const;

    MCNAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> $listenForCursorStateChanges(
        ::std::function<void(::Editor::Cursor::CursorState const&, ::Editor::Cursor::CursorState const&)> callback
    );

    MCNAPI ::Bedrock::PubSub::Subscription $listenForCursorPositionChanges(
        ::std::function<void(::std::optional<::Editor::Cursor::Position> const&, ::Editor::Cursor::CursorState const&)>
            callback
    );

    MCNAPI ::WeakRef<::Editor::ProjectRegion> $getRegion() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForServerCursorServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Cursor
