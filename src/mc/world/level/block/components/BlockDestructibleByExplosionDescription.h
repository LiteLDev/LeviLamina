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

struct BlockDestructibleByExplosionDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockDestructibleByExplosionDescription& operator=(BlockDestructibleByExplosionDescription const&);
    BlockDestructibleByExplosionDescription(BlockDestructibleByExplosionDescription const&);
    BlockDestructibleByExplosionDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockDestructibleByExplosionDescription@@UEAA@XZ
    virtual ~BlockDestructibleByExplosionDescription() = default;

    // vIndex: 1, symbol:
    // ?getName@BlockDestructibleByExplosionDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol:
    // ?initializeComponent@BlockDestructibleByExplosionDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // symbol: ?bindType@BlockDestructibleByExplosionDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?registerVersionUpgrades@BlockDestructibleByExplosionDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);

    // symbol:
    // ?NameID@BlockDestructibleByExplosionDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
