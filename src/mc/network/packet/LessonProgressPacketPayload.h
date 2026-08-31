#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/LessonAction.h"

struct LessonProgressPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::LessonAction> mAction;
    ::ll::TypedStorage<4, 4, int>            mScore;
    ::ll::TypedStorage<8, 32, ::std::string> mActivityId;
    // NOLINTEND
};
