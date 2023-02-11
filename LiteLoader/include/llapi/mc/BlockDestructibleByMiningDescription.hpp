/**
 * @file  BlockDestructibleByMiningDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockDestructibleByMiningDescription();
    /**
     * @hash   743872233
     * @vftbl  1
     * @symbol  ?getName\@BlockDestructibleByMiningDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   719851675
     * @vftbl  2
     * @symbol  ?initializeComponent\@BlockDestructibleByMiningDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1946879103
     * @vftbl  4
     * @symbol  ?isNetworkComponent\@BlockDestructibleByMiningDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   858004995
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@BlockDestructibleByMiningDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1937023951
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@BlockDestructibleByMiningDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   740671759
     * @symbol  ?NameID\@BlockDestructibleByMiningDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   299070483
     * @symbol  ?bindType\@BlockDestructibleByMiningDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -2007068210
     * @symbol  ?registerVersionUpgrades\@BlockDestructibleByMiningDescription\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};