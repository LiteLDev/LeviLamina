/**
 * @file  MC/BlockDisplayNameDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockDisplayNameDescription.
 *
 */
struct BlockDisplayNameDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDISPLAYNAMEDESCRIPTION
public:
    struct BlockDisplayNameDescription& operator=(struct BlockDisplayNameDescription const &) = delete;
    BlockDisplayNameDescription(struct BlockDisplayNameDescription const &) = delete;
    BlockDisplayNameDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockDisplayNameDescription();
    /**
     * @hash   -58316355
     * @vftbl  1
     * @symbol ?getName@BlockDisplayNameDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   288976039
     * @vftbl  2
     * @symbol ?initializeComponent@BlockDisplayNameDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1711608299
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockDisplayNameDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   1982462743
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockDisplayNameDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   -797091605
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockDisplayNameDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -1557757883
     * @symbol ?NameID@BlockDisplayNameDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -141313777
     * @symbol ?bindType@BlockDisplayNameDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1698370320
     * @symbol ?registerVersionUpgrades@BlockDisplayNameDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};