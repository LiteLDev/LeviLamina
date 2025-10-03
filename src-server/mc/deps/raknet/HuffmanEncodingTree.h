#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        ::ll::UntypedStorage<8, 8> mUnkb5d9ec;
        ::ll::UntypedStorage<2, 2> mUnk85bf63;
        // NOLINTEND

    public:
        // prevent constructor by default
        CharacterEncoding& operator=(CharacterEncoding const&);
        CharacterEncoding(CharacterEncoding const&);
        CharacterEncoding();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>    mUnk9c3a19;
    ::ll::UntypedStorage<8, 4096> mUnkffa0a4;
    // NOLINTEND

public:
    // prevent constructor by default
    HuffmanEncodingTree& operator=(HuffmanEncodingTree const&);
    HuffmanEncodingTree(HuffmanEncodingTree const&);
    HuffmanEncodingTree();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void FreeMemory();

    MCAPI void GenerateFromFrequencyTable(uint* const frequencyTable);
    // NOLINTEND
};

} // namespace RakNet
