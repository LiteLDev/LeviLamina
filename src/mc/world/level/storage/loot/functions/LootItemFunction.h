#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemFunction {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMFUNCTION
public:
    LootItemFunction& operator=(LootItemFunction const&) = delete;
    LootItemFunction(LootItemFunction const&)            = delete;
    LootItemFunction()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?apply\@RandomDyeFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&) = 0;
    /**
     * @vftbl 2
     * @symbol ?apply\@LootItemFunction\@\@UEAAHAEAVItemStack\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual int apply(class ItemStack&, class Random&, struct Trade const&, class LootTableContext&);
    /**
     * @vftbl 3
     * @symbol ?apply\@RandomDyeFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&) = 0;
    /**
     * @vftbl 4
     * @symbol
     * ?apply\@LootItemFunction\@\@UEAAHAEAVItemInstance\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual int apply(class ItemInstance&, class Random&, struct Trade const&, class LootTableContext&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTITEMFUNCTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LootItemFunction();
#endif
    /**
     * @symbol
     * ?deserialize\@LootItemFunction\@\@SA?AV?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value);

    // private:

private:
    /**
     * @symbol
     * ?mLootingFunctions\@LootItemFunction\@\@0V?$unordered_map\@VHashedString\@\@V?$function\@$$A6A?AV?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@AEAVValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@2\@\@Z\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$function\@$$A6A?AV?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@AEAVValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@2\@\@Z\@std\@\@\@std\@\@\@3\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<
        class HashedString,
        class std::function<std::unique_ptr<
            class LootItemFunction>(class Json::Value&, std::vector<std::unique_ptr<class LootItemCondition>>&)>,
        struct std::hash<class HashedString>,
        struct std::equal_to<class HashedString>,
        class std::allocator<struct std::pair<
            class HashedString const,
            class std::function<std::unique_ptr<
                class
                LootItemFunction>(class Json::Value&, std::vector<std::unique_ptr<class LootItemCondition>>&)>>>> const
        mLootingFunctions;
};
