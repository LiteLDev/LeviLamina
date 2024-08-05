#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicSaver; }
// clang-format on

namespace cereal {

class JsonSaver : public ::cereal::BasicSaver {
public:
    // prevent constructor by default
    JsonSaver& operator=(JsonSaver const&);
    JsonSaver(JsonSaver const&);
    JsonSaver();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JsonSaver();

    MCAPI std::string toString();

    // NOLINTEND
};

}; // namespace cereal
