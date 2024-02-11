#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ResultAny {
public:
    // prevent constructor by default
    ResultAny& operator=(ResultAny const&);
    ResultAny(ResultAny const&);
    ResultAny();

public:
    // NOLINTBEGIN
    // symbol: ??1ResultAny@Scripting@@QEAA@XZ
    MCAPI ~ResultAny();

    // symbol: ?makeErrorFromAny@ResultAny@Scripting@@SA?AV12@$$QEAVmeta_any@entt@@@Z
    MCAPI static class Scripting::ResultAny makeErrorFromAny(entt::meta_any&&);

    // symbol: ?makeResultFromAny@ResultAny@Scripting@@SA?AV12@AEBVmeta_any@entt@@@Z
    MCAPI static class Scripting::ResultAny makeResultFromAny(entt::meta_any const&);

    // NOLINTEND
};

}; // namespace Scripting
