#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class SilverfishMergeWithStoneGoal : public ::RandomStrollGoal {
public:
    // prevent constructor by default
    SilverfishMergeWithStoneGoal& operator=(SilverfishMergeWithStoneGoal const&);
    SilverfishMergeWithStoneGoal(SilverfishMergeWithStoneGoal const&);
    SilverfishMergeWithStoneGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SilverfishMergeWithStoneGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit SilverfishMergeWithStoneGoal(class Silverfish& silverfish);

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

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    // NOLINTEND
};
