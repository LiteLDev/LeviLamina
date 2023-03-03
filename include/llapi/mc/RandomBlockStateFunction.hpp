/**
 * @file  RandomBlockStateFunction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomBlockStateFunction.
 *
 */
class RandomBlockStateFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMBLOCKSTATEFUNCTION
public:
    class RandomBlockStateFunction& operator=(class RandomBlockStateFunction const &) = delete;
    RandomBlockStateFunction(class RandomBlockStateFunction const &) = delete;
    RandomBlockStateFunction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RandomBlockStateFunction();
    /**
     * @vftbl  1
     * @symbol  ?apply\@RandomBlockStateFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @vftbl  3
     * @symbol  ?apply\@RandomBlockStateFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @symbol  ?deserialize\@RandomBlockStateFunction\@\@SA?AV?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@VValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

//private:
    /**
     * @symbol  ?_remapComplexAliasBlock\@RandomBlockStateFunction\@\@AEAA?AW4RemapComplexAliasBlockResult\@1\@HAEAPEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class RandomBlockStateFunction::RemapComplexAliasBlockResult _remapComplexAliasBlock(int, class Block const *&, std::string const &);
    /**
     * @symbol  ?_tryRemapComplexAliasBlock\@RandomBlockStateFunction\@\@AEAA?AW4RemapComplexAliasBlockResult\@1\@AEAVItemInstance\@\@HAEAPEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class RandomBlockStateFunction::RemapComplexAliasBlockResult _tryRemapComplexAliasBlock(class ItemInstance &, int, class Block const *&, std::string const &);
    /**
     * @symbol  ?_tryRemapComplexAliasBlock\@RandomBlockStateFunction\@\@AEAA?AW4RemapComplexAliasBlockResult\@1\@AEAVItemStack\@\@HAEAPEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class RandomBlockStateFunction::RemapComplexAliasBlockResult _tryRemapComplexAliasBlock(class ItemStack &, int, class Block const *&, std::string const &);

private:

};