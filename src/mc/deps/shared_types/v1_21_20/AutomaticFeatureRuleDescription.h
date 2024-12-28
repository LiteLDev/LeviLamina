#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct AutomaticFeatureRuleDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk107663;
    ::ll::UntypedStorage<8, 32> mUnk6c6c80;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomaticFeatureRuleDescription(AutomaticFeatureRuleDescription const&);
    AutomaticFeatureRuleDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription const&);

    MCAPI ::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription&&);

    MCAPI ~AutomaticFeatureRuleDescription();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
