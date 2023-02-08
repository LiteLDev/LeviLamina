/**
 * @file  WorldChangeTransaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldChangeTransaction.
 *
 */
class WorldChangeTransaction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDCHANGETRANSACTION
public:
    class WorldChangeTransaction& operator=(class WorldChangeTransaction const &) = delete;
    WorldChangeTransaction(class WorldChangeTransaction const &) = delete;
    WorldChangeTransaction() = delete;
#endif

public:
    /**
     * @hash   348775169
     * @symbol  ??0WorldChangeTransaction\@\@QEAA\@AEAVIBlockWorldGenAPI\@\@\@Z
     */
    MCAPI WorldChangeTransaction(class IBlockWorldGenAPI &);
    /**
     * @hash   -1035647036
     * @symbol  ?apply\@WorldChangeTransaction\@\@QEBA_NXZ
     */
    MCAPI bool apply() const;
    /**
     * @hash   -878474555
     * @symbol  ?getBlock\@WorldChangeTransaction\@\@QEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Block const & getBlock(class BlockPos const &) const;
    /**
     * @hash   54424398
     * @symbol  ?setBlock\@WorldChangeTransaction\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    MCAPI void setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @hash   379650054
     * @symbol  ??1WorldChangeTransaction\@\@QEAA\@XZ
     */
    MCAPI ~WorldChangeTransaction();

};