#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HealableDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEALABLEDEFINITION
public:
    HealableDefinition& operator=(HealableDefinition const&) = delete;
    HealableDefinition(HealableDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0HealableDefinition\@\@QEAA\@XZ
     */
    MCAPI HealableDefinition();
    /**
     * @symbol ?addFeedItem\@HealableDefinition\@\@QEAAXAEBUFeedItem\@\@\@Z
     */
    MCAPI void addFeedItem(struct FeedItem const&);
    /**
     * @symbol
     * ?addFeedItemByName\@HealableDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addFeedItemByName(std::string const&);
    /**
     * @symbol
     * ?buildSchema\@HealableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VHealableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HealableDefinition>>&);
};
