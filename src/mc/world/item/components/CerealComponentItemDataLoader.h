#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
struct ComponentItemData_v1_26_0;
// clang-format on

class CerealComponentItemDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<::ComponentItemData_v1_26_0, ::BedrockLoadContext, nullptr_t, ::ComponentItemData_v1_26_0>>
        mLoader;
    // NOLINTEND
};
