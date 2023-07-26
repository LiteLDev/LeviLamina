#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

struct PlayerBlockActionData {

public:
    // prevent constructor by default
    PlayerBlockActionData& operator=(PlayerBlockActionData const&) = delete;
    PlayerBlockActionData(PlayerBlockActionData const&)            = delete;
    PlayerBlockActionData()                                        = delete;

public:
    /**
     * @symbol
     * ?read\@PlayerBlockActionData\@\@SA?AV?$Result\@UPlayerBlockActionData\@\@Verror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<struct PlayerBlockActionData, class std::error_code>
    read(class ReadOnlyBinaryStream&); // NOLINT
};
