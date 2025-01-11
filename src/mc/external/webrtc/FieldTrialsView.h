#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FieldTrialsView {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FieldTrialsView() = default;

    // vIndex: 1
    virtual ::std::string Lookup(::std::string_view) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool IsDisabled(::std::string_view) const;

    MCAPI bool IsEnabled(::std::string_view) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
