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
    ::ll::UntypedStorage<8, 40> mUnkd28823;
    ::ll::UntypedStorage<8, 40> mUnk21a237;
    ::ll::UntypedStorage<8, 32> mUnk679773;
    // NOLINTEND

public:
    // prevent constructor by default
    PresenceConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PresenceConfiguration(::ServerConfiguration::PresenceConfiguration const&);

    MCNAPI ::ServerConfiguration::PresenceConfiguration& operator=(::ServerConfiguration::PresenceConfiguration const&);

    MCNAPI ~PresenceConfiguration();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerConfiguration::PresenceConfiguration const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerConfiguration
