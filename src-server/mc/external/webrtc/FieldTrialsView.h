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
    MCNAPI bool IsDisabled(::std::string_view key) const;

    MCNAPI bool IsEnabled(::std::string_view key) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
