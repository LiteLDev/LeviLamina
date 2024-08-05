#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

struct PlayerBlockActionData {
public:
    // prevent constructor by default
    PlayerBlockActionData& operator=(PlayerBlockActionData const&);
    PlayerBlockActionData(PlayerBlockActionData const&);
    PlayerBlockActionData();

public:
    // NOLINTBEGIN
    MCAPI static class Bedrock::Result<struct PlayerBlockActionData> read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
