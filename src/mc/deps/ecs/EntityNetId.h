#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ReadOnlyBinaryStream;
// clang-format on

class EntityNetId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mRawId;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityNetId& operator=(EntityNetId const&);
    EntityNetId(EntityNetId const&);
    EntityNetId();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::EntityNetId _serverGetEntityNetId(::EntityContext const& entity);

    MCAPI static ::Bedrock::Result<::EntityNetId> deserialize(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
