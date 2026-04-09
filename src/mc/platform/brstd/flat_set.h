#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/platform/brstd/associative_adapter.h"

namespace brstd {

template <typename Key, typename Compare = std::less<Key>, typename KeyContainer = std::vector<Key>>
class flat_set : public associative_adapter<Key, no_value_t, Compare, KeyContainer, no_mapped_container_t> {
    using container_type = KeyContainer;
};

static_assert(flat_set<int>::no_mapped_container == true);

} // namespace brstd
