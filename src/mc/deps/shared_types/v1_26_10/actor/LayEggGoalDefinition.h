#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToBlockGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

namespace SharedTypes::v1_26_10 {

struct LayEggGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                      mTargetBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                      mTargetMaterialsAboveBlockStrings;
    ::ll::TypedStorage<1, 1, bool>                                               mAllowLayingFromBelow;
    ::ll::TypedStorage<1, 1, bool>                                               mUseDefaultAnimation;
    ::ll::TypedStorage<4, 4, float>                                              mLaySeconds;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mEggType;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>             mLayEggSound;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnLayEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    LayEggGoalDefinition& operator=(LayEggGoalDefinition const&);
    LayEggGoalDefinition(LayEggGoalDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LayEggGoalDefinition();

    MCNAPI LayEggGoalDefinition(::SharedTypes::v1_26_10::LayEggGoalDefinition&&);

    MCNAPI ::SharedTypes::v1_26_10::LayEggGoalDefinition& operator=(::SharedTypes::v1_26_10::LayEggGoalDefinition&&);

    MCNAPI ~LayEggGoalDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& DEFAULT_EGG_TYPE();

    MCNAPI static ::std::vector<::std::string> const& DEFAULT_TARGET_BLOCKS();

    MCNAPI static ::std::vector<::std::string> const& DEFAULT_TARGET_MATERIALS_ABOVE_BLOCK_STRINGS();

    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_26_10::LayEggGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
