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

class AvoidBlockGoal : public ::Goal {
public:
    // AvoidBlockGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // AvoidBlockGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1Definition@AvoidBlockGoal@@UEAA@XZ
        virtual ~Definition();

        // symbol: ??0Definition@AvoidBlockGoal@@QEAA@XZ
        MCAPI Definition();

        // symbol: ?initialize@Definition@AvoidBlockGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext& entity, class AvoidBlockGoal& goal) const;

        // symbol:
        // ?setSoundEvent@Definition@AvoidBlockGoal@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI void setSoundEvent(std::string const& soundEvent);

        // symbol:
        // ?setTargetSelectionMethod@Definition@AvoidBlockGoal@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI void setTargetSelectionMethod(std::string const& methodCased);

        // symbol:
        // ?buildSchema@Definition@AvoidBlockGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@AvoidBlockGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AvoidBlockGoal::Definition>>&
                root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    AvoidBlockGoal& operator=(AvoidBlockGoal const&);
    AvoidBlockGoal(AvoidBlockGoal const&);
    AvoidBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AvoidBlockGoal@@UEAA@XZ
    virtual ~AvoidBlockGoal() = default;

    // vIndex: 1, symbol: ?canUse@AvoidBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@AvoidBlockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@AvoidBlockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@AvoidBlockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@AvoidBlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@AvoidBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0AvoidBlockGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit AvoidBlockGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isValidTarget@AvoidBlockGoal@@AEBA_NAEBVBlock@@@Z
    MCAPI bool _isValidTarget(class Block const& candidateBlock) const;

    // NOLINTEND
};
