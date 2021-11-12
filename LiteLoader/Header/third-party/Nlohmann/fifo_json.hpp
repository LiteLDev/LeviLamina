#include "json.hpp"
#include "fifo_map.hpp"
#include <string>
using namespace nlohmann;

template<class Key, class T, class dummy_compare, class Allocator>
using workaround_fifo_map = fifo_map<Key, T, fifo_map_compare<Key>, Allocator>;
using fifo_json = basic_json<workaround_fifo_map>;