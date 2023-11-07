#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
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
    // vIndex: 4, symbol: ??1BasicCompositeSchema@internal@cereal@@UEAA@XZ
    virtual ~BasicCompositeSchema();

    // vIndex: 6, symbol: ?description@BasicCompositeSchema@internal@cereal@@UEBA?AUSchemaDescription@3@XZ
    virtual struct cereal::SchemaDescription description() const;

    // vIndex: 7, symbol:
    // ?addParent@BasicCompositeSchema@internal@cereal@@UEAAXV?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@std@@@Z
    virtual void addParent(std::unique_ptr<class cereal::internal::BasicSchema>);

    // vIndex: 8, symbol:
    // ?addSetter@BasicCompositeSchema@internal@cereal@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@5@@Z
    virtual void
    addSetter(std::string const&, std::string const&, std::unique_ptr<class cereal::internal::BasicSchema>);

    // vIndex: 9, symbol:
    // ?addMember@BasicCompositeSchema@internal@cereal@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@USerializerTraits@3@V?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@5@@Z
    virtual void
    addMember(std::string const&, struct cereal::SerializerTraits, std::unique_ptr<class cereal::internal::BasicSchema>);

    // vIndex: 10, symbol:
    // ?addRequiredMember@BasicCompositeSchema@internal@cereal@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@USerializerTraits@3@V?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@5@@Z
    virtual void
    addRequiredMember(std::string const&, struct cereal::SerializerTraits, std::unique_ptr<class cereal::internal::BasicSchema>);

    // vIndex: 11, symbol:
    // ?addDeprecatedMember@BasicCompositeSchema@internal@cereal@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual void addDeprecatedMember(std::string const&, std::string const&);

    // vIndex: 12, symbol:
    // ?customError@BasicCompositeSchema@internal@cereal@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual void customError(std::string const&, std::string const&);

    // symbol: ??0BasicCompositeSchema@internal@cereal@@QEAA@USerializerTraits@2@AEBUReflectionCtx@2@@Z
    MCAPI BasicCompositeSchema(struct cereal::SerializerTraits, struct cereal::ReflectionCtx const&);

    // NOLINTEND
};

}; // namespace cereal::internal
