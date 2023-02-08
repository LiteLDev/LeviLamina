/**
 * @file  BlockPartVisibilityDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockPartVisibilityDescription.
 *
 */
struct BlockPartVisibilityDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPARTVISIBILITYDESCRIPTION
public:
    struct BlockPartVisibilityDescription& operator=(struct BlockPartVisibilityDescription const &) = delete;
    BlockPartVisibilityDescription(struct BlockPartVisibilityDescription const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockPartVisibilityDescription();
    /**
     * @hash   -621035105
     * @vftbl  1
     * @symbol  ?getName\@BlockPartVisibilityDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   1984368485
     * @vftbl  2
     * @symbol  ?initializeComponent\@BlockPartVisibilityDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -2041982633
     * @vftbl  4
     * @symbol  ?isNetworkComponent\@BlockPartVisibilityDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   -1898112711
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@BlockPartVisibilityDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1678278345
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@BlockPartVisibilityDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   427425670
     * @symbol  ??0BlockPartVisibilityDescription\@\@QEAA\@XZ
     */
    MCAPI BlockPartVisibilityDescription();
    /**
     * @hash   -182099621
     * @symbol  ?NameID\@BlockPartVisibilityDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -1824204493
     * @symbol  ?bindType\@BlockPartVisibilityDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   2097591954
     * @symbol  ?registerVersionUpgrades\@BlockPartVisibilityDescription\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};