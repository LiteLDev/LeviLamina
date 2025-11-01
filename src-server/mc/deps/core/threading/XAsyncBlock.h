#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct XTaskQueueObject;
// clang-format on

struct XAsyncBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::XTaskQueueObject*> queue;
    ::ll::TypedStorage<8, 8, void*> context;
    ::ll::TypedStorage<8, 8, void(*) (::XAsyncBlock*)> callback;
    ::ll::TypedStorage<1, 32, uchar[32]> internal;
    // NOLINTEND

};
