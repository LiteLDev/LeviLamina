#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct PersistSitDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERSISTSITDEFINITION
public:
    PersistSitDefinition& operator=(PersistSitDefinition const&) = delete;
    PersistSitDefinition(PersistSitDefinition const&)            = delete;
    PersistSitDefinition()                                       = delete;
#endif

public:
    /**
     * @symbol
     * ?buildSchema\@PersistSitDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UPersistSitDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct PersistSitDefinition>>&);
};
