#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct IconItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_60 {

struct IconItemComponent {
public:
    // prevent constructor by default
    IconItemComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0IconItemComponent@v1_20_60@Puv@@QEAA@$$QEAU012@@Z
    MCAPI IconItemComponent(struct Puv::v1_20_60::IconItemComponent&&);

    // symbol: ??0IconItemComponent@v1_20_60@Puv@@QEAA@AEBU012@@Z
    MCAPI IconItemComponent(struct Puv::v1_20_60::IconItemComponent const&);

    // symbol: ??4IconItemComponent@v1_20_60@Puv@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct Puv::v1_20_60::IconItemComponent& operator=(struct Puv::v1_20_60::IconItemComponent&&);

    // symbol: ??4IconItemComponent@v1_20_60@Puv@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct Puv::v1_20_60::IconItemComponent& operator=(struct Puv::v1_20_60::IconItemComponent const&);

    // symbol: ??1IconItemComponent@v1_20_60@Puv@@QEAA@XZ
    MCAPI ~IconItemComponent();

    // symbol: ?bindType@IconItemComponent@v1_20_60@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol:
    // ?upgrade@IconItemComponent@v1_20_60@Puv@@SAXAEAV?$optional@UIconItemComponent@v1_20_50@Puv@@@std@@AEAV?$optional@UIconItemComponent@v1_20_60@Puv@@@5@@Z
    MCAPI static void
    upgrade(std::optional<struct Puv::v1_20_50::IconItemComponent>&, std::optional<struct Puv::v1_20_60::IconItemComponent>&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_60
