#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace edu::auth {

template <typename T0, typename T1>
class CredentialReplaySubject {
public:
    // prevent constructor by default
    CredentialReplaySubject& operator=(CredentialReplaySubject const&);
    CredentialReplaySubject(CredentialReplaySubject const&);
    CredentialReplaySubject();
};

} // namespace edu::auth
