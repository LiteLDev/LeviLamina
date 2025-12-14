#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct PotionMixDataEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> fromItemId;
    ::ll::TypedStorage<4, 4, int> fromItemAux;
    ::ll::TypedStorage<4, 4, int> reagentItemId;
    ::ll::TypedStorage<4, 4, int> reagentItemAux;
    ::ll::TypedStorage<4, 4, int> toItemId;
    ::ll::TypedStorage<4, 4, int> toItemAux;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
