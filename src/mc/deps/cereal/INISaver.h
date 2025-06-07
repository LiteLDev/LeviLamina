#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"

namespace cereal {

class INISaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnkb9979a;
    // NOLINTEND

public:
    // prevent constructor by default
    INISaver& operator=(INISaver const&);
    INISaver(INISaver const&);
    INISaver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~INISaver() /*override*/ = default;
    // NOLINTEND
};

} // namespace cereal
