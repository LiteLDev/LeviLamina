#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FieldTrialsRegistry.h"

namespace webrtc {

class FieldTrialBasedConfig : public ::webrtc::FieldTrialsRegistry {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::std::string GetValue(::std::string_view key) const /*override*/;

    // vIndex: 0
    virtual ~FieldTrialBasedConfig() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $GetValue(::std::string_view key) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
