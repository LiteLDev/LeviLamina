#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class TableSerializer {
public:
    // prevent constructor by default
    TableSerializer& operator=(TableSerializer const&);
    TableSerializer(TableSerializer const&);
    TableSerializer();
};

} // namespace RakNet
