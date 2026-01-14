#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/ActorFlagDefinition.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace SharedTypes::v1_21_120 {

struct IsIllagerCaptainDefinition
: public ::SharedTypes::ActorFlagDefinition<::SharedTypes::v1_21_120::IsIllagerCaptainDefinition, 82> {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();

    MCAPI static ::std::string_view const& TITLE();

    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
