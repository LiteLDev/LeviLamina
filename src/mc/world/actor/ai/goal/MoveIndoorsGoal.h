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

class MoveIndoorsGoal : public ::Goal {
public:
    // MoveIndoorsGoal inner types declare
    // clang-format off
    class MoveIndoorsDefinition;
    // clang-format on

    // MoveIndoorsGoal inner types define
    class MoveIndoorsDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        MoveIndoorsDefinition& operator=(MoveIndoorsDefinition const&);
        MoveIndoorsDefinition(MoveIndoorsDefinition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1MoveIndoorsDefinition@MoveIndoorsGoal@@UEAA@XZ
        virtual ~MoveIndoorsDefinition() = default;

        // symbol: ??0MoveIndoorsDefinition@MoveIndoorsGoal@@QEAA@XZ
        MCAPI MoveIndoorsDefinition();

        // symbol: ?addCooldownTicksBySeconds@MoveIndoorsDefinition@MoveIndoorsGoal@@QEAAXAEBM@Z
        MCAPI void addCooldownTicksBySeconds(float const&);

        // symbol: ?initialize@MoveIndoorsDefinition@MoveIndoorsGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext&, class MoveIndoorsGoal&) const;

        // symbol:
        // ?buildSchema@MoveIndoorsDefinition@MoveIndoorsGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VMoveIndoorsDefinition@MoveIndoorsGoal@@@JsonUtil@@@4@@Z
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MoveIndoorsGoal::MoveIndoorsDefinition>>&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    MoveIndoorsGoal& operator=(MoveIndoorsGoal const&);
    MoveIndoorsGoal(MoveIndoorsGoal const&);
    MoveIndoorsGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveIndoorsGoal@@UEAA@XZ
    virtual ~MoveIndoorsGoal() = default;

    // vIndex: 1, symbol: ?canUse@MoveIndoorsGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MoveIndoorsGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MoveIndoorsGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@MoveIndoorsGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@MoveIndoorsGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MoveIndoorsGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0MoveIndoorsGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit MoveIndoorsGoal(class Mob&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isInside@MoveIndoorsGoal@@AEAA_NAEBVBlockPos@@@Z
    MCAPI bool _isInside(class BlockPos const&);

    // symbol: ?_startPathfinding@MoveIndoorsGoal@@AEAAXXZ
    MCAPI void _startPathfinding();

    // NOLINTEND
};
