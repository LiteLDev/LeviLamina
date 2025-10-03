#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
struct PlayerBlockActionData;
// clang-format on

class PlayerBlockActions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PlayerBlockActionData>> mActions;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerBlockActions& operator=(PlayerBlockActions const&);
    PlayerBlockActions(PlayerBlockActions const&);
    PlayerBlockActions();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::PlayerBlockActions& operator=(::PlayerBlockActions&&);

    MCAPI ~PlayerBlockActions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::PlayerBlockActions> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
