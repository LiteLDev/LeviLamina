/**
 * @file  MC/ItemRegistryRef.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemRegistryRef.
 *
 */
class ItemRegistryRef {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRYREF
public:
    class ItemRegistryRef& operator=(class ItemRegistryRef const &) = delete;
    ItemRegistryRef(class ItemRegistryRef const &) = delete;
    ItemRegistryRef() = delete;
#endif

public:
    /**
     * @symbol ?lookupByName@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEAH0V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByName(int &, int &, class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol ?lookupByName@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEAHV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByName(int &, class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @hash   901948084
     * @symbol ?lookupByName@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByName(class HashedString const &) const;
    /**
     * @hash   985968228
     * @symbol ?lookupByNameNoAlias@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(class HashedString const &) const;
    /**
     * @symbol ?lookupByNameNoAlias@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @hash   568060880
     * @symbol ?lookupByNameNoParsing@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEAHAEBVHashedString@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoParsing(int &, class HashedString const &) const;
    /**
     * @hash   2121881393
     * @symbol ?lookupByTag@ItemRegistryRef@@QEBA?AV?$unordered_set@PEBVItem@@U?$hash@PEBVItem@@@std@@U?$equal_to@PEBVItem@@@3@V?$allocator@PEBVItem@@@3@@std@@AEBUItemTag@@@Z
     */
    MCAPI class std::unordered_set<class Item const *, struct std::hash<class Item const *>, struct std::equal_to<class Item const *>, class std::allocator<class Item const *>> lookupByTag(struct ItemTag const &) const;
    /**
     * @symbol ?lookupByVanillaName@ItemRegistryRef@@QEBA?AV?$WeakPtr@VItem@@@@AEBVHashedString@@@Z
     */
    MCAPI class WeakPtr<class Item> lookupByVanillaName(class HashedString const &) const;
    /**
     * @hash   -927483376
     * @symbol ?unregisterItem@ItemRegistryRef@@QEBAXAEBVHashedString@@@Z
     */
    MCAPI void unregisterItem(class HashedString const &) const;
    /**
     * @hash   -1063650705
     * @symbol ??1ItemRegistryRef@@QEAA@XZ
     */
    MCAPI ~ItemRegistryRef();

//private:
    /**
     * @hash   -654036953
     * @symbol ?_lockRegistry@ItemRegistryRef@@AEBA?AV?$shared_ptr@VItemRegistry@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class ItemRegistry> _lockRegistry() const;

private:

};