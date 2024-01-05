#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PlayDeadGoal : public ::Goal {
public:
    // PlayDeadGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // PlayDeadGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1Definition@PlayDeadGoal@@UEAA@XZ
        virtual ~Definition();

        // symbol: ??0Definition@PlayDeadGoal@@QEAA@XZ
        MCAPI Definition();

        // symbol:
        // ?addDamageCause@Definition@PlayDeadGoal@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI void addDamageCause(std::string const&);

        // symbol: ?initialize@Definition@PlayDeadGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext& entity, class PlayDeadGoal& goal) const;

        // symbol:
        // ?buildSchema@Definition@PlayDeadGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@PlayDeadGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PlayDeadGoal::Definition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PlayDeadGoal& operator=(PlayDeadGoal const&);
    PlayDeadGoal(PlayDeadGoal const&);
    PlayDeadGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlayDeadGoal@@UEAA@XZ
    virtual ~PlayDeadGoal() = default;

    // vIndex: 1, symbol: ?canUse@PlayDeadGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@PlayDeadGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@PlayDeadGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@PlayDeadGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@PlayDeadGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0PlayDeadGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit PlayDeadGoal(class Mob& mob);

    // NOLINTEND
};
