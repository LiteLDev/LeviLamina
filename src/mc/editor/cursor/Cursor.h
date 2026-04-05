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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Cursor& operator=(Cursor const&);
    Cursor(Cursor const&);
    Cursor();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Cursor& operator=(Cursor const&);
    Cursor(Cursor const&);

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Cursor() = default;

    virtual void setCursorState(::Editor::Cursor::CursorState&& state);

    virtual void setCursorState(::Editor::Cursor::CursorState const& state);

    virtual void setAttachmentProperties(::Editor::Cursor::AttachmentProperties&& props);

    virtual void setAttachmentProperties(::Editor::Cursor::AttachmentProperties const& props);

    virtual ::Scripting::Result_deprecated<::BlockPos> moveCursor(::glm::ivec3 const& offset);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI Cursor();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
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

} // namespace Editor::Cursor
