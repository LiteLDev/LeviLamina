/**
 * @file  BlockSelectionBoxDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockSelectionBoxDescription.
 *
 */
struct BlockSelectionBoxDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSELECTIONBOXDESCRIPTION
public:
    struct BlockSelectionBoxDescription& operator=(struct BlockSelectionBoxDescription const &) = delete;
    BlockSelectionBoxDescription(struct BlockSelectionBoxDescription const &) = delete;
    BlockSelectionBoxDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockSelectionBoxDescription();
    /**
     * @hash   777103913
     * @vftbl  1
     * @symbol  ?getName\@BlockSelectionBoxDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   1108313355
     * @vftbl  2
     * @symbol  ?initializeComponent\@BlockSelectionBoxDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1667764591
     * @vftbl  4
     * @symbol  ?isNetworkComponent\@BlockSelectionBoxDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   -1639915309
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@BlockSelectionBoxDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   462251663
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@BlockSelectionBoxDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1159646687
     * @symbol  ?NameID\@BlockSelectionBoxDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -1037734317
     * @symbol  ?bindType\@BlockSelectionBoxDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1014295406
     * @symbol  ?registerVersionUpgrades\@BlockSelectionBoxDescription\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};