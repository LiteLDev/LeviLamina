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
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static int getComponentTypeByteSize(::glTF::Primitive::ComponentType componentType);
#endif
    // NOLINTEND
};

} // namespace glTF
