#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::JsonUtil {

enum class JsonDocumentParseResult : int {
    Success   = 0,
    Oversized = 1,
    Malformed = 2,
};

}
