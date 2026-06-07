#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class HitResult;
class Vec3;
// clang-format on

namespace HitDetection {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::HitResult> getHitResults(
    ::BlockSource&                                            region,
    ::Vec3 const&                                             from,
    ::Vec3 const&                                             to,
    ::brstd::function_ref<bool(::Actor&, ::Actor*, ::Actor*)> isValidHit,
    ::brstd::function_ref<float(::Actor const&)>              getCollisionMargin
);

MCNAPI ::std::vector<::HitResult> getHitResults(
    ::BlockSource&                                            region,
    ::Actor&                                                  source,
    ::Actor*                                                  owner,
    ::Vec3 const&                                             from,
    ::Vec3 const&                                             to,
    ::brstd::function_ref<bool(::Actor&, ::Actor*, ::Actor*)> isValidHit,
    ::brstd::function_ref<float(::Actor const&)>              getCollisionMargin
);
// NOLINTEND

} // namespace HitDetection
