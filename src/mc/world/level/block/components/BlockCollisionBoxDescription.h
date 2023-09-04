#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct BlockCollisionBoxDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockCollisionBoxDescription& operator=(BlockCollisionBoxDescription const&) = delete;
    BlockCollisionBoxDescription(BlockCollisionBoxDescription const&)            = delete;
    BlockCollisionBoxDescription()                                               = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?getName@BlockCollisionBoxDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?initializeComponent@BlockCollisionBoxDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponent(class EntityContext&) const;

    // vIndex: 4, symbol: ?initializeComponentFromCode@BlockCollisionBoxDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponentFromCode(class EntityContext&) const;

    // vIndex: 6, symbol: ?isNetworkComponent@BlockCollisionBoxDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 7, symbol:
    // ?buildNetworkTag@BlockCollisionBoxDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 8, symbol: ?initializeFromNetwork@BlockCollisionBoxDescription@@UEAAXAEBVCompoundTag@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&);

    // symbol: ??1BlockCollisionBoxDescription@@UEAA@XZ
    MCVAPI ~BlockCollisionBoxDescription();

    // symbol: ??0BlockCollisionBoxDescription@@QEAA@AEBVVec3@@0@Z
    MCAPI BlockCollisionBoxDescription(class Vec3 const&, class Vec3 const&);

    // symbol: ??0BlockCollisionBoxDescription@@QEAA@_N@Z
    MCAPI BlockCollisionBoxDescription(bool);

    // symbol: ?bindType@BlockCollisionBoxDescription@@SAXXZ
    MCAPI static void bindType();

    // symbol: ?NameID@BlockCollisionBoxDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
