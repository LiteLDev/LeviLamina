#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/target/TargetGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NearestAttackableTargetDefinition : public ::TargetGoalDefinition {
public:
    // prevent constructor by default
    NearestAttackableTargetDefinition& operator=(NearestAttackableTargetDefinition const&);
    NearestAttackableTargetDefinition(NearestAttackableTargetDefinition const&);
    NearestAttackableTargetDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NearestAttackableTargetDefinition@@UEAA@XZ
    virtual ~NearestAttackableTargetDefinition() = default;

    // vIndex: 2, symbol: ?validate@NearestAttackableTargetDefinition@@UEBA_NAEAVMob@@@Z
    virtual bool validate(class Mob& mob) const;

    // symbol:
    // ?initialize@NearestAttackableTargetDefinition@@QEBAXAEAVEntityContext@@AEAVNearestAttackableTargetGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class NearestAttackableTargetGoal& goal) const;

    // symbol:
    // ?buildSchema@NearestAttackableTargetDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VNearestAttackableTargetDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NearestAttackableTargetDefinition>>&
            root
    );

    // NOLINTEND
};
