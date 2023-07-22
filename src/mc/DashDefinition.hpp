/**
 * @file  DashDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DashDefinition.
 *
 */
class DashDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DASHDEFINITION
public:
    class DashDefinition& operator=(class DashDefinition const &) = delete;
    DashDefinition(class DashDefinition const &) = delete;
    DashDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@DashDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDashComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class DashComponent &) const;
    /**
     * @symbol  ?uninitialize\@DashDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDashComponent\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext &, class DashComponent &) const;
    /**
     * @symbol  ?buildSchema\@DashDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDashDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DashDefinition>> &);

};