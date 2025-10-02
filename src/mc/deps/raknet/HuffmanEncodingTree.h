#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct HuffmanEncodingTreeNode;
// clang-format on

namespace RakNet {

class HuffmanEncodingTree {
public:
    // HuffmanEncodingTree inner types declare
    // clang-format off
    struct CharacterEncoding;
    // clang-format on

    // HuffmanEncodingTree inner types define
    struct CharacterEncoding {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uchar*> encoding;
        ::ll::TypedStorage<2, 2, ushort> bitLength;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HuffmanEncodingTreeNode*>                               root;
    ::ll::TypedStorage<8, 4096, ::RakNet::HuffmanEncodingTree::CharacterEncoding[256]> encodingTable;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void FreeMemory();

    MCAPI void GenerateFromFrequencyTable(uint* const frequencyTable);
    // NOLINTEND
};

} // namespace RakNet
