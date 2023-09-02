#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct BlockPlacementFilterDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockPlacementFilterDescription& operator=(BlockPlacementFilterDescription const&) = delete;
    BlockPlacementFilterDescription(BlockPlacementFilterDescription const&)            = delete;
    BlockPlacementFilterDescription()                                                  = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?getName@BlockPlacementFilterDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?initializeComponent@BlockPlacementFilterDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponent(class EntityContext&) const;

    // vIndex: 6, symbol: ?isNetworkComponent@BlockPlacementFilterDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 7, symbol:
    // ?buildNetworkTag@BlockPlacementFilterDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 8, symbol: ?initializeFromNetwork@BlockPlacementFilterDescription@@UEAAXAEBVCompoundTag@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&);

    // symbol: ?bindType@BlockPlacementFilterDescription@@SAXXZ
    MCAPI static void bindType();

    // symbol: ?NameID@BlockPlacementFilterDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
