/**
 * @file  DeferredDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemDescriptor.hpp"
#include "Json.hpp"
#include "ItemTagDescriptor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DeferredDescriptor.
 *
 */
class DeferredDescriptor : public ItemTagDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDDESCRIPTOR
public:
    class DeferredDescriptor& operator=(class DeferredDescriptor const &) = delete;
    DeferredDescriptor(class DeferredDescriptor const &) = delete;
    DeferredDescriptor() = delete;
#endif

public:
    /**
     * @hash   -1556039588
     * @vftbl  0
     * @symbol ?clone@DeferredDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /**
     * @hash   1725484296
     * @vftbl  2
     * @symbol ?sameItem@DeferredDescriptor@@UEBA_NAEBUItemEntry@ItemDescriptor@@_N@Z
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const &, bool) const;
    /**
     * @hash   -1650684214
     * @vftbl  3
     * @symbol ?getFullName@DeferredDescriptor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getFullName() const;
    /**
     * @hash   -1763282974
     * @vftbl  6
     * @symbol ?toMap@DeferredDescriptor@@UEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
     */
    virtual class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap() const;
    /**
     * @hash   -1268735418
     * @vftbl  7
     * @symbol ?save@DeferredDescriptor@@UEBA?AV?$optional@VCompoundTag@@@std@@XZ
     */
    virtual class std::optional<class CompoundTag> save() const;
    /**
     * @vftbl  9
     * @symbol ?serialize@DeferredDescriptor@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void serialize(class BinaryStream &) const;
    /**
     * @hash   -1114845567
     * @vftbl  10
     * @symbol ?getType@DeferredDescriptor@@UEBA?AW4InternalType@ItemDescriptor@@XZ
     */
    virtual enum ItemDescriptor::InternalType getType() const;
    /**
     * @hash   -1712213597
     * @vftbl  11
     * @symbol ?shouldResolve@DeferredDescriptor@@UEBA_NXZ
     */
    virtual bool shouldResolve() const;
    /**
     * @vftbl  12
     * @symbol ?getHash@DeferredDescriptor@@UEBA_KXZ
     */
    virtual unsigned __int64 getHash() const;
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @hash   -1420433781
     * @vftbl  14
     * @symbol ?resolve@DeferredDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;

//private:
    /**
     * @hash   1963471029
     * @symbol ?_initFromBlockLegacy@DeferredDescriptor@@AEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@AEBVBlockLegacy@@$$QEAV?$WeakPtr@VItem@@@@@Z
     */
    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor> _initFromBlockLegacy(class BlockLegacy const &, class WeakPtr<class Item> &&) const;
    /**
     * @hash   -1700663717
     * @symbol ?_initFromItem@DeferredDescriptor@@AEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@$$QEAV?$WeakPtr@VItem@@@@F@Z
     */
    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor> _initFromItem(class WeakPtr<class Item> &&, short) const;

private:

};