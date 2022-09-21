/**
 * @file  MC/WorldChangeTransaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -519507551
     * @symbol ??0WorldChangeTransaction@@QEAA@AEAVIBlockWorldGenAPI@@@Z
     */
    MCAPI WorldChangeTransaction(class IBlockWorldGenAPI &);
    /**
     * @hash   -1903929756
     * @symbol ?apply@WorldChangeTransaction@@QEBA_NXZ
     */
    MCAPI bool apply() const;
    /**
     * @hash   -1746772651
     * @symbol ?getBlock@WorldChangeTransaction@@QEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    MCAPI class Block const & getBlock(class BlockPos const &) const;
    /**
     * @hash   -813873698
     * @symbol ?setBlock@WorldChangeTransaction@@QEAAXAEBVBlockPos@@AEBVBlock@@H@Z
     */
    MCAPI void setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @hash   -488632666
     * @symbol ??1WorldChangeTransaction@@QEAA@XZ
     */
    MCAPI ~WorldChangeTransaction();

};