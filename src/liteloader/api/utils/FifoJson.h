#include "fifo_map/fifo_map.hpp"
#include "nlohmann/json.hpp"

namespace ll {

template <class Key, class T, class DummyCompare, class Allocator>
using workaround_fifo_map = nlohmann::fifo_map<Key, T, nlohmann::fifo_map_compare<Key>, Allocator>;
using fifo_json           = nlohmann::basic_json<workaround_fifo_map>;

}; // namespace ll
