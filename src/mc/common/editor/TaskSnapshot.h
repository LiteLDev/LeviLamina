#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Coroutine {

struct TaskSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk42dc91;
    ::ll::UntypedStorage<8, 40> mUnk8e0b60;
    ::ll::UntypedStorage<8, 32> mUnk6cc866;
    ::ll::UntypedStorage<8, 40> mUnkbf609f;
    ::ll::UntypedStorage<8, 32> mUnkb54220;
    ::ll::UntypedStorage<8, 32> mUnk6f19cd;
    ::ll::UntypedStorage<8, 32> mUnka3013d;
    ::ll::UntypedStorage<4, 4>  mUnk4dc1ce;
    ::ll::UntypedStorage<8, 8>  mUnk4f7f1e;
    ::ll::UntypedStorage<8, 16> mUnkce84a9;
    ::ll::UntypedStorage<8, 16> mUnk8b6b55;
    ::ll::UntypedStorage<8, 8>  mUnk77c131;
    ::ll::UntypedStorage<8, 8>  mUnk84c0ed;
    ::ll::UntypedStorage<8, 8>  mUnka83470;
    ::ll::UntypedStorage<8, 8>  mUnkd20176;
    ::ll::UntypedStorage<8, 32> mUnk6102f4;
    ::ll::UntypedStorage<8, 8>  mUnk9c3b15;
    ::ll::UntypedStorage<8, 8>  mUnkf31cb8;
    ::ll::UntypedStorage<4, 4>  mUnk24d57c;
    ::ll::UntypedStorage<1, 1>  mUnk7b8af8;
    ::ll::UntypedStorage<1, 1>  mUnkcdf459;
    ::ll::UntypedStorage<1, 1>  mUnkffb18d;
    ::ll::UntypedStorage<1, 1>  mUnka47166;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskSnapshot& operator=(TaskSnapshot const&);
    TaskSnapshot(TaskSnapshot const&);
    TaskSnapshot();
};

} // namespace Editor::Coroutine
