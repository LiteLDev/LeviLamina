#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class PlayerListEntry {

public:
    // prevent constructor by default
    PlayerListEntry& operator=(PlayerListEntry const&) = delete;
    PlayerListEntry(PlayerListEntry const&)            = delete;

public:
    /**
     * @symbol ??0PlayerListEntry\@\@QEAA\@XZ
     */
    MCAPI PlayerListEntry(); // NOLINT
    /**
     * @symbol ??0PlayerListEntry\@\@QEAA\@VUUID\@mce\@\@\@Z
     */
    MCAPI PlayerListEntry(class mce::UUID); // NOLINT
    /**
     * @symbol ??0PlayerListEntry\@\@QEAA\@AEBVPlayer\@\@\@Z
     */
    MCAPI PlayerListEntry(class Player const&); // NOLINT
    /**
     * @symbol ?clone\@PlayerListEntry\@\@QEBA?AV1\@XZ
     */
    MCAPI class PlayerListEntry clone() const; // NOLINT
    /**
     * @symbol
     * ?read\@PlayerListEntry\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @symbol
     * ?readRemove\@PlayerListEntry\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> readRemove(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @symbol ?write\@PlayerListEntry\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream&) const; // NOLINT
    /**
     * @symbol ?writeRemove\@PlayerListEntry\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void writeRemove(class BinaryStream&) const; // NOLINT
    /**
     * @symbol ??1PlayerListEntry\@\@QEAA\@XZ
     */
    MCAPI ~PlayerListEntry(); // NOLINT
};
