#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Editor::Cursor { struct AttachmentProperties; }
namespace Editor::Cursor { struct CursorState; }
// clang-format on

namespace Editor::Cursor {

class Cursor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnke239e9;
    ::ll::UntypedStorage<4, 60> mUnk3b8be1;
    ::ll::UntypedStorage<4, 96> mUnk7b54c7;
    ::ll::UntypedStorage<4, 36> mUnkd9d534;
    ::ll::UntypedStorage<4, 28> mUnkfac3b4;
    // NOLINTEND

public:
    // prevent constructor by default
    Cursor& operator=(Cursor const&);
    Cursor(Cursor const&);
    Cursor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Cursor() = default;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setCursorState(::Editor::Cursor::CursorState&& state);

    MCNAPI void $setCursorState(::Editor::Cursor::CursorState const& state);

    MCNAPI void $setAttachmentProperties(::Editor::Cursor::AttachmentProperties&& props);

    MCNAPI void $setAttachmentProperties(::Editor::Cursor::AttachmentProperties const& props);

    MCNAPI ::Scripting::Result_deprecated<::BlockPos> $moveCursor(::glm::ivec3 const& offset);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
