/**
 * @file  BlockLightEmissionDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockLightEmissionDescription.
 *
 */
struct BlockLightEmissionDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLIGHTEMISSIONDESCRIPTION
public:
    struct BlockLightEmissionDescription& operator=(struct BlockLightEmissionDescription const &) = delete;
    BlockLightEmissionDescription(struct BlockLightEmissionDescription const &) = delete;
    BlockLightEmissionDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockLightEmissionDescription();
    /**
     * @hash   -389364755
     * @vftbl  1
     * @symbol  ?getName\@BlockLightEmissionDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -1866702409
     * @vftbl  2
     * @symbol  ?initializeComponent\@BlockLightEmissionDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   424929205
     * @vftbl  4
     * @symbol  ?isNetworkComponent\@BlockLightEmissionDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   -1770078857
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@BlockLightEmissionDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   793861851
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@BlockLightEmissionDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -1022772435
     * @symbol  ?NameID\@BlockLightEmissionDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -550381745
     * @symbol  ?bindType\@BlockLightEmissionDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   555869888
     * @symbol  ?registerVersionUpgrades\@BlockLightEmissionDescription\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};