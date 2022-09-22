/**
 * @file  BlockDestructibleByMiningDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockDestructibleByMiningDescription.
 *
 */
struct BlockDestructibleByMiningDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESTRUCTIBLEBYMININGDESCRIPTION
public:
    struct BlockDestructibleByMiningDescription& operator=(struct BlockDestructibleByMiningDescription const &) = delete;
    BlockDestructibleByMiningDescription(struct BlockDestructibleByMiningDescription const &) = delete;
    BlockDestructibleByMiningDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockDestructibleByMiningDescription();
    /**
     * @hash   101063177
     * @vftbl  1
     * @symbol ?getName@BlockDestructibleByMiningDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   77042619
     * @vftbl  2
     * @symbol ?initializeComponent@BlockDestructibleByMiningDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -2046776975
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockDestructibleByMiningDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   215180563
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockDestructibleByMiningDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1294015007
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockDestructibleByMiningDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -1266780361
     * @symbol ?NameID@BlockDestructibleByMiningDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -343261917
     * @symbol ?bindType@BlockDestructibleByMiningDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1644890142
     * @symbol ?registerVersionUpgrades@BlockDestructibleByMiningDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};