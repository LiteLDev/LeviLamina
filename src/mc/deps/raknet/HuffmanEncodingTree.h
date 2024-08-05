#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/LinkedList.h"

// auto generated forward declare list
// clang-format off
struct HuffmanEncodingTreeNode;
// clang-format on

namespace RakNet {

class HuffmanEncodingTree {
public:
    // prevent constructor by default
    HuffmanEncodingTree& operator=(HuffmanEncodingTree const&);
    HuffmanEncodingTree(HuffmanEncodingTree const&);

public:
    // NOLINTBEGIN
    MCAPI void FreeMemory();

    MCAPI void GenerateFromFrequencyTable(uint* const frequencyTable);

    MCAPI HuffmanEncodingTree();

    MCAPI ~HuffmanEncodingTree();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void InsertNodeIntoSortedList(
        struct HuffmanEncodingTreeNode*                                    node,
        class DataStructures::LinkedList<struct HuffmanEncodingTreeNode*>* huffmanEncodingTreeNodeList
    ) const;

    // NOLINTEND
};

}; // namespace RakNet
