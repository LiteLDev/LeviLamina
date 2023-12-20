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

struct BlockCreativeGroupDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockCreativeGroupDescription& operator=(BlockCreativeGroupDescription const&);
    BlockCreativeGroupDescription(BlockCreativeGroupDescription const&);
    BlockCreativeGroupDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockCreativeGroupDescription@@UEAA@XZ
    virtual ~BlockCreativeGroupDescription() = default;

    // vIndex: 1, symbol:
    // ?getName@BlockCreativeGroupDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // symbol: ?NameID@BlockCreativeGroupDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
