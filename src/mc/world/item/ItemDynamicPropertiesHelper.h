#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ItemDynamicPropertiesHelper {
// functions
// NOLINTBEGIN
MCNAPI bool clearAllDynamicProperties(::ItemStackBase& item, ::std::string const& collection);

MCNAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> getDynamicProperty(
    ::ItemStackBase const&         item,
    ::std::string const&           key,
    ::std::string const&           collectionName,
    ::cereal::ReflectionCtx const& ctx
);

MCNAPI bool removeDynamicProperty(::ItemStackBase& item, ::std::string const& key, ::std::string const& collectionName);

MCNAPI void setDynamicProperty(
    ::ItemStackBase&                                                  item,
    ::std::string const&                                              key,
    ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value,
    ::std::string const&                                              collectionName,
    ::cereal::ReflectionCtx const&                                    ctx
);
// NOLINTEND

} // namespace ItemDynamicPropertiesHelper
