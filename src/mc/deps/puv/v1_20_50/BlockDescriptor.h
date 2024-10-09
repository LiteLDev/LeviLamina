#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct BlockDescriptor {
public:
    // BlockDescriptor inner types declare
    // clang-format off
    struct Compound;
    // clang-format on

    // BlockDescriptor inner types define
    struct Compound {
    public:
        // prevent constructor by default
        Compound(Compound const&);
        Compound();

    public:
        // NOLINTBEGIN
        MCAPI void fromInt(int i);

        MCAPI void fromString(std::string str);

        MCAPI struct Puv::v1_20_50::BlockDescriptor::Compound&
        operator=(struct Puv::v1_20_50::BlockDescriptor::Compound const&);

        MCAPI ~Compound();

        MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

        // NOLINTEND
    };

public:
    // NOLINTBEGIN
    MCAPI BlockDescriptor();

    MCAPI BlockDescriptor(struct Puv::v1_20_50::BlockDescriptor&&);

    MCAPI BlockDescriptor(struct Puv::v1_20_50::BlockDescriptor const&);

    MCAPI struct Puv::v1_20_50::BlockDescriptor& operator=(struct Puv::v1_20_50::BlockDescriptor&&);

    MCAPI struct Puv::v1_20_50::BlockDescriptor& operator=(struct Puv::v1_20_50::BlockDescriptor const&);

    MCAPI ~BlockDescriptor();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
