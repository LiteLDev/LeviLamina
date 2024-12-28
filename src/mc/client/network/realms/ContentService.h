#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

class ContentService {
public:
    // prevent constructor by default
    ContentService& operator=(ContentService const&);
    ContentService(ContentService const&);
    ContentService();
};

} // namespace Realms
