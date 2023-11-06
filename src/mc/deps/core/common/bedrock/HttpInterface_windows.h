#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HttpInterface_windows {
public:
    // prevent constructor by default
    HttpInterface_windows& operator=(HttpInterface_windows const&);
    HttpInterface_windows(HttpInterface_windows const&);
    HttpInterface_windows();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1HttpInterface_windows@Http@@@UEAA@XZ
    virtual ~HttpInterface_windows();

    // NOLINTEND
};

}; // namespace Bedrock::Http
