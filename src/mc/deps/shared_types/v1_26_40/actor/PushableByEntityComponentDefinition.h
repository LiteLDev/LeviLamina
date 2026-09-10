#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/actor/PushableByEntityComponentDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_30 { struct PushableByEntityComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct PushableByEntityPreset; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_40 {

struct PushableByEntityComponentDefinition : public ::SharedTypes::v1_26_20::PushableByEntityComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_40::PushableByEntityPreset>> mPresets;
    ::ll::TypedStorage<1, 1, bool> mUseDefaultWithOverlapCheck;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        ::SharedTypes::v1_26_30::PushableByEntityComponentDefinition const& oldDef,
        ::SharedTypes::v1_26_40::PushableByEntityComponentDefinition&       newDef
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
