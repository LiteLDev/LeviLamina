#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersonaPieceHandle {
public:
    // PersonaPieceHandle inner types declare
    // clang-format off
    struct DeserializedPieceMetaData;
    struct SerializedExcessData;
    // clang-format on

    // PersonaPieceHandle inner types define
    struct DeserializedPieceMetaData {
    public:
        // DeserializedPieceMetaData inner types define
        enum class PieceIdType : int {};
    };

    struct SerializedExcessData {};
};
