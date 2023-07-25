#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/LinkedList.h"

namespace RakNet {

class HuffmanEncodingTree {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_HUFFMANENCODINGTREE
public:
    HuffmanEncodingTree& operator=(HuffmanEncodingTree const&) = delete;
    HuffmanEncodingTree(HuffmanEncodingTree const&)            = delete;
#endif

public:
    /**
     * @symbol ?FreeMemory\@HuffmanEncodingTree\@RakNet\@\@QEAAXXZ
     */
    MCAPI void FreeMemory();
    /**
     * @symbol ?GenerateFromFrequencyTable\@HuffmanEncodingTree\@RakNet\@\@QEAAXQEAI\@Z
     */
    MCAPI void GenerateFromFrequencyTable(unsigned int* const);
    /**
     * @symbol ??0HuffmanEncodingTree\@RakNet\@\@QEAA\@XZ
     */
    MCAPI HuffmanEncodingTree();
    /**
     * @symbol ??1HuffmanEncodingTree\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~HuffmanEncodingTree();

    // private:
    /**
     * @symbol
     * ?InsertNodeIntoSortedList\@HuffmanEncodingTree\@RakNet\@\@AEBAXPEAUHuffmanEncodingTreeNode\@\@PEAV?$LinkedList\@PEAUHuffmanEncodingTreeNode\@\@\@DataStructures\@\@\@Z
     */
    MCAPI void
    InsertNodeIntoSortedList(struct HuffmanEncodingTreeNode*, class DataStructures::LinkedList<struct HuffmanEncodingTreeNode*>*)
        const;

private:
};

}; // namespace RakNet
