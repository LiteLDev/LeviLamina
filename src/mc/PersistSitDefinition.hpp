/**
 * @file  PersistSitDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PersistSitDefinition.
 *
 */
struct PersistSitDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERSISTSITDEFINITION
public:
    struct PersistSitDefinition& operator=(struct PersistSitDefinition const &) = delete;
    PersistSitDefinition(struct PersistSitDefinition const &) = delete;
    PersistSitDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@PersistSitDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UPersistSitDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct PersistSitDefinition>> &);

};