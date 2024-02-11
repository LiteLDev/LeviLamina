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

struct BlockLightEmissionDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockLightEmissionDescription& operator=(BlockLightEmissionDescription const&);
    BlockLightEmissionDescription(BlockLightEmissionDescription const&);
    BlockLightEmissionDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockLightEmissionDescription@@UEAA@XZ
    virtual ~BlockLightEmissionDescription() = default;

    // vIndex: 1, symbol:
    // ?getName@BlockLightEmissionDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol: ?initializeComponent@BlockLightEmissionDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // vIndex: 7, symbol: ?isNetworkComponent@BlockLightEmissionDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 8, symbol:
    // ?buildNetworkTag@BlockLightEmissionDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 9, symbol:
    // ?initializeFromNetwork@BlockLightEmissionDescription@@UEAAXAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // symbol: ?bindType@BlockLightEmissionDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?registerVersionUpgrades@BlockLightEmissionDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);

    // symbol: ?NameID@BlockLightEmissionDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
