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

class BlockEntityFallOnConfigurationComponentDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockEntityFallOnConfigurationComponentDescription&
    operator=(BlockEntityFallOnConfigurationComponentDescription const&);
    BlockEntityFallOnConfigurationComponentDescription(BlockEntityFallOnConfigurationComponentDescription const&);
    BlockEntityFallOnConfigurationComponentDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockEntityFallOnConfigurationComponentDescription@@UEAA@XZ
    virtual ~BlockEntityFallOnConfigurationComponentDescription() = default;

    // vIndex: 1, symbol:
    // ?getName@BlockEntityFallOnConfigurationComponentDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol:
    // ?initializeComponent@BlockEntityFallOnConfigurationComponentDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // symbol: ?bindType@BlockEntityFallOnConfigurationComponentDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol:
    // ?NameID@BlockEntityFallOnConfigurationComponentDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
