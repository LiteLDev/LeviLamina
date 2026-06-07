#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/JSONSchemaOutput.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace cereal::internal {

struct ReflectionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::entt::meta_ctx> mMetaCtx;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::tuple<::std::string, ::entt::type_info, ::cereal::JSONSchemaOutput>>>
                                                                          mKnownProperties;
    ::ll::TypedStorage<1, 2, ::std::optional<::cereal::JSONSchemaOutput>> mForcedJSONSchemaOutput;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ReflectionContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static ::cereal::internal::ReflectionContext const& from(::cereal::ReflectionCtx const& ctx);

    MCFOLD static ::cereal::internal::ReflectionContext& from(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
