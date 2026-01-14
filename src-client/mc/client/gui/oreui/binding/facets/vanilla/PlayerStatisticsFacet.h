#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct PlayerStatisticsFacet {
public:
    // PlayerStatisticsFacet inner types declare
    // clang-format off
    struct FacetPlayerStatisticData;
    struct Statistic;
    struct StatisticIconOreUI;
    // clang-format on

    // PlayerStatisticsFacet inner types define
    enum class StatisticIcon : int {};

    enum class StatisticIconstruct : uint {};

    struct FacetPlayerStatisticData {};

    struct Statistic {};

    struct StatisticIconOreUI {
    public:
        // StatisticIconOreUI inner types declare
        // clang-format off
        struct PlayerStatisticsFacet;
        // clang-format on

        // StatisticIconOreUI inner types define
        struct PlayerStatisticsFacet {
        public:
            // PlayerStatisticsFacet inner types define
            enum class Statistic : uint {};
        };
    };
};

} // namespace OreUI
