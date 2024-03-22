#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockGeometryDescription {
public:
    // prevent constructor by default
    BlockGeometryDescription& operator=(BlockGeometryDescription const&);
    BlockGeometryDescription(BlockGeometryDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockGeometryDescription@@UEAA@XZ
    virtual ~BlockGeometryDescription();

    // vIndex: 1, symbol:
    // ?getName@BlockGeometryDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?initializeComponent@BlockComponentDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponent(class EntityContext& entity) const;

    // vIndex: 3, symbol: ?initializeComponent@BlockGeometryDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // vIndex: 4, symbol: ?initializeComponentFromCode@BlockComponentDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponentFromCode(class EntityContext&) const;

    // vIndex: 5, symbol: ?initializeComponentFromCode@BlockGeometryDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponentFromCode(class BlockComponentStorage&) const;

    // vIndex: 6, symbol:
    // ?buildSchema@BlockComponentDescription@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockComponentGroupDescription@@@JsonUtil@@@std@@AEBVBlockComponentFactory@@@Z
    virtual void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&
                                           componentSchema,
        class BlockComponentFactory const& factory
    ) const;

    // vIndex: 7, symbol: ?isNetworkComponent@BlockCollisionBoxDescription@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 8, symbol:
    // ?buildNetworkTag@?$NetworkedBlockComponentDescription@UBlockGeometryDescription@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 9, symbol:
    // ?initializeFromNetwork@?$NetworkedBlockComponentDescription@UBlockGeometryDescription@@@@UEAAXAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 10, symbol: ?handleVersionBasedInitialization@BlockGeometryDescription@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // symbol: ??0BlockGeometryDescription@@QEAA@XZ
    MCAPI BlockGeometryDescription();

    // symbol: ??0BlockGeometryDescription@@QEAA@AEBVHashedString@@@Z
    MCAPI explicit BlockGeometryDescription(class HashedString const&);

    // symbol: ?bindType@BlockGeometryDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?registerVersionUpgrades@BlockGeometryDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);

    // symbol: ?CROSS_GEO_NAME@BlockGeometryDescription@@2VHashedString@@B
    MCAPI static class HashedString const CROSS_GEO_NAME;

    // symbol: ?FULL_BLOCK_GEO_NAME@BlockGeometryDescription@@2VHashedString@@B
    MCAPI static class HashedString const FULL_BLOCK_GEO_NAME;

    // symbol:
    // ?GEO_NAME_CONSTRAINT@BlockGeometryDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const GEO_NAME_CONSTRAINT;

    // symbol: ?NameID@BlockGeometryDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
