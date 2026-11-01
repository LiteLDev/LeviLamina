#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {
// functions
// NOLINTBEGIN
MCNAPI ::std::string_view assetTypeToString(::SharedTypes::AssetType type);

MCNAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCNAPI void bindColor(::cereal::ReflectionCtx& ctx);

MCNAPI void bindEasing(::cereal::ReflectionCtx& ctx);

MCNAPI void bindExtraKnockbackApproach(::cereal::ReflectionCtx& ctx);

MCNAPI void bindFacing(::cereal::ReflectionCtx& ctx);

MCNAPI void bindGlmIVec2(::cereal::ReflectionCtx& ctx);

MCNAPI void bindGlmVec2(::cereal::ReflectionCtx& ctx);

MCNAPI void bindGlmVec3(::cereal::ReflectionCtx& ctx);

MCNAPI void bindHashedString(::cereal::ReflectionCtx& ctx);

MCNAPI void bindItemCooldownType(::cereal::ReflectionCtx& ctx);

MCNAPI void bindJigsawJointType(::cereal::ReflectionCtx& ctx);

MCNAPI void bindKnockbackMode(::cereal::ReflectionCtx& ctx);

MCNAPI void bindPushMode(::cereal::ReflectionCtx& ctx);

MCNAPI void bindSemVersion(::cereal::ReflectionCtx& ctx);

MCNAPI void bindUUID(::cereal::ReflectionCtx& ctx);

MCNAPI void bindVec2(::cereal::ReflectionCtx& ctx);

MCNAPI void bindVec3(::cereal::ReflectionCtx& ctx);

#ifdef LL_PLAT_S
MCNAPI void registerBindingsForExport(::cereal::ReflectionCtx& ctx);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::add_lvalue_reference_t<char const[]> REGEX_RGB_COLOR();
// NOLINTEND

} // namespace SharedTypes
