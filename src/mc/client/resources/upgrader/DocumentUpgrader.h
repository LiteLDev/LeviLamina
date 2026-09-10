#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

class DocumentUpgrader {
public:
    // DocumentUpgrader inner types declare
    // clang-format off
    struct Config;
    class Loaders;
    struct UpgradeResult;
    struct UpgradeStats;
    struct UpgraderLogFileEndPoint;
    // clang-format on

    // DocumentUpgrader inner types define
    enum class UpgradeType : int {};

    struct Config {};

    class Loaders {
    public:
        // Loaders inner types declare
        // clang-format off
        template<int T0> struct LoaderWrapper;
        // clang-format on

        // Loaders inner types define
        template <int T0>
        struct LoaderWrapper {};
    };

    struct UpgradeResult {};

    struct UpgradeStats {};

    struct UpgraderLogFileEndPoint {};
};

} // namespace Bedrock::Resources
