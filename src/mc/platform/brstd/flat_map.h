#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/platform/brstd/associative_adapter.h"

namespace brstd {

template <
    typename Key,
    typename T,
    typename Compare         = std::less<Key>,
    typename KeyContainer    = std::vector<Key>,
    typename MappedContainer = std::vector<T>>
class flat_map : public associative_adapter<Key, T, Compare, KeyContainer, MappedContainer> {};

static_assert(flat_map<int, int>::no_mapped_container == false);

} // namespace brstd
