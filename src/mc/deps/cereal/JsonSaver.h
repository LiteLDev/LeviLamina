#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicSaver; }
namespace cereal { struct ReflectionCtx; }
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
    // vIndex: 0, symbol: ??1JsonSaver@cereal@@UEAA@XZ
    virtual ~JsonSaver();

    // symbol: ??0JsonSaver@cereal@@QEAA@AEBUReflectionCtx@1@DI@Z
    MCAPI JsonSaver(struct cereal::ReflectionCtx const&, char, uint);

    // symbol: ?toString@JsonSaver@cereal@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString();

    // NOLINTEND
};

}; // namespace cereal
