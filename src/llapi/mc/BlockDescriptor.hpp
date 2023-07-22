/**
 * @file  BlockDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0BlockDescriptor\@\@QEAA\@XZ
     */
    MCAPI BlockDescriptor();
    /**
     * @symbol  ??0BlockDescriptor\@\@QEAA\@AEBVHashedString\@\@\@Z
     */
    MCAPI BlockDescriptor(class HashedString const &);
    /**
     * @symbol  ??0BlockDescriptor\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEBV?$vector\@VBlockState\@BlockDescriptor\@\@V?$allocator\@VBlockState\@BlockDescriptor\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI BlockDescriptor(std::string const &, std::vector<class BlockDescriptor::BlockState> const &&);
    /**
     * @symbol  ??0BlockDescriptor\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BlockDescriptor(class BlockDescriptor const &);
    /**
     * @symbol  ??0BlockDescriptor\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BlockDescriptor(class BlockDescriptor &&);
    /**
     * @symbol  ?getBlockOrUnknownBlock\@BlockDescriptor\@\@QEBAAEBVBlock\@\@XZ
     */
    MCAPI class Block const & getBlockOrUnknownBlock() const;
    /**
     * @symbol  ?getCompareType\@BlockDescriptor\@\@QEBAAEBW4CompareType\@1\@XZ
     */
    MCAPI enum class BlockDescriptor::CompareType const & getCompareType() const;
    /**
     * @symbol  ?getFullName\@BlockDescriptor\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getFullName() const;
    /**
     * @symbol  ?getStates\@BlockDescriptor\@\@QEBAAEBV?$vector\@VBlockState\@BlockDescriptor\@\@V?$allocator\@VBlockState\@BlockDescriptor\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BlockDescriptor::BlockState> const & getStates() const;
    /**
     * @symbol  ?getTagExpression\@BlockDescriptor\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getTagExpression() const;
    /**
     * @symbol  ?isValid\@BlockDescriptor\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol  ?matches\@BlockDescriptor\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matches(class BlockDescriptor const &) const;
    /**
     * @symbol  ?matches\@BlockDescriptor\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool matches(class Block const &) const;
    /**
     * @symbol  ??4BlockDescriptor\@\@QEAAXAEBV0\@\@Z
     */
    MCAPI void operator=(class BlockDescriptor const &);
    /**
     * @symbol  ??4BlockDescriptor\@\@QEAAX$$QEAV0\@\@Z
     */
    MCAPI void operator=(class BlockDescriptor &&);
    /**
     * @symbol  ??8BlockDescriptor\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class BlockDescriptor const &) const;
    /**
     * @symbol  ?toCompoundTag\@BlockDescriptor\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> toCompoundTag() const;
    /**
     * @symbol  ?tryGetBlock\@BlockDescriptor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const * tryGetBlock() const;
    /**
     * @symbol  ??1BlockDescriptor\@\@QEAA\@XZ
     */
    MCAPI ~BlockDescriptor();
    /**
     * @symbol  ?JSON_NAME_FIELD\@BlockDescriptor\@\@2QBDB
     */
    MCAPI static char const JSON_NAME_FIELD[];
    /**
     * @symbol  ?JSON_STATES_FIELD\@BlockDescriptor\@\@2QBDB
     */
    MCAPI static char const JSON_STATES_FIELD[];
    /**
     * @symbol  ?JSON_TAGS_FIELD\@BlockDescriptor\@\@2QBDB
     */
    MCAPI static char const JSON_TAGS_FIELD[];
    /**
     * @symbol  ?anyMatch\@BlockDescriptor\@\@SA_NAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const &, class BlockDescriptor const &);
    /**
     * @symbol  ?anyMatch\@BlockDescriptor\@\@SA_NAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@AEBVBlock\@\@\@Z
     */
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const &, class Block const &);
    /**
     * @symbol  ?bindType\@BlockDescriptor\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol  ?fromCompoundTag\@BlockDescriptor\@\@SA?AV1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class BlockDescriptor fromCompoundTag(class CompoundTag const &);
    /**
     * @symbol  ?fromTagExpression\@BlockDescriptor\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI static class BlockDescriptor fromTagExpression(std::string const &, enum class MolangVersion);

//private:
    /**
     * @symbol  ?_anyTagsMatch\@BlockDescriptor\@\@AEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _anyTagsMatch(class Block const &) const;
    /**
     * @symbol  ?_resolveImpl\@BlockDescriptor\@\@AEAAXXZ
     */
    MCAPI void _resolveImpl();
    /**
     * @symbol  ?_statesMatch\@BlockDescriptor\@\@AEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _statesMatch(class Block const &) const;

private:

};