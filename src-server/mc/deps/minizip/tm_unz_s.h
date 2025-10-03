#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct tm_unz_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk52b9a2;
    ::ll::UntypedStorage<4, 4> mUnkab0964;
    ::ll::UntypedStorage<4, 4> mUnk793638;
    ::ll::UntypedStorage<4, 4> mUnk836b4e;
    ::ll::UntypedStorage<4, 4> mUnka6618a;
    ::ll::UntypedStorage<4, 4> mUnk2b25ef;
    // NOLINTEND

public:
    // prevent constructor by default
    tm_unz_s& operator=(tm_unz_s const&);
    tm_unz_s(tm_unz_s const&);
    tm_unz_s();
};
