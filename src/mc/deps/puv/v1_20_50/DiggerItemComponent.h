#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct DiggerItemComponent {
public:
    // DiggerItemComponent inner types declare
    // clang-format off
    struct BlockInfo;
    // clang-format on

    // DiggerItemComponent inner types define
    struct BlockInfo {
    public:
        // prevent constructor by default
        BlockInfo& operator=(BlockInfo const&);
        BlockInfo(BlockInfo const&);
        BlockInfo();

    public:
        // NOLINTBEGIN
        // symbol: ??1BlockInfo@DiggerItemComponent@v1_20_50@Puv@@QEAA@XZ
        MCAPI ~BlockInfo();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DiggerItemComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0DiggerItemComponent@v1_20_50@Puv@@QEAA@AEBU012@@Z
    MCAPI DiggerItemComponent(struct Puv::v1_20_50::DiggerItemComponent const&);

    // symbol: ??4DiggerItemComponent@v1_20_50@Puv@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct Puv::v1_20_50::DiggerItemComponent& operator=(struct Puv::v1_20_50::DiggerItemComponent&&);

    // symbol: ??4DiggerItemComponent@v1_20_50@Puv@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct Puv::v1_20_50::DiggerItemComponent& operator=(struct Puv::v1_20_50::DiggerItemComponent const&);

    // symbol: ??1DiggerItemComponent@v1_20_50@Puv@@QEAA@XZ
    MCAPI ~DiggerItemComponent();

    // symbol: ?bindType@DiggerItemComponent@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
