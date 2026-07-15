#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/cursor/Cursor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Editor::Cursor { struct CursorState; }
// clang-format on

namespace Editor::Cursor {

class ServerCursor : public ::Editor::Cursor::Cursor,
                     public ::Bedrock::EnableNonOwnerReferences,
                     public ::EnableGetWeakRef<::Editor::Cursor::ServerCursor> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6f0986;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCursor& operator=(ServerCursor const&);
    ServerCursor(ServerCursor const&);
    ServerCursor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerCursor() /*override*/ = default;

    virtual void setCursorState(::Editor::Cursor::CursorState&& state) /*override*/;

    virtual ::Scripting::Result_deprecated<::BlockPos> moveCursor(::glm::ivec3 const& offset) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Cursor
