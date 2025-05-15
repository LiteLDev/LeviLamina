#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct TransportDescription; }
// clang-format on

namespace cricket {

struct JsepTransportDescription {
public:
    // prevent constructor by default
    JsepTransportDescription& operator=(JsepTransportDescription const&);
    JsepTransportDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsepTransportDescription(::cricket::JsepTransportDescription const&);

    MCNAPI JsepTransportDescription(bool, ::std::vector<int> const&, int, ::cricket::TransportDescription const&);

    MCNAPI ~JsepTransportDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::JsepTransportDescription const&);

    MCNAPI void* $ctor(bool, ::std::vector<int> const&, int, ::cricket::TransportDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
