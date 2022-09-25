/**
 * @file  BlockQueuedTickingDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockQueuedTickingDescription.
 *
 */
struct BlockQueuedTickingDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKQUEUEDTICKINGDESCRIPTION
public:
    struct BlockQueuedTickingDescription& operator=(struct BlockQueuedTickingDescription const &) = delete;
    BlockQueuedTickingDescription(struct BlockQueuedTickingDescription const &) = delete;
    BlockQueuedTickingDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockQueuedTickingDescription();
    /**
     * @hash   -377656734
     * @vftbl  1
     * @symbol ?getName@BlockQueuedTickingDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -438877534
     * @vftbl  2
     * @symbol ?initializeComponent@BlockQueuedTickingDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @hash   1001747215
     * @symbol ?NameID@BlockQueuedTickingDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -260920449
     * @symbol ?bindType@BlockQueuedTickingDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -749658682
     * @symbol ?registerVersionUpgrades@BlockQueuedTickingDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};