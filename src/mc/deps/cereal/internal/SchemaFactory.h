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

    MCAPI void enumMapping(class cereal::SerializerEnumMapping);

    MCAPI class cereal::internal::SchemaFactory& error(std::string);

    MCAPI class cereal::internal::SchemaFactory& error(std::string const&, std::string);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI SchemaFactory(
        struct cereal::ReflectionCtx&,
        std::unique_ptr<class cereal::internal::BasicSchema>,
        std::string_view,
        uint
    );

    MCAPI class cereal::internal::SchemaFactory&
    doBind(std::unique_ptr<class cereal::internal::BasicSchema>, std::string_view, bool, std::unique_ptr<class cereal::Constraint>, std::optional<class cereal::SerializerEnumMapping>);

    MCAPI class cereal::internal::SchemaFactory&
        doSetter(std::unique_ptr<class cereal::internal::BasicSchema>, entt::meta_type (*)(entt::meta_ctx const&), std::unique_ptr<class cereal::Constraint>);

    // NOLINTEND
};

}; // namespace cereal::internal
