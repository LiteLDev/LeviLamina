#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicLoader.h"
#include "mc/deps/cereal/BinarySchemaReader.h"

namespace cereal {

class BinaryLoader : public ::cereal::BasicLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::cereal::BinarySchemaReader> mReader;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BinaryLoader() /*override*/;
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
