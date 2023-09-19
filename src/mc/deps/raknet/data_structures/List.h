#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

template <typename T0>
class List {
public:
    // prevent constructor by default
    List& operator=(List const&);
    List(List const&);
    List();
};

}; // namespace DataStructures
