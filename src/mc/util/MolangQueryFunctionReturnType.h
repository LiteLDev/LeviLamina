#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MolangQueryFunctionReturnType : uint64 {
    Float              = 0,
    HashType64         = 0,
    ActorPtr           = 0,
    ActorIdPtr         = 0,
    ActorArrayPtr      = 0,
    ActorIdArrayPtr    = 0,
    ArrayVariable      = 0,
    ClientTexture      = 0,
    ContextVariable    = 0,
    DataDrivenGeometry = 0,
    EntityVariable     = 0,
    GeometryVariable   = 0,
    MaterialVariable   = 0,
    MemberAccessor     = 0,
    MemberArray        = 0,
    TempVariable       = 0,
    TextureVariable    = 0,
    Bool               = 0,
    Matrix             = 0,
    Number             = 0,
    ActorSingle        = 0,
    ActorArray         = 0,
    Actor              = 0,
    Variable           = 0,
    Resource           = 0,
};
