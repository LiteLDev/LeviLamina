#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/FilterSubject.h"

// auto generated forward declare list
// clang-format off
namespace Puv::Legacy { struct DefinitionTrigger; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DefinitionTrigger {
public:
    // prevent constructor by default
    DefinitionTrigger(DefinitionTrigger const&);
    DefinitionTrigger();

public:
    // NOLINTBEGIN
    // symbol: ??0DefinitionTrigger@@QEAA@U0Legacy@Puv@@@Z
    MCAPI explicit DefinitionTrigger(struct Puv::Legacy::DefinitionTrigger);

    // symbol:
    // ??0DefinitionTrigger@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4FilterSubject@Legacy@Puv@@VExpressionNode@@@Z
    MCAPI DefinitionTrigger(std::string, ::Puv::Legacy::FilterSubject, class ExpressionNode);

    // symbol: ?canTrigger@DefinitionTrigger@@QEBA_NAEAVRenderParams@@@Z
    MCAPI bool canTrigger(class RenderParams& params) const;

    // symbol: ??4DefinitionTrigger@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class DefinitionTrigger& operator=(class DefinitionTrigger&&);

    // symbol: ??4DefinitionTrigger@@QEAAAEAV0@AEBV0@@Z
    MCAPI class DefinitionTrigger& operator=(class DefinitionTrigger const&);

    // symbol: ??1DefinitionTrigger@@QEAA@XZ
    MCAPI ~DefinitionTrigger();

    // symbol: ?bindType@DefinitionTrigger@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
