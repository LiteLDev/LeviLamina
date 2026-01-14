#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_10/scatter_params/ScatterParamsData.h"
#include "mc/deps/shared_types/v1_21_20/feature_rules/AutomaticFeatureRuleConditions.h"
#include "mc/deps/shared_types/v1_21_20/feature_rules/AutomaticFeatureRuleDescription.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct AutomaticFeatureRulesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription>     mDescription;
    ::ll::TypedStorage<8, 368, ::SharedTypes::v1_21_20::AutomaticFeatureRuleConditions>     mConditions;
    ::ll::TypedStorage<8, 664, ::std::optional<::SharedTypes::v1_21_10::ScatterParamsData>> mDistribution;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AutomaticFeatureRulesData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
