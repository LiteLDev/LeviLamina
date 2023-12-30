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
    // symbol: ?FreeMemory@HuffmanEncodingTree@RakNet@@QEAAXXZ
    MCAPI void FreeMemory();

    // symbol: ?GenerateFromFrequencyTable@HuffmanEncodingTree@RakNet@@QEAAXQEAI@Z
    MCAPI void GenerateFromFrequencyTable(uint* const frequencyTable);

    // symbol: ??0HuffmanEncodingTree@RakNet@@QEAA@XZ
    MCAPI HuffmanEncodingTree();

    // symbol: ??1HuffmanEncodingTree@RakNet@@QEAA@XZ
    MCAPI ~HuffmanEncodingTree();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?InsertNodeIntoSortedList@HuffmanEncodingTree@RakNet@@AEBAXPEAUHuffmanEncodingTreeNode@@PEAV?$LinkedList@PEAUHuffmanEncodingTreeNode@@@DataStructures@@@Z
    MCAPI void InsertNodeIntoSortedList(
        struct HuffmanEncodingTreeNode*                                    node,
        class DataStructures::LinkedList<struct HuffmanEncodingTreeNode*>* huffmanEncodingTreeNodeList
    ) const;

    // NOLINTEND
};

}; // namespace RakNet
