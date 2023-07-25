#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class EntityNetId {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYNETID
public:
    EntityNetId& operator=(EntityNetId const&) = delete;
    EntityNetId(EntityNetId const&)            = delete;
    EntityNetId()                              = delete;
#endif

public:
    /**
     * @symbol ?_serverGetEntityNetId\@EntityNetId\@\@SA?AV1\@AEBVEntityContext\@\@\@Z
     */
    MCAPI static class EntityNetId _serverGetEntityNetId(class EntityContext const&);
    /**
     * @symbol
     * ?deserialize\@EntityNetId\@\@SA?AV?$Result\@VEntityNetId\@\@Verror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<class EntityNetId, class std::error_code>
    deserialize(class ReadOnlyBinaryStream&);
};
