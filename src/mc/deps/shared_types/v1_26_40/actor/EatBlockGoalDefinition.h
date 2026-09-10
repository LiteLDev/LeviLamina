#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

namespace SharedTypes::v1_26_40 {

struct EatBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // EatBlockGoalDefinition inner types declare
    // clang-format off
    struct EatAndReplaceBlockPair;
    // clang-format on

    // EatBlockGoalDefinition inner types define
    struct EatAndReplaceBlockPair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mEatBlock;
        ::ll::TypedStorage<8, 32, ::std::string> mReplaceBlock;
        // NOLINTEND

    public:
        // prevent constructor by default
        EatAndReplaceBlockPair& operator=(EatAndReplaceBlockPair const&);
        EatAndReplaceBlockPair();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI EatAndReplaceBlockPair(::SharedTypes::v1_26_40::EatBlockGoalDefinition::EatAndReplaceBlockPair const&);

        MCAPI ~EatAndReplaceBlockPair();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::SharedTypes::v1_26_40::EatBlockGoalDefinition::EatAndReplaceBlockPair const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                              mTimeUntilEat;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnEat;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>             mSuccessChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_40::EatBlockGoalDefinition::EatAndReplaceBlockPair>>
        mEatAndReplaceBlockPairs;
    // NOLINTEND

public:
    // prevent constructor by default
    EatBlockGoalDefinition& operator=(EatBlockGoalDefinition const&);
    EatBlockGoalDefinition(EatBlockGoalDefinition const&);
    EatBlockGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EatBlockGoalDefinition(::SharedTypes::v1_26_40::EatBlockGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_40::EatBlockGoalDefinition& operator=(::SharedTypes::v1_26_40::EatBlockGoalDefinition&&);

    MCAPI ~EatBlockGoalDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::SharedTypes::v1_26_40::EatBlockGoalDefinition::EatAndReplaceBlockPair> const&
    DEFAULT_EAT_AND_REPLACE_BLOCK_PAIR();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_40::EatBlockGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
