#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class Map; }
namespace RakNet { class HuffmanEncodingTree; }
// clang-format on

namespace RakNet {

class StringCompressor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> huffmanEncodingTrees;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StringCompressor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void RemoveReference();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::RakNet::StringCompressor*& instance();

    MCNAPI static int& referenceCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace RakNet
