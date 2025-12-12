#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Cursor {

struct CursorState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 20> mUnk143b53;
    ::ll::UntypedStorage<4, 20> mUnk8aca76;
    ::ll::UntypedStorage<4, 4>  mUnkb53327;
    ::ll::UntypedStorage<4, 4>  mUnkbc7588;
    ::ll::UntypedStorage<1, 1>  mUnkf397d2;
    ::ll::UntypedStorage<4, 4>  mUnk92d3fd;
    ::ll::UntypedStorage<1, 1>  mUnk46d8c6;
    // NOLINTEND

public:
    // prevent constructor by default
    CursorState& operator=(CursorState const&);
    CursorState(CursorState const&);
    CursorState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Editor::Cursor::CursorState const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_FIXED_DISTANCE();

    MCNAPI static int const& MIN_FIXED_DISTANCE();
    // NOLINTEND
};

} // namespace Editor::Cursor
