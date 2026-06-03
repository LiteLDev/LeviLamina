#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"
#include "mc/deps/cereal/BinarySchemaWriter.h"

namespace cereal {

class BinarySaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::cereal::BinarySchemaWriter> mWriter;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BinarySaver() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
