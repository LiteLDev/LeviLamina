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
    JsonLoader& operator=(JsonLoader const&) = delete;
    JsonLoader(JsonLoader const&)            = delete;
    JsonLoader()                             = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1JsonLoader@cereal@@UEAA@XZ
    MCVAPI ~JsonLoader();

    // NOLINTEND
};

}; // namespace cereal
