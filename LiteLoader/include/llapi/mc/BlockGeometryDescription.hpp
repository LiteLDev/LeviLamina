/**
 * @file  MC/BlockGeometryDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockGeometryDescription.
 *
 */
struct BlockGeometryDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKGEOMETRYDESCRIPTION
public:
    struct BlockGeometryDescription& operator=(struct BlockGeometryDescription const &) = delete;
    BlockGeometryDescription(struct BlockGeometryDescription const &) = delete;
    BlockGeometryDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockGeometryDescription();
    /**
     * @hash   830049468
     * @vftbl  1
     * @symbol ?getName@BlockGeometryDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   553255752
     * @vftbl  2
     * @symbol ?initializeComponent@BlockGeometryDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1383040628
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockGeometryDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   -95724794
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockGeometryDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   972726700
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockGeometryDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   873274285
     * @symbol ?NameID@BlockGeometryDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -838761837
     * @symbol ?bindType@BlockGeometryDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1260889496
     * @symbol ?registerVersionUpgrades@BlockGeometryDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};