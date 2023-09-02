#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OnPlacedTriggerDescription {
public:
    // prevent constructor by default
    OnPlacedTriggerDescription& operator=(OnPlacedTriggerDescription const&) = delete;
    OnPlacedTriggerDescription(OnPlacedTriggerDescription const&)            = delete;
    OnPlacedTriggerDescription()                                             = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?getName@OnPlacedTriggerDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?initializeComponent@BlockGeometryDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponent(class EntityContext&) const;

    // vIndex: 3, symbol: ?initializeComponent@BlockComponentDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // vIndex: 4, symbol: ?initializeComponentFromCode@BlockComponentDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponentFromCode(class EntityContext&) const;

    // vIndex: 5, symbol:
    // ?buildSchema@BlockComponentDescription@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockComponentGroupDescription@@@JsonUtil@@@std@@AEBVBlockComponentFactory@@@Z
    virtual void
    buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&, class BlockComponentFactory const&)
        const;

    // vIndex: 6, symbol: ?isNetworkComponent@BlockComponentDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 7, symbol:
    // ?buildNetworkTag@BlockComponentDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 8, symbol: ?initializeFromNetwork@BlockUnitCubeDescription@@UEAAXAEBVCompoundTag@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&);

    // vIndex: 9, symbol: ?handleVersionBasedInitialization@BlockComponentDescription@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // symbol: ?NameID@OnPlacedTriggerDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
