/**
 * @file  MC/BlockCollisionBoxDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockCollisionBoxDescription.
 *
 */
struct BlockCollisionBoxDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOLLISIONBOXDESCRIPTION
public:
    struct BlockCollisionBoxDescription& operator=(struct BlockCollisionBoxDescription const &) = delete;
    BlockCollisionBoxDescription(struct BlockCollisionBoxDescription const &) = delete;
    BlockCollisionBoxDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockCollisionBoxDescription();
    /**
     * @hash   1343451331
     * @vftbl  1
     * @symbol ?getName@BlockCollisionBoxDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -1882529023
     * @vftbl  2
     * @symbol ?initializeComponent@BlockCollisionBoxDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   127933915
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockCollisionBoxDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   -1747897363
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockCollisionBoxDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   -109653451
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockCollisionBoxDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -1012917733
     * @symbol ?NameID@BlockCollisionBoxDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -1506497501
     * @symbol ?bindType@BlockCollisionBoxDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1787251978
     * @symbol ?registerVersionUpgrades@BlockCollisionBoxDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};