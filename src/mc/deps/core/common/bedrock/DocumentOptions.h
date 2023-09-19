#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class DocumentOptions {
public:
    // prevent constructor by default
    DocumentOptions& operator=(DocumentOptions const&);
    DocumentOptions(DocumentOptions const&);
    DocumentOptions();
};

}; // namespace Bedrock::JSONObject
