#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MolangQueryFunctionReturnType : uint64 {
    Float              = 1 << 0ull,
    HashType64         = 1 << 1ull,
    ActorPtr           = 1 << 2ull,
    ActorIdPtr         = 1 << 3ull,
    ActorArrayPtr      = 1 << 4ull,
    ActorIdArrayPtr    = 1 << 5ull,
    ArrayVariable      = 1 << 6ull,
    ClientTexture      = 1 << 7ull,
    ContextVariable    = 1 << 8ull,
    DataDrivenGeometry = 1 << 9ull,
    EntityVariable     = 1 << 10ull,
    GeometryVariable   = 1 << 11ull,
    MaterialVariable   = 1 << 12ull,
    MemberAccessor     = 1 << 13ull,
    MemberArray        = 1 << 14ull,
    TempVariable       = 1 << 15ull,
    TextureVariable    = 1 << 16ull,
    Bool               = 1 << 17ull,
    Matrix             = 1 << 18ull,
    Number             = Bool | Float,
    ActorSingle        = ActorPtr | ActorIdPtr,
    ActorArray         = ActorArrayPtr | ActorIdArrayPtr,
    Actor              = ActorSingle | ActorArray,
    Variable           = ContextVariable | EntityVariable | TempVariable,
    Resource           = ClientTexture | GeometryVariable | MaterialVariable | TextureVariable,
};
