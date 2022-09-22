/**
 * @file  BlockLightDampeningDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockLightDampeningDescription.
 *
 */
struct BlockLightDampeningDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLIGHTDAMPENINGDESCRIPTION
public:
    struct BlockLightDampeningDescription& operator=(struct BlockLightDampeningDescription const &) = delete;
    BlockLightDampeningDescription(struct BlockLightDampeningDescription const &) = delete;
    BlockLightDampeningDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockLightDampeningDescription();
    /**
     * @hash   -213825299
     * @vftbl  1
     * @symbol ?getName@BlockLightDampeningDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -1481385161
     * @vftbl  2
     * @symbol ?initializeComponent@BlockLightDampeningDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   972869477
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockLightDampeningDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   -1275703817
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockLightDampeningDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1847040411
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockLightDampeningDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1574419087
     * @symbol ?NameID@BlockLightDampeningDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -1791166605
     * @symbol ?bindType@BlockLightDampeningDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -1629373546
     * @symbol ?registerVersionUpgrades@BlockLightDampeningDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};