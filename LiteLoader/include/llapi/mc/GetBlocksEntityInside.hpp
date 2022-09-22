/**
 * @file  GetBlocksEntityInside.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SideBySideEntityInsideBlocks.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GetBlocksEntityInside {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETBLOCKSENTITYINSIDE
public:
    class GetBlocksEntityInside& operator=(class GetBlocksEntityInside const &) = delete;
    GetBlocksEntityInside(class GetBlocksEntityInside const &) = delete;
    GetBlocksEntityInside() = delete;
#endif

public:
    /**
     * @symbol ?get@GetBlocksEntityInside@@SA?AV?$vector@UInternalData@SideBySideEntityInsideBlocks@@V?$allocator@UInternalData@SideBySideEntityInsideBlocks@@@std@@@std@@AEBVAABB@@AEBVIConstBlockSource@@@Z
     */
    MCAPI static std::vector<struct SideBySideEntityInsideBlocks::InternalData> get(class AABB const &, class IConstBlockSource const &);

};