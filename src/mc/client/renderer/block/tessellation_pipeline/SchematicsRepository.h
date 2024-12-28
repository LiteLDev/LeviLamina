#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

class SchematicsRepository {
public:
    // prevent constructor by default
    SchematicsRepository& operator=(SchematicsRepository const&);
    SchematicsRepository(SchematicsRepository const&);
    SchematicsRepository();
};

} // namespace ClientBlockPipeline
