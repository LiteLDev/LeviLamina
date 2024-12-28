#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FieldTrialsView {
public:
    // prevent constructor by default
    FieldTrialsView& operator=(FieldTrialsView const&);
    FieldTrialsView(FieldTrialsView const&);
    FieldTrialsView();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FieldTrialsView();

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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
