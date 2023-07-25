#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class PlayerBlockActions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERBLOCKACTIONS
public:
    PlayerBlockActions& operator=(PlayerBlockActions const&) = delete;
    PlayerBlockActions(PlayerBlockActions const&)            = delete;
    PlayerBlockActions()                                     = delete;
#endif

public:
    /**
     * @symbol ?findFirstOfType\@PlayerBlockActions\@\@QEBAPEBUPlayerBlockActionData\@\@W4PlayerActionType\@\@\@Z
     */
    MCAPI struct PlayerBlockActionData const* findFirstOfType(enum class PlayerActionType) const;
    /**
     * @symbol ?get\@PlayerBlockActions\@\@QEBA?AV?$span\@$$CBUPlayerBlockActionData\@\@$0?0\@gsl\@\@XZ
     */
    MCAPI class gsl::span<struct PlayerBlockActionData const, -1> get() const;
    /**
     * @symbol ??4PlayerBlockActions\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class PlayerBlockActions& operator=(class PlayerBlockActions&&);
    /**
     * @symbol ??1PlayerBlockActions\@\@QEAA\@XZ
     */
    MCAPI ~PlayerBlockActions();
    /**
     * @symbol
     * ?read\@PlayerBlockActions\@\@SA?AV?$Result\@VPlayerBlockActions\@\@Verror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<class PlayerBlockActions, class std::error_code>
    read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ?write\@PlayerBlockActions\@\@SAXAEBV1\@AEAVBinaryStream\@\@\@Z
     */
    MCAPI static void write(class PlayerBlockActions const&, class BinaryStream&);
};
