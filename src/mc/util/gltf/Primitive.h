#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Primitive {
public:
    // Primitive inner types define
    enum class ComponentType : int {
        Byte          = 5120,
        UnsignedByte  = 5121,
        Short         = 5122,
        UnsignedShort = 5123,
        Float         = 5126,
    };

public:
    // prevent constructor by default
    Primitive& operator=(Primitive const&);
    Primitive(Primitive const&);
    Primitive();
};

} // namespace glTF
