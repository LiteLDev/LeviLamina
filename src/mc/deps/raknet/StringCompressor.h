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
    MCAPI StringCompressor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void AddReference();

    MCAPI static void RemoveReference();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::RakNet::StringCompressor*& instance();

    MCAPI static int& referenceCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace RakNet
