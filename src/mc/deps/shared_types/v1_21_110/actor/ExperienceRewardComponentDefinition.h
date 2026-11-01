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
    ExperienceRewardComponentDefinition& operator=(ExperienceRewardComponentDefinition const&);
    ExperienceRewardComponentDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExperienceRewardComponentDefinition(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&);

    MCNAPI void addBredExpressionNode(::SharedTypes::Legacy::ExpressionNode const& expr);

    MCNAPI void addDeathExpressionNode(::SharedTypes::Legacy::ExpressionNode const& expr);

    MCNAPI bool operator==(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&) const;

    MCNAPI ~ExperienceRewardComponentDefinition();
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
    MCNAPI void* $ctor(::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
