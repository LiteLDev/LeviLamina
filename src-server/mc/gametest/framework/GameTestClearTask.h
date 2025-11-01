#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Dimension;
// clang-format on

class GameTestClearTask {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk5c35f4;
    ::ll::UntypedStorage<8, 16> mUnkac810e;
    ::ll::UntypedStorage<1, 1> mUnkf34dd1;
    ::ll::UntypedStorage<1, 1> mUnk142d9b;
    ::ll::UntypedStorage<8, 96> mUnk4af5fa;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestClearTask& operator=(GameTestClearTask const&);
    GameTestClearTask(GameTestClearTask const&);
    GameTestClearTask();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameTestClearTask(::Dimension& dimension, ::BoundingBox const& bounds);

    MCNAPI void tick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension& dimension, ::BoundingBox const& bounds);
    // NOLINTEND

};
