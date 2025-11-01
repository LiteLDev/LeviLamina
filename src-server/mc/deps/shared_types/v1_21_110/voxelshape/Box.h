#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110 {

struct Box {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk184d05;
    ::ll::UntypedStorage<4, 12> mUnkc6e49a;
    // NOLINTEND

public:
    // prevent constructor by default
    Box& operator=(Box const&);
    Box(Box const&);
    Box();

};

}
