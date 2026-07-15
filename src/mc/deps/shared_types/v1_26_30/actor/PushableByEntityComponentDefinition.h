#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/actor/PushableByEntityComponentDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_30 { struct PushableByEntityPreset; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct PushableByEntityComponentDefinition : public ::SharedTypes::v1_26_20::PushableByEntityComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_30::PushableByEntityPreset>> mPresets;
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

} // namespace SharedTypes::v1_26_30
