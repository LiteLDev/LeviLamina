#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreedableDefinition {
public:
    // prevent constructor by default
    BreedableDefinition& operator=(BreedableDefinition const&);
    BreedableDefinition(BreedableDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BreedableDefinition@@QEAA@XZ
    MCAPI BreedableDefinition();

    // symbol: ?addBreedItem@BreedableDefinition@@QEAAXAEBVItemDescriptor@@@Z
    MCAPI void addBreedItem(class ItemDescriptor const& itemDescriptor);

    // symbol: ?addBreedableType@BreedableDefinition@@QEAAXAEBUBreedableType@@@Z
    MCAPI void addBreedableType(struct BreedableType const& breedType);

    // symbol: ?addEnvironmentRequirement@BreedableDefinition@@QEAAXAEBUEnvironmentRequirement@@@Z
    MCAPI void addEnvironmentRequirement(struct EnvironmentRequirement const& envReq);

    // symbol:
    // ?addParentCentricAttributeBlending@BreedableDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addParentCentricAttributeBlending(std::string const&);

    // symbol: ?initialize@BreedableDefinition@@QEBAXAEAVEntityContext@@AEAVBreedableComponent@@@Z
    MCAPI void initialize(class EntityContext&, class BreedableComponent& component) const;

    // symbol:
    // ?setMutationStrategy@BreedableDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setMutationStrategy(std::string const&);

    // symbol: ??1BreedableDefinition@@QEAA@XZ
    MCAPI ~BreedableDefinition();

    // symbol:
    // ?buildSchema@BreedableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBreedableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BreedableDefinition>>&
            root
    );

    // NOLINTEND
};
