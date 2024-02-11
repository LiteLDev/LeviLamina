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

class BlockPartVisibilityDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockPartVisibilityDescription& operator=(BlockPartVisibilityDescription const&);
    BlockPartVisibilityDescription(BlockPartVisibilityDescription const&);
    BlockPartVisibilityDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockPartVisibilityDescription@@UEAA@XZ
    virtual ~BlockPartVisibilityDescription() = default;

    // symbol: ?NameID@BlockPartVisibilityDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
