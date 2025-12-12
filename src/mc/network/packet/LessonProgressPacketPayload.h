#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LessonProgressPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk8abf6a;
    ::ll::UntypedStorage<4, 4>  mUnkad250e;
    ::ll::UntypedStorage<8, 32> mUnk702fbd;
    // NOLINTEND

public:
    // prevent constructor by default
    LessonProgressPacketPayload& operator=(LessonProgressPacketPayload const&);
    LessonProgressPacketPayload(LessonProgressPacketPayload const&);
    LessonProgressPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::LessonProgressPacketPayload& operator=(::LessonProgressPacketPayload&&);

    MCNAPI ~LessonProgressPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
