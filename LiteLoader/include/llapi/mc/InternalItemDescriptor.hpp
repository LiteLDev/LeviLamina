/**
 * @file  InternalItemDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemDescriptor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InternalItemDescriptor.
 *
 */
class InternalItemDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERNALITEMDESCRIPTOR
public:
    class InternalItemDescriptor& operator=(class InternalItemDescriptor const &) = delete;
    InternalItemDescriptor(class InternalItemDescriptor const &) = delete;
    InternalItemDescriptor() = delete;
#endif

public:
    /**
     * @hash   -1674247365
     * @vftbl  0
     * @symbol ?clone@InternalItemDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   -483645689
     * @vftbl  2
     * @symbol ?sameItem@InternalItemDescriptor@@UEBA_NAEBUItemEntry@ItemDescriptor@@_N@Z
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const &, bool) const;
    /**
     * @hash   1294938073
     * @vftbl  3
     * @symbol ?getFullName@InternalItemDescriptor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getFullName() const;
    /**
     * @hash   825468415
     * @vftbl  4
     * @symbol ?getItem@InternalItemDescriptor@@UEBA?AUItemEntry@ItemDescriptor@@XZ
     */
    virtual struct ItemDescriptor::ItemEntry getItem() const;
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   2094393105
     * @vftbl  6
     * @symbol ?toMap@InternalItemDescriptor@@UEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
     */
    virtual class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap() const;
    /**
     * @hash   1583402469
     * @vftbl  7
     * @symbol ?save@InternalItemDescriptor@@UEBA?AV?$optional@VCompoundTag@@@std@@XZ
     */
    virtual class std::optional<class CompoundTag> save() const;
    /**
     * @vftbl  8
     * @symbol ?serialize@InternalItemDescriptor@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void serialize(class BinaryStream &) const;
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   -327747312
     * @vftbl  10
     * @symbol ?getType@InternalItemDescriptor@@UEBA?AW4InternalType@ItemDescriptor@@XZ
     */
    virtual enum class ItemDescriptor::InternalType getType() const;
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol ?getHash@InternalItemDescriptor@@UEBA_KXZ
     */
    virtual unsigned __int64 getHash() const;

};