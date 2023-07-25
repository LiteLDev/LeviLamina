#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ShareableDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREABLEDEFINITION
public:
    ShareableDefinition& operator=(ShareableDefinition const&) = delete;
    ShareableDefinition(ShareableDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ShareableDefinition\@\@QEAA\@XZ
     */
    MCAPI ShareableDefinition();
    /**
     * @symbol ?addShareable\@ShareableDefinition\@\@QEAAXAEBUShareable\@\@\@Z
     */
    MCAPI void addShareable(struct Shareable const&);
    /**
     * @symbol
     * ?addShareableByName\@ShareableDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addShareableByName(std::string const&);
    /**
     * @symbol
     * ?buildSchema\@ShareableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VShareableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ShareableDefinition>>&);
};
