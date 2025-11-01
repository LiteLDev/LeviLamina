#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct CloudQueryRow {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkcfc947;
    ::ll::UntypedStorage<8, 8> mUnkea17aa;
    ::ll::UntypedStorage<4, 4> mUnk195802;
    ::ll::UntypedStorage<8, 136> mUnk53a8fc;
    ::ll::UntypedStorage<8, 136> mUnk2c8c7f;
    ::ll::UntypedStorage<8, 16> mUnk7ef42c;
    ::ll::UntypedStorage<8, 16> mUnk4544dc;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudQueryRow& operator=(CloudQueryRow const&);
    CloudQueryRow(CloudQueryRow const&);
    CloudQueryRow();

};

}
