#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Editor::Cursor { struct AttachmentProperties; }
namespace Editor::Cursor { struct CursorState; }
namespace Editor::Cursor { struct Position; }
// clang-format on

namespace Editor::Cursor {

class Cursor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 20> mUnke239e9;
    ::ll::UntypedStorage<4, 60> mUnk3b8be1;
    ::ll::UntypedStorage<4, 96> mUnk7b54c7;
    ::ll::UntypedStorage<4, 36> mUnkd9d534;
    ::ll::UntypedStorage<4, 16> mUnkfac3b4;
    // NOLINTEND

public:
    // prevent constructor by default
    Cursor& operator=(Cursor const&);
    Cursor(Cursor const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Cursor();

    // vIndex: 2
    virtual void setCursorState(::Editor::Cursor::CursorState&& state);

    // vIndex: 1
    virtual void setCursorState(::Editor::Cursor::CursorState const& state);

    // vIndex: 4
    virtual void setAttachmentProperties(::Editor::Cursor::AttachmentProperties&& props);

    // vIndex: 3
    virtual void setAttachmentProperties(::Editor::Cursor::AttachmentProperties const& props);

    // vIndex: 5
    virtual ::Scripting::Result_deprecated<::BlockPos> moveCursor(::glm::ivec3 const& offset);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Cursor();

    MCAPI ::std::optional<::Editor::Cursor::Position>& _getBlockPosition();

    MCAPI ::Editor::Cursor::AttachmentProperties getAttachmentProperties() const;

    MCAPI ::Editor::Cursor::CursorState getCursorState() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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

    MCAPI void $setCursorState(::Editor::Cursor::CursorState const& state);

    MCAPI void $setAttachmentProperties(::Editor::Cursor::AttachmentProperties&& props);

    MCAPI void $setAttachmentProperties(::Editor::Cursor::AttachmentProperties const& props);

    MCAPI ::Scripting::Result_deprecated<::BlockPos> $moveCursor(::glm::ivec3 const& offset);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Cursor
