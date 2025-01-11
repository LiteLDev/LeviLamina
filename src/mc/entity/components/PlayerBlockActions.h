#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PlayerActionType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
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
    // member functions
    // NOLINTBEGIN
    MCAPI ::PlayerBlockActionData const* findFirstOfType(::PlayerActionType type) const;

    MCAPI ::gsl::span<::PlayerBlockActionData const> get() const;

    MCAPI ::PlayerBlockActions& operator=(::PlayerBlockActions&&);

    MCAPI ~PlayerBlockActions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::PlayerBlockActions> read(::ReadOnlyBinaryStream& stream);

    MCAPI static void write(::PlayerBlockActions const& val, ::BinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
