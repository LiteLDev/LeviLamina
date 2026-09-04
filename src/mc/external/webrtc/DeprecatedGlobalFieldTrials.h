#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FieldTrialsRegistry.h"

namespace webrtc {

class DeprecatedGlobalFieldTrials : public ::webrtc::FieldTrialsRegistry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string GetValue(::std::string_view key) const /*override*/;

    virtual ~DeprecatedGlobalFieldTrials() /*override*/ = default;
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
