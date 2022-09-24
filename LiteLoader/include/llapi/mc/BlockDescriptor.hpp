/**
 * @file  BlockDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockDescriptor.
 *
 */
class BlockDescriptor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESCRIPTOR
public:
    class BlockDescriptor& operator=(class BlockDescriptor const &) = delete;
#endif

public:
    /**
     * @hash   -1876064152
     * @symbol ??0BlockDescriptor@@QEAA@XZ
     */
    MCAPI BlockDescriptor();
    /**
     * @hash   -1667909183
     * @symbol ??0BlockDescriptor@@QEAA@AEBVHashedString@@@Z
     */
    MCAPI BlockDescriptor(class HashedString const &);
    /**
     * @hash   1333387179
     * @symbol ??0BlockDescriptor@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEBV?$vector@VBlockState@BlockDescriptor@@V?$allocator@VBlockState@BlockDescriptor@@@std@@@2@@Z
     */
    MCAPI BlockDescriptor(std::string const &, std::vector<class BlockDescriptor::BlockState> const &&);
    /**
     * @hash   -749385135
     * @symbol ??0BlockDescriptor@@QEAA@AEBV0@@Z
     */
    MCAPI BlockDescriptor(class BlockDescriptor const &);
    /**
     * @hash   134215617
     * @symbol ??0BlockDescriptor@@QEAA@$$QEAV0@@Z
     */
    MCAPI BlockDescriptor(class BlockDescriptor &&);
    /**
     * @hash   1545367537
     * @symbol ?getBlock@BlockDescriptor@@QEBAPEBVBlock@@XZ
     */
    MCAPI class Block const * getBlock() const;
    /**
     * @hash   3777476
     * @symbol ?getTagExpression@BlockDescriptor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getTagExpression() const;
    /**
     * @hash   -1554412026
     * @symbol ?isValid@BlockDescriptor@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -592513517
     * @symbol ?matches@BlockDescriptor@@QEBA_NAEBVBlock@@@Z
     */
    MCAPI bool matches(class Block const &) const;
    /**
     * @hash   -395899877
     * @symbol ??4BlockDescriptor@@QEAAXAEBV0@@Z
     */
    MCAPI void operator=(class BlockDescriptor const &);
    /**
     * @hash   -1030535125
     * @symbol ??4BlockDescriptor@@QEAAX$$QEAV0@@Z
     */
    MCAPI void operator=(class BlockDescriptor &&);
    /**
     * @hash   1076122826
     * @symbol ?toCompoundTag@BlockDescriptor@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> toCompoundTag() const;
    /**
     * @hash   1687295480
     * @symbol ??1BlockDescriptor@@QEAA@XZ
     */
    MCAPI ~BlockDescriptor();
    /**
     * @hash   670923741
     * @symbol ?JSON_NAME_FIELD@BlockDescriptor@@2QBDB
     */
    MCAPI static char const JSON_NAME_FIELD[];
    /**
     * @hash   -556938157
     * @symbol ?JSON_STATES_FIELD@BlockDescriptor@@2QBDB
     */
    MCAPI static char const JSON_STATES_FIELD[];
    /**
     * @hash   -1816641679
     * @symbol ?JSON_TAGS_FIELD@BlockDescriptor@@2QBDB
     */
    MCAPI static char const JSON_TAGS_FIELD[];
    /**
     * @hash   -249490293
     * @symbol ?anyMatch@BlockDescriptor@@SA_NAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@AEBV1@@Z
     */
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const &, class BlockDescriptor const &);
    /**
     * @hash   -245984694
     * @symbol ?anyMatch@BlockDescriptor@@SA_NAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@AEBVBlock@@@Z
     */
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const &, class Block const &);
    /**
     * @hash   2063715615
     * @symbol ?bindType@BlockDescriptor@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -1540298980
     * @symbol ?fromCompoundTag@BlockDescriptor@@SA?AV1@AEBVCompoundTag@@@Z
     */
    MCAPI static class BlockDescriptor fromCompoundTag(class CompoundTag const &);
    /**
     * @hash   679611031
     * @symbol ?fromTagExpression@BlockDescriptor@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MolangVersion@@@Z
     */
    MCAPI static class BlockDescriptor fromTagExpression(std::string const &, enum MolangVersion);

//private:
    /**
     * @hash   -2130112158
     * @symbol ?_anyTagsMatch@BlockDescriptor@@AEBA_NAEBVBlock@@@Z
     */
    MCAPI bool _anyTagsMatch(class Block const &) const;
    /**
     * @hash   -481540900
     * @symbol ?_resolveImpl@BlockDescriptor@@AEBAXXZ
     */
    MCAPI void _resolveImpl() const;

private:

};