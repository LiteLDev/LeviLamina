#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class EntityNetId {
public:
    // prevent constructor by default
    EntityNetId& operator=(EntityNetId const&);
    EntityNetId(EntityNetId const&);
    EntityNetId();

public:
    // NOLINTBEGIN
    MCAPI static class EntityNetId _serverGetEntityNetId(class EntityContext const& entity);

    MCAPI static class Bedrock::Result<class EntityNetId> deserialize(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
