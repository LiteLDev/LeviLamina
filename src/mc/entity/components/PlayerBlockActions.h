#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/actor/player/PlayerActionType.h"

class PlayerBlockActions {
public:
    std::vector<struct PlayerBlockActionData> mActions;

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
