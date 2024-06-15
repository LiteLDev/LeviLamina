#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MobEffectImmunityDefinition {
public:
    // prevent constructor by default
    MobEffectImmunityDefinition& operator=(MobEffectImmunityDefinition const&);
    MobEffectImmunityDefinition(MobEffectImmunityDefinition const&);
    MobEffectImmunityDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@MobEffectImmunityDefinition@@QEBAXAEAVEntityContext@@AEAUMobEffectImmunityComponent@@@Z
    MCAPI void initialize(class EntityContext&, struct MobEffectImmunityComponent&) const;

    // symbol:
    // ?buildSchema@MobEffectImmunityDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VMobEffectImmunityDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MobEffectImmunityDefinition>>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?addEffectByName@MobEffectImmunityDefinition@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addEffectByName(std::string const&);

    // NOLINTEND
};
