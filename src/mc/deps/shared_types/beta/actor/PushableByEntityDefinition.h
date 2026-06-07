#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Beta { struct PushableByEntityPreset; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct PushableByEntityDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Beta::PushableByEntityPreset>> mPresets;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PushableByEntityDefinition();
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
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta
