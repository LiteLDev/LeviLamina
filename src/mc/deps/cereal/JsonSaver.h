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
    // symbol: ??1JsonSaver@cereal@@UEAA@XZ
    MCVAPI ~JsonSaver();

    // symbol: ?toString@JsonSaver@cereal@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString();

    // NOLINTEND
};

}; // namespace cereal
