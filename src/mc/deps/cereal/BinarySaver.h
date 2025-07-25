#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"

namespace cereal {

class BinarySaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk40d3c8;
    // NOLINTEND

public:
    // prevent constructor by default
    BinarySaver& operator=(BinarySaver const&);
    BinarySaver(BinarySaver const&);
    BinarySaver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BinarySaver() /*override*/ = default;
    // NOLINTEND
};

} // namespace cereal
