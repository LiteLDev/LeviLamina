#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class EntityNetId {

public:
    // prevent constructor by default
    EntityNetId& operator=(EntityNetId const&) = delete;
    EntityNetId(EntityNetId const&)            = delete;
    EntityNetId()                              = delete;

public:
    /**
     * @symbol ?_serverGetEntityNetId\@EntityNetId\@\@SA?AV1\@AEBVEntityContext\@\@\@Z
     */
    MCAPI static class EntityNetId _serverGetEntityNetId(class EntityContext const&); // NOLINT
    /**
     * @symbol
     * ?deserialize\@EntityNetId\@\@SA?AV?$Result\@VEntityNetId\@\@Verror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<class EntityNetId, class std::error_code>
    deserialize(class ReadOnlyBinaryStream&); // NOLINT
};
