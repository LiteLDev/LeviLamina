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

class DigGoal : public ::Goal {
public:
    // DigGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // DigGoal inner types define
    enum class CanUseResult {};

    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1Definition@DigGoal@@UEAA@XZ
        virtual ~Definition() = default;

        // symbol: ??0Definition@DigGoal@@QEAA@XZ
        MCAPI Definition();

        // symbol: ?initialize@Definition@DigGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext& entity, class DigGoal& goal) const;

        // symbol:
        // ?buildSchema@Definition@DigGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@DigGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DigGoal::Definition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DigGoal& operator=(DigGoal const&);
    DigGoal(DigGoal const&);
    DigGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DigGoal@@UEAA@XZ
    virtual ~DigGoal() = default;

    // vIndex: 1, symbol: ?canUse@DigGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DigGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DigGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DigGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DigGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@DigGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0DigGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit DigGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canUse@DigGoal@@AEBA?AW4CanUseResult@1@XZ
    MCAPI ::DigGoal::CanUseResult _canUse() const;

    // NOLINTEND
};
