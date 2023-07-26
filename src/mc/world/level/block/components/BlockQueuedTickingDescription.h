#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockQueuedTickingDescription {

public:
    // prevent constructor by default
    BlockQueuedTickingDescription& operator=(BlockQueuedTickingDescription const&) = delete;
    BlockQueuedTickingDescription(BlockQueuedTickingDescription const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@BlockQueuedTickingDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockQueuedTickingDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext&) const; // NOLINT
    /**
     * @symbol ??0BlockQueuedTickingDescription\@\@QEAA\@XZ
     */
    MCAPI BlockQueuedTickingDescription(); // NOLINT
    /**
     * @symbol ?bindType\@BlockQueuedTickingDescription\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?registerVersionUpgrades\@BlockQueuedTickingDescription\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&); // NOLINT
    /**
     * @symbol
     * ?NameID\@BlockQueuedTickingDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID; // NOLINT
};
