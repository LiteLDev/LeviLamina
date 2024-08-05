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
    // prevent constructor by default
    Schema& operator=(Schema const&);
    Schema(Schema const&);

public:
    // NOLINTBEGIN
    MCAPI Schema();

    MCAPI explicit Schema(class cereal::internal::BasicSchema const&);

    MCAPI Schema(struct cereal::ReflectionCtx const&, uint);

    MCAPI std::vector<std::string> getErrors() const;

    MCAPI std::vector<struct cereal::SerializerContext::LogEntry> const& getLog() const;

    MCAPI bool isDefined() const;

    MCAPI bool load(struct cereal::SchemaReader&, entt::meta_handle, entt::meta_any const&);

    MCAPI struct cereal::internal::Schema& operator=(struct cereal::internal::Schema&&);

    MCAPI bool save(struct cereal::SchemaWriter&, entt::meta_handle);

    MCAPI ~Schema();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void loadImpl(struct cereal::SchemaReader&, entt::meta_any, entt::meta_any const&);

    // NOLINTEND
};

}; // namespace cereal::internal
