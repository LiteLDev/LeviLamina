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

struct BlockFlammableDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockFlammableDescription& operator=(BlockFlammableDescription const&);
    BlockFlammableDescription(BlockFlammableDescription const&);
    BlockFlammableDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockFlammableDescription@@UEAA@XZ
    virtual ~BlockFlammableDescription() = default;

    // vIndex: 1, symbol:
    // ?getName@BlockFlammableDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol: ?initializeComponent@BlockFlammableDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // symbol: ?bindType@BlockFlammableDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?registerVersionUpgrades@BlockFlammableDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);

    // symbol: ?CATCH_CHANCE_DEFAULT@BlockFlammableDescription@@2HB
    MCAPI static int const CATCH_CHANCE_DEFAULT;

    // symbol: ?DESTROY_CHANCE_DEFAULT@BlockFlammableDescription@@2HB
    MCAPI static int const DESTROY_CHANCE_DEFAULT;

    // symbol: ?NameID@BlockFlammableDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
