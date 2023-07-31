#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class PlayerBlockActions {

public:
    // prevent constructor by default
    PlayerBlockActions& operator=(PlayerBlockActions const&) = delete;
    PlayerBlockActions(PlayerBlockActions const&)            = delete;
    PlayerBlockActions()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?findFirstOfType\@PlayerBlockActions\@\@QEBAPEBUPlayerBlockActionData\@\@W4PlayerActionType\@\@\@Z
     */
    MCAPI struct PlayerBlockActionData const* findFirstOfType(enum class PlayerActionType) const;
    /**
     * @symbol ?get\@PlayerBlockActions\@\@QEBA?AV?$span\@$$CBUPlayerBlockActionData\@\@$0?0\@gsl\@\@XZ
     */
    MCAPI class gsl::span<struct PlayerBlockActionData const> get() const;
    /**
     * @symbol ??4PlayerBlockActions\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class PlayerBlockActions& operator=(class PlayerBlockActions&&);
    /**
     * @symbol
     * ?read\@PlayerBlockActions\@\@SA?AV?$Result\@VPlayerBlockActions\@\@Verror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<class PlayerBlockActions, std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ?write\@PlayerBlockActions\@\@SAXAEBV1\@AEAVBinaryStream\@\@\@Z
     */
    MCAPI static void write(class PlayerBlockActions const&, class BinaryStream&);
    /**
     * @symbol ??1PlayerBlockActions\@\@QEAA\@XZ
     */
    MCAPI ~PlayerBlockActions();
    // NOLINTEND
};
