#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicLoader.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicLoader; }
// clang-format on

namespace cereal {

class JsonLoader : public ::cereal::BasicLoader {
public:
    // prevent constructor by default
    JsonLoader& operator=(JsonLoader const&);
    JsonLoader(JsonLoader const&);
    JsonLoader();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1JsonLoader@cereal@@UEAA@XZ
    virtual ~JsonLoader();

    // NOLINTEND
};

}; // namespace cereal
