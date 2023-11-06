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

    // vIndex: 3, symbol: ?initializeComponent@BlockGeometryDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponent(class BlockComponentStorage&) const;

    // vIndex: 4, symbol: ?initializeComponentFromCode@BlockGeometryDescription@@UEBAXAEAVBlockComponentStorage@@@Z
    virtual void initializeComponentFromCode(class BlockComponentStorage&) const;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 10, symbol: ?handleVersionBasedInitialization@BlockGeometryDescription@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // symbol: ??0BlockGeometryDescription@@QEAA@XZ
    MCAPI BlockGeometryDescription();

    // symbol: ??0BlockGeometryDescription@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit BlockGeometryDescription(std::string const&);

    // symbol: ?bindType@BlockGeometryDescription@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?NameID@BlockGeometryDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NameID;

    // NOLINTEND
};
