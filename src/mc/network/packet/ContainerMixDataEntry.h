#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct ContainerMixDataEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> fromItemId;
    ::ll::TypedStorage<4, 4, int> reagentItemId;
    ::ll::TypedStorage<4, 4, int> toItemId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
