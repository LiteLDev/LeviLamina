#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct VertexElementDescription {
public:
    // VertexElementDescription inner types define
    enum class VertexType : int {
        Byte          = 0,
        UnsignedByte  = 1,
        Short         = 2,
        UnsignedShort = 3,
        Int           = 4,
        UnsignedInt   = 5,
        Fixed         = 6,
        Float         = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5fe3df;
    ::ll::UntypedStorage<4, 4> mUnkb361a8;
    ::ll::UntypedStorage<1, 1> mUnk59e2a2;
    ::ll::UntypedStorage<4, 4> mUnkc47807;
    ::ll::UntypedStorage<4, 4> mUnk8187e9;
    ::ll::UntypedStorage<4, 4> mUnkae70d5;
    ::ll::UntypedStorage<4, 4> mUnk1bb735;
    ::ll::UntypedStorage<4, 4> mUnk2e3b8a;
    // NOLINTEND

public:
    // prevent constructor by default
    VertexElementDescription& operator=(VertexElementDescription const&);
    VertexElementDescription(VertexElementDescription const&);
    VertexElementDescription();
};

} // namespace renoir
