#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_50 {

struct BoundingBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk559b24;
    ::ll::UntypedStorage<4, 4> mUnkdf696d;
    ::ll::UntypedStorage<4, 4> mUnk9808b2;
    ::ll::UntypedStorage<4, 4> mUnk618c84;
    ::ll::UntypedStorage<4, 4> mUnkc2c275;
    ::ll::UntypedStorage<4, 4> mUnk506b50;
    // NOLINTEND

public:
    // prevent constructor by default
    BoundingBox& operator=(BoundingBox const&);
    BoundingBox(BoundingBox const&);
    BoundingBox();

};

}
