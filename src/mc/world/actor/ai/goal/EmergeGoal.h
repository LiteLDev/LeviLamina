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

class EmergeGoal : public ::Goal {
public:
    // EmergeGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // EmergeGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1Definition@@@UEAA@XZ
        virtual ~Definition();

        // symbol: ??0Definition@EmergeGoal@@QEAA@XZ
        MCAPI Definition();

        // symbol: ?initialize@Definition@EmergeGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext&, class EmergeGoal&) const;

        // symbol:
        // ?buildSchema@Definition@EmergeGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@EmergeGoal@@@JsonUtil@@@4@@Z
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EmergeGoal::Definition>>&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    EmergeGoal& operator=(EmergeGoal const&);
    EmergeGoal(EmergeGoal const&);
    EmergeGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~EmergeGoal();

    // vIndex: 1, symbol: ?canUse@EmergeGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@EmergeGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@EmergeGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@EmergeGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@EmergeGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@EmergeGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0EmergeGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit EmergeGoal(class Mob&);

    // NOLINTEND
};
