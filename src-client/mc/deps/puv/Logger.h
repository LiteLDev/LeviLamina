#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv {

struct Logger {
public:
    // Logger inner types declare
    // clang-format off
    struct ParseLogEntry;
    struct UpgradeLogEntry;
    struct ValidationLogEntry;
    // clang-format on

    // Logger inner types define
    enum class UpgradeResultCode : uint {};

    enum class ValidationResultCode : uint {};

    struct ParseLogEntry {};

    struct UpgradeLogEntry {};

    struct ValidationLogEntry {};
};

} // namespace Puv
