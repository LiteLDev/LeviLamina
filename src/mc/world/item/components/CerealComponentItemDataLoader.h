#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
struct ComponentItemData_v1_26_0;
namespace cereal { struct ReflectionCtx; }
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

public:
    // prevent constructor by default
    CerealComponentItemDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    CerealComponentItemDataLoader(::BedrockLoadContext const& bedrockLoadContext, ::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BedrockLoadContext const& bedrockLoadContext, ::cereal::ReflectionCtx const& ctx);
    // NOLINTEND
};
