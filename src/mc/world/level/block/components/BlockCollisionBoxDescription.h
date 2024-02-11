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

struct BlockCollisionBoxDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockCollisionBoxDescription& operator=(BlockCollisionBoxDescription const&);
    BlockCollisionBoxDescription(BlockCollisionBoxDescription const&);
    BlockCollisionBoxDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockCollisionBoxDescription@@UEAA@XZ
    virtual ~BlockCollisionBoxDescription();

    // vIndex: 1, symbol:
    // ?getName@BlockCollisionBoxDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol: ?initializeComponent@BlockCollisionBoxDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // vIndex: 5, symbol: ?initializeComponentFromCode@BlockCollisionBoxDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponentFromCode(class BlockComponentStorage&) const;

    // vIndex: 7, symbol: ?isNetworkComponent@BlockCollisionBoxDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 8, symbol:
    // ?buildNetworkTag@BlockCollisionBoxDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 9, symbol:
    // ?initializeFromNetwork@BlockCollisionBoxDescription@@UEAAXAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // symbol: ??0BlockCollisionBoxDescription@@QEAA@_N@Z
    MCAPI explicit BlockCollisionBoxDescription(bool enabled);

    // symbol: ??0BlockCollisionBoxDescription@@QEAA@AEBVVec3@@0@Z
    MCAPI BlockCollisionBoxDescription(class Vec3 const& origin, class Vec3 const& size);

    // symbol: ?bindType@BlockCollisionBoxDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?NameID@BlockCollisionBoxDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
