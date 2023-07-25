#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

template <typename T0>
class List {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATASTRUCTURES_LIST
public:
    List& operator=(List const&) = delete;
    List(List const&)            = delete;
    List()                       = delete;
#endif

public:
};

}; // namespace DataStructures
