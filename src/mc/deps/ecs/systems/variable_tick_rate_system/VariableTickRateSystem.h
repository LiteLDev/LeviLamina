#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
struct SystemCategory;
namespace VariableTickRateSystem { struct VariableTickController; }
// clang-format on

namespace VariableTickRateSystem {
// functions
// NOLINTBEGIN
MCNAPI void initVariableTickRateComponent(::EntityRegistry& registry);

MCNAPI void variableRealTick(
    ::VariableTickRateSystem::VariableTickController&                  controller,
    ::brstd::function_ref<void(::Bedrock::typeid_t<::SystemCategory>)> tickCategory
);

#ifdef LL_PLAT_C
MCNAPI void visitVariableCategories(::brstd::function_ref<void(::Bedrock::typeid_t<::SystemCategory>, uchar)> visitor);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::array<uchar, 20> const& TICK_TABLE();
// NOLINTEND

} // namespace VariableTickRateSystem
