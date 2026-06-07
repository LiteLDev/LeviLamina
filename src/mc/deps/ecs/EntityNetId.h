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
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::EntityNetId _serverGetEntityNetId(::EntityContext const& entity);

    MCNAPI static uint cerealize(::EntityNetId const& instance);

    MCNAPI static void decerealize(::EntityNetId& instance, uint value);

    MCNAPI static ::Bedrock::Result<::EntityNetId> deserialize(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
