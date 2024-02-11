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

struct BlockTransformationDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockTransformationDescription& operator=(BlockTransformationDescription const&);
    BlockTransformationDescription(BlockTransformationDescription const&);
    BlockTransformationDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockTransformationDescription@@UEAA@XZ
    virtual ~BlockTransformationDescription() = default;

    // vIndex: 1, symbol:
    // ?getName@BlockTransformationDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol: ?initializeComponent@BlockTransformationDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // vIndex: 5, symbol:
    // ?initializeComponentFromCode@BlockTransformationDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponentFromCode(class BlockComponentStorage&) const;

    // vIndex: 7, symbol: ?isNetworkComponent@BlockTransformationDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 8, symbol:
    // ?buildNetworkTag@BlockTransformationDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 9, symbol:
    // ?initializeFromNetwork@BlockTransformationDescription@@UEAAXAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // symbol: ?bindType@BlockTransformationDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?registerVersionUpgrades@BlockTransformationDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);

    // symbol: ?NameID@BlockTransformationDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
