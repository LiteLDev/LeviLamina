/**
 * @file  BlockFrictionDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockFrictionDescription.
 *
 */
struct BlockFrictionDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKFRICTIONDESCRIPTION
public:
    struct BlockFrictionDescription& operator=(struct BlockFrictionDescription const &) = delete;
    BlockFrictionDescription(struct BlockFrictionDescription const &) = delete;
    BlockFrictionDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockFrictionDescription();
    /**
     * @hash   -1663572940
     * @vftbl  1
     * @symbol ?getName@BlockFrictionDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -1798632272
     * @vftbl  2
     * @symbol ?initializeComponent@BlockFrictionDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -668285956
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockFrictionDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   -789819490
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockFrictionDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1543866932
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockFrictionDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1404750461
     * @symbol ?NameID@BlockFrictionDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   1289678467
     * @symbol ?bindType@BlockFrictionDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -1433553368
     * @symbol ?registerVersionUpgrades@BlockFrictionDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};