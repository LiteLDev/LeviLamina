#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct AutomaticFeatureRulesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk9d116f;
    ::ll::UntypedStorage<8, 368> mUnk23771f;
    ::ll::UntypedStorage<8, 664> mUnk745e58;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomaticFeatureRulesData(AutomaticFeatureRulesData const&);
    AutomaticFeatureRulesData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::AutomaticFeatureRulesData&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRulesData const&);

    MCAPI ::SharedTypes::v1_21_20::AutomaticFeatureRulesData&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRulesData&&);

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
    MCAPI static ::SemVersion const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
