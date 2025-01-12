#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

struct Schema {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk75bb3d;
    ::ll::UntypedStorage<8, 56> mUnk5ed1d2;
    // NOLINTEND

public:
    // prevent constructor by default
    Schema& operator=(Schema const&);
    Schema(Schema const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Schema();

    MCAPI explicit Schema(::cereal::internal::BasicSchema const& schema);

    MCAPI Schema(::cereal::ReflectionCtx const& ctx, uint id);

    MCAPI ::std::vector<::std::string> getErrors() const;

    MCFOLD ::std::vector<::cereal::SerializerContext::LogEntry> const& getLog() const;

    MCFOLD bool isDefined() const;

    MCAPI bool load(::cereal::SchemaReader& reader, ::entt::meta_handle data, ::entt::meta_any const& loadContext);

    MCAPI void loadImpl(::cereal::SchemaReader& reader, ::entt::meta_any instance, ::entt::meta_any const& udata);

    MCAPI bool save(::cereal::SchemaWriter& writer, ::entt::meta_handle data);

    MCAPI ~Schema();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cereal::internal::BasicSchema const& schema);

    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx, uint id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
