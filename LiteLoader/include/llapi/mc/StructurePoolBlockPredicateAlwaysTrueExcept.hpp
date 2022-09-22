/**
 * @file  StructurePoolBlockPredicateAlwaysTrueExcept.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolBlockPredicateAlwaysTrueExcept.
 *
 */
class StructurePoolBlockPredicateAlwaysTrueExcept {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEALWAYSTRUEEXCEPT
public:
    class StructurePoolBlockPredicateAlwaysTrueExcept& operator=(class StructurePoolBlockPredicateAlwaysTrueExcept const &) = delete;
    StructurePoolBlockPredicateAlwaysTrueExcept(class StructurePoolBlockPredicateAlwaysTrueExcept const &) = delete;
    StructurePoolBlockPredicateAlwaysTrueExcept() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StructurePoolBlockPredicateAlwaysTrueExcept();
    /**
     * @hash   -1023057030
     * @vftbl  1
     * @symbol ?test@StructurePoolBlockPredicateAlwaysTrueExcept@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
     */
    virtual bool test(class Block const &, class Randomize &) const;
    /**
     * @hash   1935549830
     * @vftbl  2
     * @symbol ?test@StructurePoolBlockPredicateAlwaysTrueExcept@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
     */
    virtual bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
    /**
     * @hash   -1965582894
     * @symbol ??0StructurePoolBlockPredicateAlwaysTrueExcept@@QEAA@AEBV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@M@Z
     */
    MCAPI StructurePoolBlockPredicateAlwaysTrueExcept(class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const &, float);

};