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

class BlockTickConfigurationComponentDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockTickConfigurationComponentDescription& operator=(BlockTickConfigurationComponentDescription const&);
    BlockTickConfigurationComponentDescription(BlockTickConfigurationComponentDescription const&);
    BlockTickConfigurationComponentDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockTickConfigurationComponentDescription@@UEAA@XZ
    virtual ~BlockTickConfigurationComponentDescription() = default;

    // vIndex: 1, symbol:
    // ?getName@BlockTickConfigurationComponentDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol:
    // ?initializeComponent@BlockTickConfigurationComponentDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // symbol: ?bindType@BlockTickConfigurationComponentDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol:
    // ?NameID@BlockTickConfigurationComponentDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
