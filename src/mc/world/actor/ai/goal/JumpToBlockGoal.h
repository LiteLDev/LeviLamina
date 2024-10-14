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

class JumpToBlockGoal : public ::Goal {
public:
    // JumpToBlockGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // JumpToBlockGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition();

        MCAPI Definition();

        MCAPI void initialize(class EntityContext& entity, class JumpToBlockGoal& goal) const;

        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class JumpToBlockGoal::Definition>>&
                root
        );

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    JumpToBlockGoal& operator=(JumpToBlockGoal const&);
    JumpToBlockGoal(JumpToBlockGoal const&);
    JumpToBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JumpToBlockGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 3
    virtual bool canBeInterrupted();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit JumpToBlockGoal(class Mob& mob);

    MCAPI void resetCooldown();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _clearGoalState();

    MCAPI bool _findCandidateBlocks(class NavigationComponent& navigation);

    MCAPI bool _findJumpableBlocks(bool useOnlyPreferredBlocksIfAny);

    MCAPI bool _findTargetBlock();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canBeInterrupted$();

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
