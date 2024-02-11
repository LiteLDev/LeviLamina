#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class EntityNetId {
public:
    int netId;

    // prevent constructor by default
    EntityNetId& operator=(EntityNetId const&);
    EntityNetId(EntityNetId const&);
    EntityNetId();

public:
    // NOLINTBEGIN
    // symbol: ?_serverGetEntityNetId@EntityNetId@@SA?AV1@AEBVEntityContext@@@Z
    MCAPI static class EntityNetId _serverGetEntityNetId(class EntityContext const& entity);

    // symbol:
    // ?deserialize@EntityNetId@@SA?AV?$Result@VEntityNetId@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<class EntityNetId> deserialize(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
