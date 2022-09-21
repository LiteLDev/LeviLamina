/**
 * @file  MC/ItemTagDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemDescriptor.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemTagDescriptor.
 *
 */
class ItemTagDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMTAGDESCRIPTOR
public:
    class ItemTagDescriptor& operator=(class ItemTagDescriptor const &) = delete;
    ItemTagDescriptor(class ItemTagDescriptor const &) = delete;
    ItemTagDescriptor() = delete;
#endif

public:
    /**
     * @hash   -315764412
     * @vftbl  0
     * @symbol ?clone@ItemTagDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /**
     * @hash   1222430756
     * @vftbl  1
     * @symbol ?sameItems@ItemTagDescriptor@@UEBA_NAEBUBaseDescriptor@ItemDescriptor@@_N@Z
     */
    virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const &, bool) const;
    /**
     * @hash   -1400382848
     * @vftbl  2
     * @symbol ?sameItem@ItemTagDescriptor@@UEBA_NAEBUItemEntry@ItemDescriptor@@_N@Z
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const &, bool) const;
    /**
     * @hash   -192013182
     * @vftbl  3
     * @symbol ?getFullName@MolangDescriptor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getFullName() const;
    /**
     * @hash   1093547976
     * @vftbl  4
     * @symbol ?getItem@ItemTagDescriptor@@UEBA?AUItemEntry@ItemDescriptor@@XZ
     */
    virtual struct ItemDescriptor::ItemEntry getItem() const;
    /**
     * @hash   1581646736
     * @vftbl  5
     * @symbol ?forEachItemUntil@ItemTagDescriptor@@UEBA_NV?$function@$$A6A_NAEBVItem@@F@Z@std@@@Z
     */
    virtual bool forEachItemUntil(class std::function<bool (class Item const &, short)>) const;
    /**
     * @hash   1638205466
     * @vftbl  6
     * @symbol ?toMap@ItemTagDescriptor@@UEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
     */
    virtual class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap() const;
    /**
     * @hash   1808359678
     * @vftbl  7
     * @symbol ?save@ItemTagDescriptor@@UEBA?AV?$optional@VCompoundTag@@@std@@XZ
     */
    virtual class std::optional<class CompoundTag> save() const;
    /**
     * @hash   -1618516183
     * @vftbl  8
     * @symbol ?serialize@ItemTagDescriptor@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serialize(class Json::Value &) const;
    /**
     * @vftbl  9
     * @symbol ?serialize@ItemTagDescriptor@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void serialize(class BinaryStream &) const;
    /**
     * @hash   1719664697
     * @vftbl  10
     * @symbol ?getType@ItemTagDescriptor@@UEBA?AW4InternalType@ItemDescriptor@@XZ
     */
    virtual enum ItemDescriptor::InternalType getType() const;
    /**
     * @hash   857979195
     * @vftbl  11
     * @symbol ?shouldResolve@DeferredDescriptor@@UEBA_NXZ
     */
    virtual bool shouldResolve() const;
    /**
     * @vftbl  12
     * @symbol ?getHash@ItemTagDescriptor@@UEBA_KXZ
     */
    virtual unsigned __int64 getHash() const;
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @hash   -875764605
     * @vftbl  14
     * @symbol ?resolve@DeferredDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;

};