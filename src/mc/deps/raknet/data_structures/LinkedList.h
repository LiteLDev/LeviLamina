#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

template <typename T0>
class LinkedList {
public:
    // prevent constructor by default
    LinkedList& operator=(LinkedList const&);
    LinkedList(LinkedList const&);
    LinkedList();
};

}; // namespace DataStructures
