#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Cursor {

struct Position {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnke3ebf3;
    ::ll::UntypedStorage<1, 1>  mUnkfb4d2e;
    ::ll::UntypedStorage<4, 12> mUnk5c751e;
    // NOLINTEND

public:
    // prevent constructor by default
    Position& operator=(Position const&);
    Position(Position const&);
    Position();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Cursor
