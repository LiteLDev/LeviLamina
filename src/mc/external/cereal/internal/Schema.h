#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/SerializerContext.h"

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
    // prevent constructor by default
    Schema& operator=(Schema const&);
    Schema(Schema const&);

public:
    // NOLINTBEGIN
    MCAPI Schema();

    MCAPI explicit Schema(class cereal::internal::BasicSchema const& schema);

    MCAPI Schema(struct cereal::ReflectionCtx const& ctx, uint id);

    MCAPI std::vector<std::string> getErrors() const;

    MCAPI std::vector<struct cereal::SerializerContext::LogEntry> const& getLog() const;

    MCAPI bool isDefined() const;

    MCAPI bool load(struct cereal::SchemaReader& reader, entt::meta_handle data, entt::meta_any const& loadContext);

    MCAPI struct cereal::internal::Schema& operator=(struct cereal::internal::Schema&&);

    MCAPI bool save(struct cereal::SchemaWriter& writer, entt::meta_handle data);

    MCAPI ~Schema();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void loadImpl(struct cereal::SchemaReader& reader, entt::meta_any instance, entt::meta_any const& udata);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class cereal::internal::BasicSchema const& schema);

    MCAPI void* ctor$(struct cereal::ReflectionCtx const& ctx, uint id);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace cereal::internal
