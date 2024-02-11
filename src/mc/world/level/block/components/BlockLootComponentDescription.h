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

struct BlockLootComponentDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockLootComponentDescription& operator=(BlockLootComponentDescription const&);
    BlockLootComponentDescription(BlockLootComponentDescription const&);
    BlockLootComponentDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockLootComponentDescription@@UEAA@XZ
    virtual ~BlockLootComponentDescription() = default;

    // vIndex: 1, symbol:
    // ?getName@BlockLootComponentDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol: ?initializeComponent@BlockLootComponentDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // symbol: ?bindType@BlockLootComponentDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?registerVersionUpgrades@BlockLootComponentDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);

    // symbol: ?NameID@BlockLootComponentDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
