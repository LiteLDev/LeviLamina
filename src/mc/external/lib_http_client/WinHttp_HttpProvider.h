#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace xbox::httpclient { class WinHttpProvider; }
// clang-format on

namespace xbox::httpclient {

class WinHttp_HttpProvider {
public:
    // prevent constructor by default
    WinHttp_HttpProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WinHttp_HttpProvider(::std::shared_ptr<::xbox::httpclient::WinHttpProvider>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::xbox::httpclient::WinHttpProvider>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace xbox::httpclient
