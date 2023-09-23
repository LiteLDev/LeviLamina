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

struct BlockSelectionBoxDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockSelectionBoxDescription& operator=(BlockSelectionBoxDescription const&);
    BlockSelectionBoxDescription(BlockSelectionBoxDescription const&);
    BlockSelectionBoxDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?getName@BlockSelectionBoxDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol: ?initializeComponent@BlockSelectionBoxDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // vIndex: 5, symbol: ?initializeComponentFromCode@BlockSelectionBoxDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponentFromCode(class BlockComponentStorage&) const;

    // vIndex: 7, symbol: ?isNetworkComponent@BlockSelectionBoxDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 8, symbol:
    // ?buildNetworkTag@BlockSelectionBoxDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx&) const;

    // vIndex: 9, symbol:
    // ?initializeFromNetwork@BlockSelectionBoxDescription@@UEAAXAEBVCompoundTag@@AEAUReflectionCtx@cereal@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx&);

    // symbol: ??1BlockSelectionBoxDescription@@UEAA@XZ
    MCVAPI ~BlockSelectionBoxDescription();

    // symbol: ??0BlockSelectionBoxDescription@@QEAA@_N@Z
    MCAPI explicit BlockSelectionBoxDescription(bool);

    // symbol: ??0BlockSelectionBoxDescription@@QEAA@AEBVVec3@@0@Z
    MCAPI BlockSelectionBoxDescription(class Vec3 const&, class Vec3 const&);

    // symbol: ?bindType@BlockSelectionBoxDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?NameID@BlockSelectionBoxDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
