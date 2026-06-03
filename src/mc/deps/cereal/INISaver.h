#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"
#include "mc/deps/cereal/INISchemaWriter.h"

namespace cereal {

class INISaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::cereal::INISchemaWriter> mWriter;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INISaver() /*override*/ = default;
    // NOLINTEND
};

} // namespace cereal
