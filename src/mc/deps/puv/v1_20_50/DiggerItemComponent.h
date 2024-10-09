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
        MCAPI ~BlockInfo();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DiggerItemComponent();

public:
    // NOLINTBEGIN
    MCAPI DiggerItemComponent(struct Puv::v1_20_50::DiggerItemComponent const&);

    MCAPI struct Puv::v1_20_50::DiggerItemComponent& operator=(struct Puv::v1_20_50::DiggerItemComponent&&);

    MCAPI struct Puv::v1_20_50::DiggerItemComponent& operator=(struct Puv::v1_20_50::DiggerItemComponent const&);

    MCAPI ~DiggerItemComponent();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
