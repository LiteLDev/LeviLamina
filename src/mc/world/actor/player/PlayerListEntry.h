#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class PlayerListEntry {
public:
    // prevent constructor by default
    PlayerListEntry& operator=(PlayerListEntry const&);
    PlayerListEntry(PlayerListEntry const&);

public:
    // NOLINTBEGIN
    MCAPI PlayerListEntry();

    MCAPI explicit PlayerListEntry(class Player const& player);

    MCAPI explicit PlayerListEntry(class mce::UUID uuid);

    MCAPI class PlayerListEntry clone() const;

    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    MCAPI class Bedrock::Result<void> readRemove(class ReadOnlyBinaryStream& stream);

    MCAPI void write(class BinaryStream& stream) const;

    MCAPI void writeRemove(class BinaryStream& stream) const;

    MCAPI ~PlayerListEntry();

    // NOLINTEND
};
