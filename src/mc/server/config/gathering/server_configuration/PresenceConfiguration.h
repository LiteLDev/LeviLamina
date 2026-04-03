#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerConfiguration {

struct PresenceConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc868b1;
    ::ll::UntypedStorage<8, 32> mUnk20866c;
    // NOLINTEND

public:
    // prevent constructor by default
    PresenceConfiguration(PresenceConfiguration const&);
    PresenceConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ServerConfiguration::PresenceConfiguration& operator=(::ServerConfiguration::PresenceConfiguration&&);

    MCNAPI ::ServerConfiguration::PresenceConfiguration& operator=(::ServerConfiguration::PresenceConfiguration const&);

    MCNAPI ~PresenceConfiguration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerConfiguration
