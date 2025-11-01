#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class EventTracer {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void AddTraceEvent(
        char          phase,
        uchar const*  category_enabled,
        char const*   name,
        uint64        id,
        int           num_args,
        char const**  arg_names,
        uchar const*  arg_types,
        uint64 const* arg_values,
        uchar         flags
    );

    MCNAPI static uchar const* GetCategoryEnabled(char const* name);
    // NOLINTEND
};

} // namespace webrtc
