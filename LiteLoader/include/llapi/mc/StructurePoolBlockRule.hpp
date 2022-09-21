/**
 * @file  MC/StructurePoolBlockRule.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolBlockRule.
 *
 */
class StructurePoolBlockRule {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKRULE
public:
    class StructurePoolBlockRule& operator=(class StructurePoolBlockRule const &) = delete;
    StructurePoolBlockRule(class StructurePoolBlockRule const &) = delete;
    StructurePoolBlockRule() = delete;
#endif

public:
    /**
     * @hash   -2030147385
     * @symbol ??0StructurePoolBlockRule@@QEAA@$$QEAV?$unique_ptr@VIStructurePoolBlockPredicate@@U?$default_delete@VIStructurePoolBlockPredicate@@@std@@@std@@0PEBVBlock@@@Z
     */
    MCAPI StructurePoolBlockRule(std::unique_ptr<class IStructurePoolBlockPredicate> &&, std::unique_ptr<class IStructurePoolBlockPredicate> &&, class Block const *);
    /**
     * @hash   -31011139
     * @symbol ??0StructurePoolBlockRule@@QEAA@$$QEAV?$unique_ptr@VIStructurePoolBlockPredicate@@U?$default_delete@VIStructurePoolBlockPredicate@@@std@@@std@@00PEBVBlock@@@Z
     */
    MCAPI StructurePoolBlockRule(std::unique_ptr<class IStructurePoolBlockPredicate> &&, std::unique_ptr<class IStructurePoolBlockPredicate> &&, std::unique_ptr<class IStructurePoolBlockPredicate> &&, class Block const *);
    /**
     * @hash   -1027475712
     * @symbol ?processRule@StructurePoolBlockRule@@QEBA_NAEBVBlock@@0AEAVRandom@@AEAPEBV2@AEBVBlockPos@@3@Z
     */
    MCAPI bool processRule(class Block const &, class Block const &, class Random &, class Block const *&, class BlockPos const &, class BlockPos const &) const;

};