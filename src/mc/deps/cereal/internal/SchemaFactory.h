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
    // symbol: ?context@SchemaFactory@internal@cereal@@QEBAAEAUReflectionCtx@3@XZ
    MCAPI struct cereal::ReflectionCtx& context() const;

    // symbol: ?enumMapping@SchemaFactory@internal@cereal@@QEAAXVSerializerEnumMapping@3@@Z
    MCAPI void enumMapping(class cereal::SerializerEnumMapping);

    // symbol:
    // ?error@SchemaFactory@internal@cereal@@QEAAAEAV123@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cereal::internal::SchemaFactory& error(std::string);

    // symbol:
    // ?error@SchemaFactory@internal@cereal@@QEAAAEAV123@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V45@@Z
    MCAPI class cereal::internal::SchemaFactory& error(std::string const&, std::string);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0SchemaFactory@internal@cereal@@AEAA@AEAUReflectionCtx@2@V?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@5@I@Z
    MCAPI SchemaFactory(
        struct cereal::ReflectionCtx&,
        std::unique_ptr<class cereal::internal::BasicSchema>,
        std::string_view,
        uint
    );

    // symbol:
    // ?doBind@SchemaFactory@internal@cereal@@AEAAAEAV123@V?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@5@_NV?$unique_ptr@VConstraint@cereal@@U?$default_delete@VConstraint@cereal@@@std@@@5@V?$optional@VSerializerEnumMapping@cereal@@@5@@Z
    MCAPI class cereal::internal::SchemaFactory&
    doBind(std::unique_ptr<class cereal::internal::BasicSchema>, std::string_view, bool, std::unique_ptr<class cereal::Constraint>, std::optional<class cereal::SerializerEnumMapping>);

    // symbol:
    // ?doSetter@SchemaFactory@internal@cereal@@AEAAAEAV123@V?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@std@@P6A?AVmeta_type@entt@@AEBVmeta_ctx@7@@ZV?$unique_ptr@VConstraint@cereal@@U?$default_delete@VConstraint@cereal@@@std@@@5@@Z
    MCAPI class cereal::internal::SchemaFactory&
        doSetter(std::unique_ptr<class cereal::internal::BasicSchema>, entt::meta_type (*)(entt::meta_ctx const&), std::unique_ptr<class cereal::Constraint>);

    // NOLINTEND
};

}; // namespace cereal::internal
