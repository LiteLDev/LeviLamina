#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class DocumentOptions {

public:
    // prevent constructor by default
    DocumentOptions& operator=(DocumentOptions const&) = delete;
    DocumentOptions(DocumentOptions const&)            = delete;
    DocumentOptions()                                  = delete;
};

}; // namespace Bedrock::JSONObject
