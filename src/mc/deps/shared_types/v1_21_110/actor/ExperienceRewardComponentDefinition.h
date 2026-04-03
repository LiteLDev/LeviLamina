#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct ExperienceRewardComponentDefinition {
public:
    // ExperienceRewardComponentDefinition inner types define
    using ExpressionNode = ::SharedTypes::Legacy::ExpressionNode;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                mOnBred;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                mOnDeath;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ExpressionNode>> mOnBredArray;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ExpressionNode>> mOnDeathArray;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceRewardComponentDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExperienceRewardComponentDefinition(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition&&);

    MCAPI ExperienceRewardComponentDefinition(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&);

    MCAPI void addBredExpressionNode(::SharedTypes::Legacy::ExpressionNode const& expr);

    MCAPI void addDeathExpressionNode(::SharedTypes::Legacy::ExpressionNode const& expr);

    MCAPI ::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition&
    operator=(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition&&);

    MCAPI ::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition&
    operator=(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&);

    MCAPI ~ExperienceRewardComponentDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
