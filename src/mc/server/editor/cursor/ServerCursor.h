#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/editor/cursor/Cursor.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Editor::Cursor { struct CursorState; }
namespace Editor::Network { class PayloadServiceProvider; }
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
    // vIndex: 0
    virtual ~ServerCursor() /*override*/;

    // vIndex: 2
    virtual void setCursorState(::Editor::Cursor::CursorState&& state) /*override*/;

    // vIndex: 5
    virtual ::Scripting::Result_deprecated<::BlockPos> moveCursor(::glm::ivec3 const& offset) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ServerCursor(::Editor::Network::PayloadServiceProvider& payloadService);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::Network::PayloadServiceProvider& payloadService);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setCursorState(::Editor::Cursor::CursorState&& state);

    MCAPI ::Scripting::Result_deprecated<::BlockPos> $moveCursor(::glm::ivec3 const& offset);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForCursor();

    MCAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

} // namespace Editor::Cursor
