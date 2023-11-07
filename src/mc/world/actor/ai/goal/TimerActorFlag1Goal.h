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

class TimerActorFlag1Goal : public ::TimerActorFlagBaseGoal {
public:
    // TimerActorFlag1Goal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // TimerActorFlag1Goal inner types define
    class Definition : public ::TimerActorFlagBaseDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1Definition@TimerActorFlag1Goal@@UEAA@XZ
        virtual ~Definition() = default;

        // symbol:
        // ?buildSchema@Definition@TimerActorFlag1Goal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@TimerActorFlag1Goal@@@JsonUtil@@@4@@Z
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TimerActorFlag1Goal::Definition>>&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    TimerActorFlag1Goal& operator=(TimerActorFlag1Goal const&);
    TimerActorFlag1Goal(TimerActorFlag1Goal const&);
    TimerActorFlag1Goal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TimerActorFlag1Goal@@UEAA@XZ
    virtual ~TimerActorFlag1Goal() = default;

    // symbol: ??0TimerActorFlag1Goal@@QEAA@AEAVMob@@@Z
    MCAPI explicit TimerActorFlag1Goal(class Mob&);

    // NOLINTEND
};
