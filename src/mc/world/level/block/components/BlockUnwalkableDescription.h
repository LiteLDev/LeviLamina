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

class BlockUnwalkableDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockUnwalkableDescription& operator=(BlockUnwalkableDescription const&);
    BlockUnwalkableDescription(BlockUnwalkableDescription const&);
    BlockUnwalkableDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?getName@BlockUnwalkableDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?initializeComponent@BlockUnwalkableDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponent(class EntityContext&) const;

    // vIndex: 6, symbol:
    // ?buildSchema@BlockUnwalkableDescription@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockComponentGroupDescription@@@JsonUtil@@@std@@AEBVBlockComponentFactory@@@Z
    virtual void
    buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&, class BlockComponentFactory const&)
        const;

    // vIndex: 7, symbol: ?isNetworkComponent@BlockUnwalkableDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 8, symbol:
    // ?buildNetworkTag@BlockUnwalkableDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx&) const;

    // vIndex: 9, symbol:
    // ?initializeFromNetwork@BlockUnwalkableDescription@@UEAAXAEBVCompoundTag@@AEAUReflectionCtx@cereal@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx&);

    // symbol: ?NameID@BlockUnwalkableDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
