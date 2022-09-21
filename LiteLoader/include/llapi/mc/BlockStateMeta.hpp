/**
 * @file  MC/BlockStateMeta.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockStateMeta.
 *
 */
class BlockStateMeta {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEMETA
public:
    class BlockStateMeta& operator=(class BlockStateMeta const &) = delete;
    BlockStateMeta(class BlockStateMeta const &) = delete;
    BlockStateMeta() = delete;
#endif

public:
    /**
     * @hash   135343875
     * @symbol ??0BlockStateMeta@@QEAA@AEBVItemState@@AEBUBlockStateDefinition@@@Z
     */
    MCAPI BlockStateMeta(class ItemState const &, struct BlockStateDefinition const &);
    /**
     * @hash   -924976463
     * @symbol ?getBool@BlockStateMeta@@QEBA?B_NH@Z
     */
    MCAPI bool const getBool(int) const;
    /**
     * @hash   23309419
     * @symbol ?getID@BlockStateMeta@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getID() const;
    /**
     * @hash   -1479464831
     * @symbol ?getInt@BlockStateMeta@@QEBA?BHH@Z
     */
    MCAPI int const getInt(int) const;
    /**
     * @hash   -1007759220
     * @symbol ?getName@BlockStateMeta@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   -1448876250
     * @symbol ?getState@BlockStateMeta@@QEBAAEBVItemState@@XZ
     */
    MCAPI class ItemState const & getState() const;
    /**
     * @hash   -1054407443
     * @symbol ?getString@BlockStateMeta@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI std::string const & getString(int) const;
    /**
     * @hash   388513240
     * @symbol ?getType@BlockStateMeta@@QEBA?BW4Type@Tag@@XZ
     */
    MCAPI enum Tag::Type const getType() const;
    /**
     * @hash   1158174113
     * @symbol ?indexOf@BlockStateMeta@@QEBAHAEB_K@Z
     */
    MCAPI int indexOf(unsigned __int64 const &) const;

};