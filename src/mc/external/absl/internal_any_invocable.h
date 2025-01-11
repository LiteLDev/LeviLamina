#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/FunctionToCall.h"

// auto generated forward declare list
// clang-format off
namespace absl::internal_any_invocable { union TypeErasedState; }
// clang-format on

namespace absl::internal_any_invocable {
// functions
// NOLINTBEGIN
MCFOLD void
EmptyManager(::absl::internal_any_invocable::FunctionToCall, ::absl::internal_any_invocable::TypeErasedState*, ::absl::internal_any_invocable::TypeErasedState*);

MCAPI void LocalManagerTrivial(
    ::absl::internal_any_invocable::FunctionToCall,
    ::absl::internal_any_invocable::TypeErasedState* const from,
    ::absl::internal_any_invocable::TypeErasedState* const to
);

MCAPI void RemoteManagerTrivial(
    ::absl::internal_any_invocable::FunctionToCall,
    ::absl::internal_any_invocable::TypeErasedState* const,
    ::absl::internal_any_invocable::TypeErasedState* const
);
// NOLINTEND

} // namespace absl::internal_any_invocable
