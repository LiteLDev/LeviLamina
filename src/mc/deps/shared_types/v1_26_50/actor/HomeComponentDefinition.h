#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct HomeComponentDefinition {
public:
    // HomeComponentDefinition inner types define
    enum class RestrictionType : uint {
        None           = 0,
        RandomMovement = 1,
        AllMovement    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_50::HomeComponentDefinition::RestrictionType> mRestrictionType;
    ::ll::TypedStorage<4, 4, int>                                                               mRestrictionRadius;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                     mHomeBlockNames;
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
};

} // namespace SharedTypes::v1_26_50
