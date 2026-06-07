#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/platform/brstd/associative_adapter.h"

namespace brstd {

template <typename Key, typename T, typename Compare, typename KeyContainer, typename MappedContainer>
class flat_map : public ::brstd::associative_adapter<Key, T, Compare, KeyContainer, MappedContainer> {};

} // namespace brstd
