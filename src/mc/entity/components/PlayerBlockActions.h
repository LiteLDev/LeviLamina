#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PlayerActionType.h"
#include "mc/platform/Result.h"

class PlayerBlockActions {
public:
    // prevent constructor by default
    PlayerBlockActions& operator=(PlayerBlockActions const&);
    PlayerBlockActions(PlayerBlockActions const&);
    PlayerBlockActions();

public:
    // NOLINTBEGIN
    MCAPI struct PlayerBlockActionData const* findFirstOfType(::PlayerActionType type) const;

    MCAPI gsl::span<struct PlayerBlockActionData const> get() const;

    MCAPI class PlayerBlockActions& operator=(class PlayerBlockActions&&);

    MCAPI ~PlayerBlockActions();

    MCAPI static class Bedrock::Result<class PlayerBlockActions> read(class ReadOnlyBinaryStream& stream);

    MCAPI static void write(class PlayerBlockActions const& val, class BinaryStream& stream);

    // NOLINTEND
};
