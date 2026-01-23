#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

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
// clang-format on

namespace Editor::Cursor {

class ServerCursorServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerCursorServiceProvider() = default;

    virtual ::StackRefResult<::Editor::Cursor::ServerCursor> getCursor() const = 0;

    virtual ::StackRefResult<::Editor::Cursor::Ray> getRay() const = 0;

    virtual ::Scripting::Result_deprecated<::Editor::Cursor::CursorState> getCursorState() const = 0;

    virtual ::Scripting::Result_deprecated<::Editor::Cursor::AttachmentProperties> getAttachmentProperties() const = 0;

    virtual ::Scripting::Result_deprecated<void> setCursorState(::Editor::Cursor::CursorState&& state) = 0;

    virtual ::Scripting::Result_deprecated<void>
    setAttachmentProperties(::Editor::Cursor::AttachmentProperties&& props) = 0;

    virtual ::Scripting::Result_deprecated<::BlockPos> moveBy(::glm::ivec3 const& offset) = 0;

    virtual ::Scripting::Result_deprecated<int> getMaxViewBlockDistance() const = 0;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> listenForCursorStateChanges(
        ::std::function<void(::Editor::Cursor::CursorState const&, ::Editor::Cursor::CursorState const&)>
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription listenForCursorPositionChanges(
        ::std::function<void(::std::optional<::Editor::Cursor::Position> const&, ::Editor::Cursor::CursorState const&)>
    ) = 0;

    virtual ::WeakRef<::Editor::ProjectRegion> getRegion() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Cursor
