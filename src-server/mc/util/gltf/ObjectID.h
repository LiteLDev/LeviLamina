#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct ObjectID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkdbef11;
    ::ll::UntypedStorage<4, 4> mUnk34e7ea;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectID& operator=(ObjectID const&);
    ObjectID(ObjectID const&);
    ObjectID();

};

}
