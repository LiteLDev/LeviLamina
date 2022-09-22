/**
 * @file  BlockStateGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockStateGroup.
 *
 */
class BlockStateGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEGROUP
public:
    class BlockStateGroup& operator=(class BlockStateGroup const &) = delete;
    BlockStateGroup(class BlockStateGroup const &) = delete;
#endif

public:
    /**
     * @hash   -245592105
     * @symbol ??0BlockStateGroup@@QEAA@XZ
     */
    MCAPI BlockStateGroup();
    /**
     * @hash   289592474
     * @symbol ?getBlockStateFromHash@BlockStateGroup@@QEBAPEBVBlockStateMeta@@AEB_K@Z
     */
    MCAPI class BlockStateMeta const * getBlockStateFromHash(unsigned __int64 const &) const;
    /**
     * @hash   -1802023374
     * @symbol ?getBlockStateFromName@BlockStateGroup@@QEBAPEBVBlockStateMeta@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class BlockStateMeta const * getBlockStateFromName(std::string const &) const;
    /**
     * @hash   -1615651842
     * @symbol ?registerBlockStateDefinition@BlockStateGroup@@QEAAXAEBUBlockStateDefinition@@@Z
     */
    MCAPI void registerBlockStateDefinition(struct BlockStateDefinition const &);
    /**
     * @hash   -1962279014
     * @symbol ?registerToBlock@BlockStateGroup@@QEAAXAEAVBlockLegacy@@@Z
     */
    MCAPI void registerToBlock(class BlockLegacy &);
    /**
     * @hash   -633531167
     * @symbol ?MAX_ENUM_SIZE@BlockStateGroup@@2HB
     */
    MCAPI static int const MAX_ENUM_SIZE;
    /**
     * @hash   -1354973886
     * @symbol ?createFromItemState@BlockStateGroup@@SA?AV?$unique_ptr@UBlockStateDefinition@@U?$default_delete@UBlockStateDefinition@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVItemState@@@Z
     */
    MCAPI static std::unique_ptr<struct BlockStateDefinition> createFromItemState(std::string const &, class ItemState const &);
    /**
     * @hash   269736219
     * @symbol ?createItemStateEnum@BlockStateGroup@@SA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@AEBVItemState@@@Z
     */
    MCAPI static std::unique_ptr<class ListTag> createItemStateEnum(class ItemState const &);
    /**
     * @hash   648969419
     * @symbol ?loadBlockStateFromJson@BlockStateGroup@@SA_NAEAUBlockStateDefinition@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
     */
    MCAPI static bool loadBlockStateFromJson(struct BlockStateDefinition &, std::string const &, class Json::Value const &);

};