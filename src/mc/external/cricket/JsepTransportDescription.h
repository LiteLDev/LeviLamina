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
    MCAPI JsepTransportDescription(::cricket::JsepTransportDescription const&);

    MCAPI JsepTransportDescription(bool, ::std::vector<int> const&, int, ::cricket::TransportDescription const&);

    MCAPI ~JsepTransportDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::JsepTransportDescription const&);

    MCAPI void* $ctor(bool, ::std::vector<int> const&, int, ::cricket::TransportDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
