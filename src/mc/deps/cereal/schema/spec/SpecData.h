#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal::internal {

struct SpecData {
public:
    // SpecData inner types define
    using ConstraintFunc = ::std::function<void(::entt::meta_any const&, ::cereal::SerializerContext&)>;

    using GetterFunc = ::std::function<::entt::meta_any(::entt::meta_any const&)>;

    using SetterFunc = ::std::function<void(::entt::meta_any&, ::entt::meta_any&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<uint, ::std::function<void(::entt::meta_any const&, ::cereal::SerializerContext&)>>>
        mConstraintMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::std::function<void(::entt::meta_any&, ::entt::meta_any&)>>>
        mSetterMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::std::function<::entt::meta_any(::entt::meta_any const&)>>>
        mGetterMap;
    // NOLINTEND
};

} // namespace cereal::internal
