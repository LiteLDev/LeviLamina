#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

class SchemaFactory {
public:
    // prevent constructor by default
    SchemaFactory& operator=(SchemaFactory const&);
    SchemaFactory(SchemaFactory const&);
    SchemaFactory();

public:
    // NOLINTBEGIN
    MCAPI struct cereal::ReflectionCtx& context() const;

    MCAPI void enumMapping(class cereal::SerializerEnumMapping enumMapping);

    MCAPI class cereal::internal::SchemaFactory& error(std::string customMessage);

    MCAPI class cereal::internal::SchemaFactory& error(std::string const& memberName, std::string customMessage);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI SchemaFactory(
        struct cereal::ReflectionCtx&                        ctx,
        std::unique_ptr<class cereal::internal::BasicSchema> schema,
        std::string_view                                     name,
        uint                                                 id
    );

    MCAPI class cereal::internal::SchemaFactory& doBind(
        std::unique_ptr<class cereal::internal::BasicSchema> schema,
        std::string_view                                     memberName,
        bool                                                 required,
        std::unique_ptr<class cereal::Constraint>            constraint,
        std::optional<class cereal::SerializerEnumMapping>   mapper
    );

    MCAPI class cereal::internal::SchemaFactory& doSetter(
        std::unique_ptr<class cereal::internal::BasicSchema> schema,
        entt::meta_type (*resolve)(entt::meta_ctx const&),
        std::unique_ptr<class cereal::Constraint> constraint
    );

    // NOLINTEND
};

}; // namespace cereal::internal
