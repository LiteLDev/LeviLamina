#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MolangQueryFunctionReturnType : uint64 {
    // bitfield representation
    Float = 1ull << 0,
    HashType64 = 1ull << 1,
    ActorPtr = 1ull << 2,
    ActorIdPtr = 1ull << 3,
    ActorArrayPtr = 1ull << 4,
    ActorIdArrayPtr = 1ull << 5,
    ArrayVariable = 1ull << 6,
    ClientTexture = 1ull << 7,
    ContextVariable = 1ull << 8,
    DataDrivenGeometry = 1ull << 9,
    EntityVariable = 1ull << 10,
    GeometryVariable = 1ull << 11,
    MaterialVariable = 1ull << 12,
    MemberAccessor = 1ull << 13,
    MemberArray = 1ull << 14,
    TempVariable = 1ull << 15,
    TextureVariable = 1ull << 16,
    Bool = 1ull << 17,
    Matrix = 1ull << 18,
    ActorSingle = ActorPtr | ActorIdPtr,
    ActorArray = ActorArrayPtr | ActorIdArrayPtr,
    Actor = ActorPtr | ActorIdPtr | ActorArrayPtr | ActorIdArrayPtr,
    Variable = ContextVariable | EntityVariable | TempVariable,
    Resource = ClientTexture | GeometryVariable | MaterialVariable | TextureVariable,
    Number = Float | Bool,
};
