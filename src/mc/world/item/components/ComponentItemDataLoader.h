#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ComponentItemDataLoader {
public:
    // prevent constructor by default
    ComponentItemDataLoader& operator=(ComponentItemDataLoader const&);
    ComponentItemDataLoader(ComponentItemDataLoader const&);
    ComponentItemDataLoader();

public:
    // NOLINTBEGIN
    // symbol: ??0ComponentItemDataLoader@@QEAA@PEAVComponentItem@@VSemVersion@@AEAUReflectionCtx@cereal@@@Z
    MCAPI ComponentItemDataLoader(class ComponentItem*, class SemVersion, struct cereal::ReflectionCtx&);

    // symbol: ??1ComponentItemDataLoader@@QEAA@XZ
    MCAPI ~ComponentItemDataLoader();

    // NOLINTEND
};
