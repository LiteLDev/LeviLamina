#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::flat_containers_internal {

template <typename T0, typename T1, typename T2, typename T3>
class flat_tree {
public:
    // prevent constructor by default
    flat_tree& operator=(flat_tree const&);
    flat_tree(flat_tree const&);
    flat_tree();
};

} // namespace webrtc::flat_containers_internal
