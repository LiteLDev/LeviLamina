#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockMaterialInstancesDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockMaterialInstancesDescription& operator=(BlockMaterialInstancesDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockMaterialInstancesDescription@@UEAA@XZ
    virtual ~BlockMaterialInstancesDescription();

    // vIndex: 1, symbol:
    // ?getName@BlockMaterialInstancesDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol: ?initializeComponent@BlockMaterialInstancesDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // vIndex: 5, symbol:
    // ?initializeComponentFromCode@BlockMaterialInstancesDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponentFromCode(class BlockComponentStorage&) const;

    // vIndex: 7, symbol: ?isNetworkComponent@BlockMaterialInstancesDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 8, symbol:
    // ?buildNetworkTag@BlockMaterialInstancesDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 9, symbol:
    // ?initializeFromNetwork@BlockMaterialInstancesDescription@@UEAAXAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // symbol: ??0BlockMaterialInstancesDescription@@QEAA@XZ
    MCAPI BlockMaterialInstancesDescription();

    // symbol: ??0BlockMaterialInstancesDescription@@QEAA@$$QEAU0@@Z
    MCAPI BlockMaterialInstancesDescription(struct BlockMaterialInstancesDescription&&);

    // symbol: ??0BlockMaterialInstancesDescription@@QEAA@AEBU0@@Z
    MCAPI BlockMaterialInstancesDescription(struct BlockMaterialInstancesDescription const&);

    // symbol:
    // ??0BlockMaterialInstancesDescription@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockRenderLayer@@_N2@Z
    MCAPI BlockMaterialInstancesDescription(std::string const& textureName, ::BlockRenderLayer, bool, bool faceDimming);

    // symbol: ??4BlockMaterialInstancesDescription@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct BlockMaterialInstancesDescription& operator=(struct BlockMaterialInstancesDescription&&);

    // symbol: ?bindType@BlockMaterialInstancesDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol:
    // ?NameID@BlockMaterialInstancesDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
