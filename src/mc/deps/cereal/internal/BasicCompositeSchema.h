#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

class BasicCompositeSchema : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    BasicCompositeSchema& operator=(BasicCompositeSchema const&);
    BasicCompositeSchema(BasicCompositeSchema const&);
    BasicCompositeSchema();

public:
    // NOLINTBEGIN
    // vIndex: 5, symbol: ??1BasicCompositeSchema@internal@cereal@@UEAA@XZ
    virtual ~BasicCompositeSchema();

    // symbol:
    // ?addDeprecatedMember@BasicCompositeSchema@internal@cereal@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void addDeprecatedMember(std::string const&, std::string const&);

    // symbol:
    // ?addMember@BasicCompositeSchema@internal@cereal@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@USerializerTraits@3@V?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@5@@Z
    MCVAPI void
    addMember(std::string const&, struct cereal::SerializerTraits, std::unique_ptr<class cereal::internal::BasicSchema>);

    // symbol:
    // ?addParent@BasicCompositeSchema@internal@cereal@@UEAAXV?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@std@@@Z
    MCVAPI void addParent(std::unique_ptr<class cereal::internal::BasicSchema>);

    // symbol:
    // ?addRequiredMember@BasicCompositeSchema@internal@cereal@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@USerializerTraits@3@V?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@5@@Z
    MCVAPI void
    addRequiredMember(std::string const&, struct cereal::SerializerTraits, std::unique_ptr<class cereal::internal::BasicSchema>);

    // symbol:
    // ?addSetter@BasicCompositeSchema@internal@cereal@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@5@@Z
    MCVAPI void addSetter(std::string const&, std::string const&, std::unique_ptr<class cereal::internal::BasicSchema>);

    // symbol:
    // ?customError@BasicCompositeSchema@internal@cereal@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void customError(std::string const&, std::string const&);

    // NOLINTEND
};

}; // namespace cereal::internal
