#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class OnPlayerDestroyedTriggerDescription {
public:
    // prevent constructor by default
    OnPlayerDestroyedTriggerDescription& operator=(OnPlayerDestroyedTriggerDescription const&);
    OnPlayerDestroyedTriggerDescription(OnPlayerDestroyedTriggerDescription const&);
    OnPlayerDestroyedTriggerDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OnPlayerDestroyedTriggerDescription@@UEAA@XZ
    virtual ~OnPlayerDestroyedTriggerDescription() = default;

    // vIndex: 1, symbol:
    // ?getName@OnPlayerDestroyedTriggerDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?initializeComponent@BlockComponentDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponent(class EntityContext& entity) const;

    // vIndex: 3, symbol:
    // ?initializeComponent@?$BlockTriggerDescription@VOnPlayerDestroyedTrigger@@@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // vIndex: 4, symbol: ?initializeComponentFromCode@BlockComponentDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponentFromCode(class EntityContext&) const;

    // vIndex: 5, symbol: ?initializeComponentFromCode@BlockComponentDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponentFromCode(class BlockComponentStorage&) const;

    // vIndex: 6, symbol:
    // ?buildSchema@?$BlockTriggerDescription@VOnPlayerDestroyedTrigger@@@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockComponentGroupDescription@@@JsonUtil@@@std@@AEBVBlockComponentFactory@@@Z
    virtual void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&
                                           componentSchema,
        class BlockComponentFactory const& factory
    ) const;

    // vIndex: 7, symbol: ?isNetworkComponent@BlockComponentDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 8, symbol:
    // ?buildNetworkTag@BlockComponentDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 9, symbol:
    // ?initializeFromNetwork@BlockComponentDescription@@UEAAXAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 10, symbol: ?handleVersionBasedInitialization@BlockComponentDescription@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // symbol:
    // ?NameID@OnPlayerDestroyedTriggerDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
