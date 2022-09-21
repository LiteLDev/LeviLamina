/**
 * @file  MC/BlockCraftingTableDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockCraftingTableDescription.
 *
 */
struct BlockCraftingTableDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCRAFTINGTABLEDESCRIPTION
public:
    struct BlockCraftingTableDescription& operator=(struct BlockCraftingTableDescription const &) = delete;
    BlockCraftingTableDescription(struct BlockCraftingTableDescription const &) = delete;
    BlockCraftingTableDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockCraftingTableDescription();
    /**
     * @hash   975262860
     * @vftbl  1
     * @symbol ?getName@BlockCraftingTableDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   134725528
     * @vftbl  2
     * @symbol ?initializeComponent@BlockCraftingTableDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1305530316
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockCraftingTableDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   -822609642
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockCraftingTableDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   781791244
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockCraftingTableDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   924275259
     * @symbol ?NameID@BlockCraftingTableDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   1932368319
     * @symbol ?bindType@BlockCraftingTableDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   707659202
     * @symbol ?registerVersionUpgrades@BlockCraftingTableDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};