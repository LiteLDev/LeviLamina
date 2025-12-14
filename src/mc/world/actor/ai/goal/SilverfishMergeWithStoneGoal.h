#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

// auto generated forward declare list
// clang-format off
class Silverfish;
// clang-format on

class SilverfishMergeWithStoneGoal : public ::RandomStrollGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Silverfish&> mSilverfish;
    ::ll::TypedStorage<4, 4, int>           mSelectedFace;
    ::ll::TypedStorage<1, 1, bool>          mDoMerge;
    // NOLINTEND

public:
    // prevent constructor by default
    SilverfishMergeWithStoneGoal& operator=(SilverfishMergeWithStoneGoal const&);
    SilverfishMergeWithStoneGoal(SilverfishMergeWithStoneGoal const&);
    SilverfishMergeWithStoneGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~SilverfishMergeWithStoneGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
