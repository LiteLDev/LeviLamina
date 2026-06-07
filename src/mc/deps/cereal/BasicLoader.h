#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicContextOwner.h"
#include "mc/deps/cereal/LoaderConfig.h"
#include "mc/deps/cereal/ResultCode.h"
#include "mc/deps/cereal/schema/Schema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicSerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaReader; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal {

class BasicLoader : public ::cereal::BasicContextOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::cereal::internal::Schema> mSchema;
    ::ll::TypedStorage<1, 1, ::cereal::LoaderConfig>       mConfig;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicLoader();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BasicLoader(
        ::cereal::ReflectionCtx const& reflectionCtx,
        ::cereal::ResultCode           errorCodes,
        ::cereal::LoaderConfig const&  config
    );

    MCFOLD ::cereal::BasicSerializerContext& getLog();

    MCAPI bool loadImpl(
        ::cereal::SchemaReader&                reader,
        ::entt::meta_handle                    handle,
        ::entt::meta_any const&                loadContext,
        ::cereal::internal::BasicSchema const& fallback
    );

    MCAPI void setConfig(::cereal::LoaderConfig const& config);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::cereal::ReflectionCtx const& reflectionCtx,
        ::cereal::ResultCode           errorCodes,
        ::cereal::LoaderConfig const&  config
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
