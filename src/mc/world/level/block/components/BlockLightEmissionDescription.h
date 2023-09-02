#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct BlockLightEmissionDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockLightEmissionDescription& operator=(BlockLightEmissionDescription const&) = delete;
    BlockLightEmissionDescription(BlockLightEmissionDescription const&)            = delete;
    BlockLightEmissionDescription()                                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?getName@BlockLightEmissionDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol: ?initializeComponent@BlockLightEmissionDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // vIndex: 6, symbol: ?isNetworkComponent@BlockLightEmissionDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 7, symbol:
    // ?buildNetworkTag@BlockLightEmissionDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 8, symbol: ?initializeFromNetwork@BlockLightEmissionDescription@@UEAAXAEBVCompoundTag@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&);

    // symbol: ?bindType@BlockLightEmissionDescription@@SAXXZ
    MCAPI static void bindType();

    // symbol: ?NameID@BlockLightEmissionDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
