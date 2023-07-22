/**
 * @file  PlayerBlockActions.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerBlockActions.
 *
 */
class PlayerBlockActions {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERBLOCKACTIONS
public:
    class PlayerBlockActions& operator=(class PlayerBlockActions const &) = delete;
    PlayerBlockActions(class PlayerBlockActions const &) = delete;
    PlayerBlockActions() = delete;
#endif

public:
    /**
     * @symbol  ?addAbortDestroyBlock\@PlayerBlockActions\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addAbortDestroyBlock(class BlockPos const &, int);
    /**
     * @symbol  ?addContinueDestroyBlock\@PlayerBlockActions\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addContinueDestroyBlock(class BlockPos const &, int);
    /**
     * @symbol  ?addStartDestroyBlock\@PlayerBlockActions\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addStartDestroyBlock(class BlockPos const &, int);
    /**
     * @symbol  ?addStopDestroyBlock\@PlayerBlockActions\@\@QEAAXXZ
     */
    MCAPI void addStopDestroyBlock();
    /**
     * @symbol  ?findFirstOfType\@PlayerBlockActions\@\@QEBAPEBUPlayerBlockActionData\@\@W4PlayerActionType\@\@\@Z
     */
    MCAPI struct PlayerBlockActionData const * findFirstOfType(enum class PlayerActionType) const;
    /**
     * @symbol  ?get\@PlayerBlockActions\@\@QEBA?AV?$span\@$$CBUPlayerBlockActionData\@\@$0?0\@gsl\@\@XZ
     */
    MCAPI class gsl::span<struct PlayerBlockActionData const, -1> get() const;
    /**
     * @symbol  ??4PlayerBlockActions\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class PlayerBlockActions & operator=(class PlayerBlockActions &&);
    /**
     * @symbol  ??1PlayerBlockActions\@\@QEAA\@XZ
     */
    MCAPI ~PlayerBlockActions();
    /**
     * @symbol  ?read\@PlayerBlockActions\@\@SA?AV1\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class PlayerBlockActions read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ?write\@PlayerBlockActions\@\@SAXAEBV1\@AEAVBinaryStream\@\@\@Z
     */
    MCAPI static void write(class PlayerBlockActions const &, class BinaryStream &);

};