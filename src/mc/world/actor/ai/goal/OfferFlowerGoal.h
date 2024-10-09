#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
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
        // vIndex: 0
        virtual ~OfferFlowerDefinition() = default;

        MCAPI void initialize(class EntityContext& entity, class OfferFlowerGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const&                                  name,
            std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                class JsonUtil::EmptyClass,
                class OfferFlowerGoal::OfferFlowerDefinition>>& root
        );

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
    // vIndex: 0
    virtual ~OfferFlowerGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit OfferFlowerGoal(class Mob& mob);

    MCAPI int getMaxOfferFlowerDurationTicks() const;

    // NOLINTEND
};
