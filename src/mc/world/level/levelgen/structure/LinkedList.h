#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

template <typename T0>
class LinkedList {

public:
    // prevent constructor by default
    LinkedList& operator=(LinkedList const&) = delete;
    LinkedList(LinkedList const&)            = delete;
    LinkedList()                             = delete;
};

}; // namespace DataStructures
