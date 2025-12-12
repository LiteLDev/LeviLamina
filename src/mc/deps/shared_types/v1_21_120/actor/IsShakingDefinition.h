#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/ActorFlagDefinition.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace SharedTypes::v1_21_120 {

struct IsShakingDefinition
: public ::SharedTypes::ActorFlagDefinition<::SharedTypes::v1_21_120::IsShakingDefinition, 40> {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();

    MCNAPI static ::std::string_view const& TITLE();

    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
