#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

template <typename T0>
class LinkedList {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATASTRUCTURES_LINKEDLIST
public:
    LinkedList& operator=(LinkedList const&) = delete;
    LinkedList(LinkedList const&)            = delete;
    LinkedList()                             = delete;
#endif

public:
};

}; // namespace DataStructures
