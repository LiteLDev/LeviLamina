#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class OnStepOnTriggerDescription {
public:
    // prevent constructor by default
    OnStepOnTriggerDescription& operator=(OnStepOnTriggerDescription const&);
    OnStepOnTriggerDescription(OnStepOnTriggerDescription const&);
    OnStepOnTriggerDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?getName@OnStepOnTriggerDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?initializeComponent@BlockGeometryDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponent(class EntityContext&) const;

    // vIndex: 3, symbol: ?initializeComponent@BlockComponentDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // vIndex: 4, symbol: ?initializeComponentFromCode@BlockComponentDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponentFromCode(class EntityContext&) const;

    // vIndex: 5, symbol: ?initializeComponentFromCode@BlockComponentDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponentFromCode(class BlockComponentStorage&) const;

    // vIndex: 6, symbol:
    // ?buildSchema@BlockComponentDescription@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockComponentGroupDescription@@@JsonUtil@@@std@@AEBVBlockComponentFactory@@@Z
    virtual void
    buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&, class BlockComponentFactory const&)
        const;

    // vIndex: 7, symbol: ?isNetworkComponent@BlockComponentDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 8, symbol:
    // ?buildNetworkTag@BlockComponentDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx&) const;

    // vIndex: 9, symbol:
    // ?initializeFromNetwork@BlockComponentDescription@@UEAAXAEBVCompoundTag@@AEAUReflectionCtx@cereal@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx&);

    // vIndex: 10, symbol: ?handleVersionBasedInitialization@BlockComponentDescription@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // symbol: ?NameID@OnStepOnTriggerDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
