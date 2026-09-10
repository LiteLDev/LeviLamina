#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ServerConfiguration {

struct PresenceConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkff5807;
    // NOLINTEND

public:
    // prevent constructor by default
    PresenceConfiguration& operator=(PresenceConfiguration const&);
    PresenceConfiguration(PresenceConfiguration const&);
    PresenceConfiguration();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace ServerConfiguration
