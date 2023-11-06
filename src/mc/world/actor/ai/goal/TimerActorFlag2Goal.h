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

class TimerActorFlag2Goal : public ::TimerActorFlagBaseGoal {
public:
    // TimerActorFlag2Goal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // TimerActorFlag2Goal inner types define
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
        // ?buildSchema@Definition@TimerActorFlag2Goal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@TimerActorFlag2Goal@@@JsonUtil@@@4@@Z
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TimerActorFlag2Goal::Definition>>&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    TimerActorFlag2Goal& operator=(TimerActorFlag2Goal const&);
    TimerActorFlag2Goal(TimerActorFlag2Goal const&);
    TimerActorFlag2Goal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~TimerActorFlag2Goal();

    // symbol: ??0TimerActorFlag2Goal@@QEAA@AEAVMob@@@Z
    MCAPI explicit TimerActorFlag2Goal(class Mob&);

    // NOLINTEND
};
