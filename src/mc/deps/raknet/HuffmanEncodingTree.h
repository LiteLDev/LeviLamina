#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/LinkedList.h"

// auto generated forward declare list
// clang-format off
struct HuffmanEncodingTreeNode;
// clang-format on

namespace RakNet {

class HuffmanEncodingTree {

public:
    // prevent constructor by default
    HuffmanEncodingTree& operator=(HuffmanEncodingTree const&) = delete;
    HuffmanEncodingTree(HuffmanEncodingTree const&)            = delete;

public:
    /**
     * @symbol ?FreeMemory\@HuffmanEncodingTree\@RakNet\@\@QEAAXXZ
     */
    MCAPI void FreeMemory(); // NOLINT
    /**
     * @symbol ?GenerateFromFrequencyTable\@HuffmanEncodingTree\@RakNet\@\@QEAAXQEAI\@Z
     */
    MCAPI void GenerateFromFrequencyTable(unsigned int* const); // NOLINT
    /**
     * @symbol ??0HuffmanEncodingTree\@RakNet\@\@QEAA\@XZ
     */
    MCAPI HuffmanEncodingTree(); // NOLINT
    /**
     * @symbol ??1HuffmanEncodingTree\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~HuffmanEncodingTree(); // NOLINT

    // private:
    /**
     * @symbol
     * ?InsertNodeIntoSortedList\@HuffmanEncodingTree\@RakNet\@\@AEBAXPEAUHuffmanEncodingTreeNode\@\@PEAV?$LinkedList\@PEAUHuffmanEncodingTreeNode\@\@\@DataStructures\@\@\@Z
     */
    MCAPI void
    InsertNodeIntoSortedList(struct HuffmanEncodingTreeNode*, class DataStructures::LinkedList<struct HuffmanEncodingTreeNode*>*)
        const; // NOLINT

private:
};

}; // namespace RakNet
