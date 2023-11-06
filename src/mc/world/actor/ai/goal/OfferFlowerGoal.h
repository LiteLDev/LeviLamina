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

class OfferFlowerGoal : public ::Goal {
public:
    // OfferFlowerGoal inner types declare
    // clang-format off
    class OfferFlowerDefinition;
    // clang-format on

    // OfferFlowerGoal inner types define
    class OfferFlowerDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        OfferFlowerDefinition& operator=(OfferFlowerDefinition const&);
        OfferFlowerDefinition(OfferFlowerDefinition const&);
        OfferFlowerDefinition();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1OfferFlowerDefinition@@@UEAA@XZ
        virtual ~OfferFlowerDefinition();

        // symbol: ?initialize@OfferFlowerDefinition@OfferFlowerGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext&, class OfferFlowerGoal&) const;

        // symbol:
        // ?buildSchema@OfferFlowerDefinition@OfferFlowerGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VOfferFlowerDefinition@OfferFlowerGoal@@@JsonUtil@@@4@@Z
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class OfferFlowerGoal::OfferFlowerDefinition>>&);

        // symbol: ?getStrictParsingVersion@OfferFlowerDefinition@OfferFlowerGoal@@SA?AVSemVersion@@XZ
        MCAPI static class SemVersion getStrictParsingVersion();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    OfferFlowerGoal& operator=(OfferFlowerGoal const&);
    OfferFlowerGoal(OfferFlowerGoal const&);
    OfferFlowerGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~OfferFlowerGoal();

    // vIndex: 1, symbol: ?canUse@OfferFlowerGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@OfferFlowerGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@OfferFlowerGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@OfferFlowerGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@OfferFlowerGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@OfferFlowerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0OfferFlowerGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit OfferFlowerGoal(class Mob&);

    // symbol: ?getMaxOfferFlowerDurationTicks@OfferFlowerGoal@@QEBAHXZ
    MCAPI int getMaxOfferFlowerDurationTicks() const;

    // NOLINTEND
};
