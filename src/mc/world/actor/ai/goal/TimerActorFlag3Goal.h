#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/TimerActorFlagBaseDefinition.h"
#include "mc/world/actor/ai/goal/TimerActorFlagBaseGoal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TimerActorFlag3Goal : public ::TimerActorFlagBaseGoal {
public:
    // TimerActorFlag3Goal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // TimerActorFlag3Goal inner types define
    class Definition : public ::TimerActorFlagBaseDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1Definition@@@UEAA@XZ
        virtual ~Definition();

        // symbol:
        // ?buildSchema@Definition@TimerActorFlag3Goal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@TimerActorFlag3Goal@@@JsonUtil@@@4@@Z
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TimerActorFlag3Goal::Definition>>&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    TimerActorFlag3Goal& operator=(TimerActorFlag3Goal const&);
    TimerActorFlag3Goal(TimerActorFlag3Goal const&);
    TimerActorFlag3Goal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~TimerActorFlag3Goal() = default;

    // symbol: ??0TimerActorFlag3Goal@@QEAA@AEAVMob@@@Z
    MCAPI explicit TimerActorFlag3Goal(class Mob&);

    // NOLINTEND
};
