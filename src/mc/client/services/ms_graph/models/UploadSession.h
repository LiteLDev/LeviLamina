#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph::Models {

struct UploadSession {
public:
    // prevent constructor by default
    UploadSession& operator=(UploadSession const&);
    UploadSession(UploadSession const&);
    UploadSession();
};

} // namespace MSGraph::Models
