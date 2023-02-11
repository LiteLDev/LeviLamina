/**
 * @file  BlockLootComponentDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockLootComponentDescription.
 *
 */
struct BlockLootComponentDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLOOTCOMPONENTDESCRIPTION
public:
    struct BlockLootComponentDescription& operator=(struct BlockLootComponentDescription const &) = delete;
    BlockLootComponentDescription(struct BlockLootComponentDescription const &) = delete;
    BlockLootComponentDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockLootComponentDescription();
    /**
     * @hash   107406277
     * @vftbl  1
     * @symbol  ?getName\@BlockLootComponentDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -1635156577
     * @vftbl  2
     * @symbol  ?initializeComponent\@BlockLootComponentDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @hash   -451210091
     * @symbol  ?NameID\@BlockLootComponentDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   935283103
     * @symbol  ?bindType\@BlockLootComponentDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -1408000368
     * @symbol  ?registerVersionUpgrades\@BlockLootComponentDescription\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};