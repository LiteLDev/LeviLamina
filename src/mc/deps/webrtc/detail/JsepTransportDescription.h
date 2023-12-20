#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct CryptoParams; }
namespace cricket { struct TransportDescription; }
// clang-format on

namespace cricket {

struct JsepTransportDescription {
public:
    // prevent constructor by default
    JsepTransportDescription& operator=(JsepTransportDescription const&);
    JsepTransportDescription();

public:
    // NOLINTBEGIN
    // symbol: ??0JsepTransportDescription@cricket@@QEAA@AEBU01@@Z
    MCAPI JsepTransportDescription(struct cricket::JsepTransportDescription const&);

    // symbol:
    // ??0JsepTransportDescription@cricket@@QEAA@_NAEBV?$vector@UCryptoParams@cricket@@V?$allocator@UCryptoParams@cricket@@@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@3@HAEBUTransportDescription@1@@Z
    MCAPI
    JsepTransportDescription(bool, std::vector<struct cricket::CryptoParams> const&, std::vector<int> const&, int, struct cricket::TransportDescription const&);

    // symbol: ??1JsepTransportDescription@cricket@@QEAA@XZ
    MCAPI ~JsepTransportDescription();

    // NOLINTEND
};

}; // namespace cricket
