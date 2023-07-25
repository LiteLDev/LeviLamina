#pragma once

#define MCAPI __declspec(dllimport)

#include <algorithm>     // STL general algorithms
#include <array>         // STL array container
#include <bitset>        // STL bitset container
#include <cctype>        // Character handling functions
#include <cerrno>        // C Error codes
#include <chrono>        // C++11 Time library
#include <clocale>       // C localization library
#include <cmath>         // Common mathematics functions
#include <complex>       // Complex number type
#include <cstdio>        // C Standard Input/Output library
#include <cstdlib>       // C Standard General Utilities Library
#include <cstring>       // C string handling
#include <ctime>         // C Time library
#include <cwchar>        // Wide character type
#include <cwctype>       // Wide character classification
#include <deque>         // STL double ended queue container
#include <exception>     // Exception handling classes
#include <forward_list>  // STL forward list container
#include <fstream>       // File stream classes
#include <functional>    // STL Function objects
#include <iomanip>       // Input/Output manipulators
#include <ios>           // Base input/output stream classes
#include <iosfwd>        // Input/Output forward declarations
#include <iostream>      // Standard Input/Output stream objects
#include <istream>       // Basic input stream classes
#include <limits>        // Numeric limits
#include <list>          // STL linear list container
#include <map>           // STL map container
#include <memory>        // STL unique_ptr, shared_ptr, weak_ptr
#include <mutex>         // STL mutual exclusion primitives
#include <optional>      // STL optional type
#include <ostream>       // Basic output stream classes
#include <queue>         // STL queue and priority_queue container
#include <random>        // C++11 Random numbers
#include <set>           // STL set and multiset container
#include <shared_mutex>  // STL shared mutual exclusion primitives
#include <sstream>       // String stream classes
#include <stack>         // STL stack container
#include <stdexcept>     // Standard exception objects
#include <streambuf>     // Stream buffer classes
#include <string>        // String class
#include <string_view>   // STL string_view type
#include <unordered_map> // STL unordered map container
#include <unordered_set> // STL unordered set container
#include <utility>       // STL utility components
#include <variant>       // STL variant type
#include <vector>        // STL dynamic array container

#include "asio.hpp"      // Asio C++ Library
#include "asio/ssl.hpp"  // Asio SSL C++ Library
#include "entt/entt.hpp" // Entity Component System Library
#include "gsl/gsl"       // Guideline Support Library

// LevelDB C++ Library
#include "leveldb/c.h"
#include "leveldb/cache.h"
#include "leveldb/comparator.h"
#include "leveldb/db.h"
#include "leveldb/dumpfile.h"
#include "leveldb/env.h"
#include "leveldb/filter_policy.h"
#include "leveldb/iterator.h"
#include "leveldb/options.h"
#include "leveldb/slice.h"
#include "leveldb/status.h"
#include "leveldb/table.h"
#include "leveldb/table_builder.h"
#include "leveldb/write_batch.h"

// RapidJSON C++ Library
#include "rapidjson/document.h"
#include "rapidjson/encodings.h"
#include "rapidjson/error/en.h"
#include "rapidjson/filereadstream.h"
#include "rapidjson/filewritestream.h"
#include "rapidjson/pointer.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/rapidjson.h"
#include "rapidjson/reader.h"
#include "rapidjson/schema.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/writer.h"
