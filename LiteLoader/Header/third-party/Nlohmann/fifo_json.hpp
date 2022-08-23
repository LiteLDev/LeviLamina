#include "json.hpp"
#include "fifo_map.hpp"
#include <string>

template<class Key, class T, class dummy_compare, class Allocator>
using workaround_fifo_map = nlohmann::fifo_map<Key, T, nlohmann::fifo_map_compare<Key>, Allocator>;
using fifo_json = nlohmann::basic_json<workaround_fifo_map>;