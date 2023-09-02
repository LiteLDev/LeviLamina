#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct BlockRandomTickingDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockRandomTickingDescription& operator=(BlockRandomTickingDescription const&) = delete;
    BlockRandomTickingDescription(BlockRandomTickingDescription const&)            = delete;
    BlockRandomTickingDescription()                                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?getName@BlockRandomTickingDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol: ?initializeComponent@BlockRandomTickingDescription@@UEBAXAEAVEntityContext@@@Z
    virtual void initializeComponent(class EntityContext&) const;

    // symbol: ?bindType@BlockRandomTickingDescription@@SAXXZ
    MCAPI static void bindType();

    // symbol: ?NameID@BlockRandomTickingDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
