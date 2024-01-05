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
    // symbol: ?findFirstOfType@PlayerBlockActions@@QEBAPEBUPlayerBlockActionData@@W4PlayerActionType@@@Z
    MCAPI struct PlayerBlockActionData const* findFirstOfType(::PlayerActionType type) const;

    // symbol: ?get@PlayerBlockActions@@QEBA?AV?$span@$$CBUPlayerBlockActionData@@$0?0@gsl@@XZ
    MCAPI gsl::span<struct PlayerBlockActionData const> get() const;

    // symbol: ??4PlayerBlockActions@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class PlayerBlockActions& operator=(class PlayerBlockActions&&);

    // symbol: ??1PlayerBlockActions@@QEAA@XZ
    MCAPI ~PlayerBlockActions();

    // symbol:
    // ?read@PlayerBlockActions@@SA?AV?$Result@VPlayerBlockActions@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<class PlayerBlockActions> read(class ReadOnlyBinaryStream& stream);

    // symbol: ?write@PlayerBlockActions@@SAXAEBV1@AEAVBinaryStream@@@Z
    MCAPI static void write(class PlayerBlockActions const& val, class BinaryStream& stream);

    // NOLINTEND
};
