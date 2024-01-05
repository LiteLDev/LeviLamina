#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MobEffectDefinition {
public:
    // prevent constructor by default
    MobEffectDefinition& operator=(MobEffectDefinition const&);
    MobEffectDefinition(MobEffectDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0MobEffectDefinition@@QEAA@XZ
    MCAPI MobEffectDefinition();

    // symbol: ?initialize@MobEffectDefinition@@QEBAXAEAVEntityContext@@AEAVMobEffectComponent@@@Z
    MCAPI void initialize(class EntityContext& entity, class MobEffectComponent& component) const;

    // symbol: ?setCooldownTimeInTicks@MobEffectDefinition@@QEAAXAEBH@Z
    MCAPI void setCooldownTimeInTicks(int const& seconds);

    // symbol: ?setEffectTimeInTicks@MobEffectDefinition@@QEAAXAEBH@Z
    MCAPI void setEffectTimeInTicks(int const& seconds);

    // symbol:
    // ?setMobEffectByName@MobEffectDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setMobEffectByName(std::string const& mobEffect);

    // symbol:
    // ?buildSchema@MobEffectDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VMobEffectDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MobEffectDefinition>>&
            root
    );

    // NOLINTEND
};
