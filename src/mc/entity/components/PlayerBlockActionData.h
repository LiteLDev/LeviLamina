#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct PlayerBlockActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9285fa;
    ::ll::UntypedStorage<4, 12> mUnk742f8b;
    ::ll::UntypedStorage<4, 4>  mUnk74d969;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerBlockActionData& operator=(PlayerBlockActionData const&);
    PlayerBlockActionData(PlayerBlockActionData const&);
    PlayerBlockActionData();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::PlayerBlockActionData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
