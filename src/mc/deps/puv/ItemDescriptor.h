#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::Legacy {

struct ItemDescriptor {
public:
    // prevent constructor by default
    ItemDescriptor();

public:
    // NOLINTBEGIN
    MCAPI ItemDescriptor(struct Puv::Legacy::ItemDescriptor&&);

    MCAPI ItemDescriptor(struct Puv::Legacy::ItemDescriptor const&);

    MCAPI struct Puv::Legacy::ItemDescriptor& operator=(struct Puv::Legacy::ItemDescriptor&&);

    MCAPI struct Puv::Legacy::ItemDescriptor& operator=(struct Puv::Legacy::ItemDescriptor const&);

    MCAPI ~ItemDescriptor();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::Legacy
