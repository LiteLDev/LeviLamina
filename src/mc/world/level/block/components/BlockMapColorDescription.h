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

struct BlockMapColorDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockMapColorDescription& operator=(BlockMapColorDescription const&);
    BlockMapColorDescription(BlockMapColorDescription const&);
    BlockMapColorDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockMapColorDescription@@UEAA@XZ
    virtual ~BlockMapColorDescription() = default;

    // vIndex: 1, symbol:
    // ?getName@BlockMapColorDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol: ?initializeComponent@BlockMapColorDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // symbol: ?bindType@BlockMapColorDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?registerVersionUpgrades@BlockMapColorDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);

    // symbol: ?NameID@BlockMapColorDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
