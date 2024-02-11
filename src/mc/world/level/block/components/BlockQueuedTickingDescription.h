#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockQueuedTickingDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockQueuedTickingDescription& operator=(BlockQueuedTickingDescription const&);
    BlockQueuedTickingDescription(BlockQueuedTickingDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockQueuedTickingDescription@@UEAA@XZ
    virtual ~BlockQueuedTickingDescription() = default;

    // vIndex: 1, symbol:
    // ?getName@BlockQueuedTickingDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol: ?initializeComponent@BlockQueuedTickingDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // symbol: ??0BlockQueuedTickingDescription@@QEAA@XZ
    MCAPI BlockQueuedTickingDescription();

    // symbol: ?bindType@BlockQueuedTickingDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?registerVersionUpgrades@BlockQueuedTickingDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);

    // symbol: ?NameID@BlockQueuedTickingDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
