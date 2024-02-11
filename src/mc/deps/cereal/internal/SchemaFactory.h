#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { class BasicCompositeSchema; }
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
    // symbol:
    // ?error@SchemaFactory@internal@cereal@@QEAAAEAV123@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cereal::internal::SchemaFactory& error(std::string const&);

    // symbol:
    // ?error@SchemaFactory@internal@cereal@@QEAAAEAV123@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI class cereal::internal::SchemaFactory& error(std::string const&, std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0SchemaFactory@internal@cereal@@AEAA@AEAUReflectionCtx@2@V?$unique_ptr@VBasicCompositeSchema@internal@cereal@@U?$default_delete@VBasicCompositeSchema@internal@cereal@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z
    MCAPI
    SchemaFactory(struct cereal::ReflectionCtx&, std::unique_ptr<class cereal::internal::BasicCompositeSchema>, std::string const&);

    // NOLINTEND
};

}; // namespace cereal::internal
