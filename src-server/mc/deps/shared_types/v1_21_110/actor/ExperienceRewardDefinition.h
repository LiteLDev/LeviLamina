#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ExpressionNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct ExperienceRewardDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk961483;
    ::ll::UntypedStorage<8, 48> mUnk53d49d;
    ::ll::UntypedStorage<8, 24> mUnkb3a419;
    ::ll::UntypedStorage<8, 24> mUnk87aacc;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceRewardDefinition& operator=(ExperienceRewardDefinition const&);
    ExperienceRewardDefinition(ExperienceRewardDefinition const&);
    ExperienceRewardDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExperienceRewardDefinition(::SharedTypes::v1_21_110::ExperienceRewardDefinition&&);

    MCNAPI void addBredExpressionNode(::SharedTypes::Legacy::ExpressionNode const& expr);

    MCNAPI void addDeathExpressionNode(::SharedTypes::Legacy::ExpressionNode const& expr);

    MCNAPI ::SharedTypes::v1_21_110::ExperienceRewardDefinition& operator=(::SharedTypes::v1_21_110::ExperienceRewardDefinition&&);

    MCNAPI ~ExperienceRewardDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_110::ExperienceRewardDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
