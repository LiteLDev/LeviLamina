#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RandomBlockStateFunction : public ::LootItemFunction {
public:
    // RandomBlockStateFunction inner types define
    enum class RemapComplexAliasBlockResult {};

public:
    // prevent constructor by default
    RandomBlockStateFunction& operator=(RandomBlockStateFunction const&) = delete;
    RandomBlockStateFunction(RandomBlockStateFunction const&)            = delete;
    RandomBlockStateFunction()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?apply\@RandomBlockStateFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /**
     * @vftbl 3
     * @symbol ?apply\@RandomBlockStateFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    /**
     * @symbol
     * ?deserialize\@RandomBlockStateFunction\@\@SA?AV?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@VValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>>&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_remapComplexAliasBlock\@RandomBlockStateFunction\@\@AEAA?AW4RemapComplexAliasBlockResult\@1\@HAEAPEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class RandomBlockStateFunction::RemapComplexAliasBlockResult
    _remapComplexAliasBlock(int, class Block const*&, std::string const&);
    /**
     * @symbol
     * ?_tryRemapComplexAliasBlock\@RandomBlockStateFunction\@\@AEAA?AW4RemapComplexAliasBlockResult\@1\@AEAVItemStack\@\@HAEAPEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class RandomBlockStateFunction::RemapComplexAliasBlockResult
    _tryRemapComplexAliasBlock(class ItemStack&, int, class Block const*&, std::string const&);
    /**
     * @symbol
     * ?_tryRemapComplexAliasBlock\@RandomBlockStateFunction\@\@AEAA?AW4RemapComplexAliasBlockResult\@1\@AEAVItemInstance\@\@HAEAPEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class RandomBlockStateFunction::RemapComplexAliasBlockResult
    _tryRemapComplexAliasBlock(class ItemInstance&, int, class Block const*&, std::string const&);
    // NOLINTEND
};
