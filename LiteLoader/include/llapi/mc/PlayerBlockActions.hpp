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
     * @hash   77320249
     * @symbol  ?addAbortDestroyBlock\@PlayerBlockActions\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addAbortDestroyBlock(class BlockPos const &, int);
    /**
     * @hash   562260781
     * @symbol  ?addContinueDestroyBlock\@PlayerBlockActions\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addContinueDestroyBlock(class BlockPos const &, int);
    /**
     * @hash   -1614971683
     * @symbol  ?addStartDestroyBlock\@PlayerBlockActions\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void addStartDestroyBlock(class BlockPos const &, int);
    /**
     * @hash   948658707
     * @symbol  ?addStopDestroyBlock\@PlayerBlockActions\@\@QEAAXXZ
     */
    MCAPI void addStopDestroyBlock();
    /**
     * @hash   1518897878
     * @symbol  ?findFirstOfType\@PlayerBlockActions\@\@QEBAPEBUPlayerBlockActionData\@\@W4PlayerActionType\@\@\@Z
     */
    MCAPI struct PlayerBlockActionData const * findFirstOfType(enum class PlayerActionType) const;
    /**
     * @hash   908847192
     * @symbol  ?get\@PlayerBlockActions\@\@QEBA?AV?$span\@$$CBUPlayerBlockActionData\@\@$0?0\@gsl\@\@XZ
     */
    MCAPI class gsl::span<struct PlayerBlockActionData const, -1> get() const;
    /**
     * @hash   131499950
     * @symbol  ??4PlayerBlockActions\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class PlayerBlockActions & operator=(class PlayerBlockActions &&);
    /**
     * @hash   -859955413
     * @symbol  ??1PlayerBlockActions\@\@QEAA\@XZ
     */
    MCAPI ~PlayerBlockActions();
    /**
     * @hash   1566565651
     * @symbol  ?read\@PlayerBlockActions\@\@SA?AV1\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class PlayerBlockActions read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1365690533
     * @symbol  ?write\@PlayerBlockActions\@\@SAXAEBV1\@AEAVBinaryStream\@\@\@Z
     */
    MCAPI static void write(class PlayerBlockActions const &, class BinaryStream &);

};