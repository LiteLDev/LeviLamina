/**
 * @file  MC/EmptyMapItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EmptyMapItem.
 *
 */
class EmptyMapItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMPTYMAPITEM
public:
    class EmptyMapItem& operator=(class EmptyMapItem const &) = delete;
    EmptyMapItem(class EmptyMapItem const &) = delete;
    EmptyMapItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EmptyMapItem();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  52
     * @symbol __unk_vfn_52
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   -1935933062
     * @vftbl  60
     * @symbol ?requiresInteract@EmptyMapItem@@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @symbol __unk_vfn_73
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   639225244
     * @vftbl  85
     * @symbol ?use@EmptyMapItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   -597992248
     * @vftbl  96
     * @symbol ?buildDescriptionId@EmptyMapItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   -1382425427
     * @vftbl  118
     * @symbol ?getInteractText@EmptyMapItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @hash   -1028032189
     * @vftbl  136
     * @symbol ?getUpdatePacket@ComplexItem@@UEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVItemStack@@AEAVLevel@@AEAVActor@@@Z
     */
    virtual std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
    /**
     * @hash   1445323333
     * @symbol ??0EmptyMapItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
     */
    MCAPI EmptyMapItem(std::string const &, short);
    /**
     * @hash   1484308258
     * @symbol ?addPlayerMarker@EmptyMapItem@@SAXAEAVItemStack@@@Z
     */
    MCAPI static void addPlayerMarker(class ItemStack &);
    /**
     * @hash   870425904
     * @symbol ?addPlayerMarker@EmptyMapItem@@SAXAEAVItemInstance@@@Z
     */
    MCAPI static void addPlayerMarker(class ItemInstance &);
    /**
     * @hash   817225259
     * @symbol ?isLocatorMap@EmptyMapItem@@SA_NAEBVItemStack@@@Z
     */
    MCAPI static bool isLocatorMap(class ItemStack const &);

};