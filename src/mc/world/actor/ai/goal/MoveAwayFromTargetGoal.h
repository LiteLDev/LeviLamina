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

class MoveAwayFromTargetGoal : public ::Goal {
public:
    // MoveAwayFromTargetGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // MoveAwayFromTargetGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1Definition@MoveAwayFromTargetGoal@@UEAA@XZ
        virtual ~Definition() = default;

        // symbol: ?initialize@Definition@MoveAwayFromTargetGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext&, class MoveAwayFromTargetGoal&) const;

        // symbol:
        // ?buildSchema@Definition@MoveAwayFromTargetGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@MoveAwayFromTargetGoal@@@JsonUtil@@@4@@Z
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MoveAwayFromTargetGoal::Definition>>&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    MoveAwayFromTargetGoal& operator=(MoveAwayFromTargetGoal const&);
    MoveAwayFromTargetGoal(MoveAwayFromTargetGoal const&);
    MoveAwayFromTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveAwayFromTargetGoal@@UEAA@XZ
    virtual ~MoveAwayFromTargetGoal() = default;

    // vIndex: 1, symbol: ?canUse@MoveAwayFromTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MoveAwayFromTargetGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MoveAwayFromTargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@MoveAwayFromTargetGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@MoveAwayFromTargetGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MoveAwayFromTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0MoveAwayFromTargetGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit MoveAwayFromTargetGoal(class Mob&);

    // NOLINTEND
};
