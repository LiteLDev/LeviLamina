#pragma once

#include <functional>
#include <map>
#include <set>
#include <shared_mutex>
#include <string>
#include <string_view>

#include "ll/api/data/ConcurrentQueue.h"

#include "parallel_hashmap/btree.h"
#include "parallel_hashmap/phmap.h"

namespace ll {

template <class... Ts>
struct Overloaded : Ts... {
    using Ts::operator()...;
};
template <class... Ts>
struct TransparentOverloaded : Ts... {
    using is_transparent = void;
    using Ts::operator()...;
};

template <class Key, class... Rests>
using DenseSet = ::phmap::parallel_flat_hash_set<Key, Rests...>;
template <class Key, class Value, class... Rests>
using DenseMap = ::phmap::parallel_flat_hash_map<Key, Value, Rests...>;

template <class Key, class... Rests>
using SmallDenseSet = ::phmap::flat_hash_set<Key, Rests...>;
template <class Key, class Value, class... Rests>
using SmallDenseMap = ::phmap::flat_hash_map<Key, Value, Rests...>;

template <class Key, class... Rests>
using DenseNodeSet = ::phmap::parallel_node_hash_set<Key, Rests...>;
template <class Key, class Value, class... Rests>
using DenseNodeMap = ::phmap::parallel_node_hash_map<Key, Value, Rests...>;

template <class Key, class... Rests>
using SmallDenseNodeSet = ::phmap::node_hash_set<Key, Rests...>;
template <class Key, class Value, class... Rests>
using SmallDenseNodeMap = ::phmap::node_hash_map<Key, Value, Rests...>;

template <class Key, class... Rests>
using OrderedSet = ::phmap::btree_set<Key, Rests...>;
template <class Key, class Value, class... Rests>
using OrderedMap = ::phmap::btree_map<Key, Value, Rests...>;

template <class Key, class... Rests>
using OrderedNodeSet = ::std::set<Key, Rests...>;
template <class Key, class Value, class... Rests>
using OrderedNodeMap = ::std::map<Key, Value, Rests...>;

template <class Key, class... Rests>
using OrderedMultiSet = ::phmap::btree_multiset<Key, Rests...>;
template <class Key, class Value, class... Rests>
using OrderedMultiMap = ::phmap::btree_multimap<Key, Value, Rests...>;

template <class Key, class... Rests>
using OrderedNodeMultiSet = ::std::multiset<Key, Rests...>;
template <class Key, class Value, class... Rests>
using OrderedNodeMultiMap = ::std::multimap<Key, Value, Rests...>;

template <
    class Key,
    class Hash  = ::phmap::priv::hash_default_hash<Key>,
    class Eq    = ::phmap::priv::hash_default_eq<Key>,
    class Alloc = ::phmap::priv::Allocator<Key>,
    size_t N    = 4,
    class Mutex = std::shared_mutex>
using ConcurrentDenseSet = ::phmap::parallel_flat_hash_set<Key, Hash, Eq, Alloc, N, Mutex>;
template <
    class Key,
    class Value,
    class Hash  = ::phmap::priv::hash_default_hash<Key>,
    class Eq    = ::phmap::priv::hash_default_eq<Key>,
    class Alloc = ::phmap::priv::Allocator<::phmap::priv::Pair<Key const, Value>>,
    size_t N    = 4,
    class Mutex = std::shared_mutex>
using ConcurrentDenseMap = ::phmap::parallel_flat_hash_map<Key, Value, Hash, Eq, Alloc, N, Mutex>;

template <
    class Key,
    class Hash  = ::phmap::priv::hash_default_hash<Key>,
    class Eq    = ::phmap::priv::hash_default_eq<Key>,
    class Alloc = ::phmap::priv::Allocator<Key>,
    size_t N    = 4,
    class Mutex = std::shared_mutex>
using ConcurrentDenseNodeSet = ::phmap::parallel_node_hash_set<Key, Hash, Eq, Alloc, N, Mutex>;
template <
    class Key,
    class Value,
    class Hash  = ::phmap::priv::hash_default_hash<Key>,
    class Eq    = ::phmap::priv::hash_default_eq<Key>,
    class Alloc = ::phmap::priv::Allocator<::phmap::priv::Pair<Key const, Value>>,
    size_t N    = 4,
    class Mutex = std::shared_mutex>
using ConcurrentDenseNodeMap = ::phmap::parallel_node_hash_map<Key, Value, Hash, Eq, Alloc, N, Mutex>;

template <class Value>
using StringMap = DenseMap<::std::string, Value>;
template <class Value>
using SmallStringMap = SmallDenseMap<::std::string, Value>;
template <class Value>
using StringNodeMap = DenseNodeMap<::std::string, Value>;
template <class Value>
using SmallStringNodeMap = SmallDenseNodeMap<::std::string, Value>;

template <typename T, typename A = std::allocator<T>>
using ConcurrentQueue = data::concurrent_queue<T, A>;

template <typename T, typename C = std::less<T>, typename A = std::allocator<T>>
using ConcurrentPriorityQueue = data::concurrent_priority_queue<T, C, A>;

} // namespace ll
