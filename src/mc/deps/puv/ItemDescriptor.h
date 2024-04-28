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
    // symbol: ??0ItemDescriptor@Legacy@Puv@@QEAA@$$QEAU012@@Z
    MCAPI ItemDescriptor(struct Puv::Legacy::ItemDescriptor&&);

    // symbol: ??0ItemDescriptor@Legacy@Puv@@QEAA@AEBU012@@Z
    MCAPI ItemDescriptor(struct Puv::Legacy::ItemDescriptor const&);

    // symbol: ??4ItemDescriptor@Legacy@Puv@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct Puv::Legacy::ItemDescriptor& operator=(struct Puv::Legacy::ItemDescriptor&&);

    // symbol: ??4ItemDescriptor@Legacy@Puv@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct Puv::Legacy::ItemDescriptor& operator=(struct Puv::Legacy::ItemDescriptor const&);

    // symbol: ??1ItemDescriptor@Legacy@Puv@@QEAA@XZ
    MCAPI ~ItemDescriptor();

    // symbol: ?bindType@ItemDescriptor@Legacy@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::Legacy
