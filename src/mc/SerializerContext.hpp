/**
 * @file  SerializerContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SerializerContext.
 *
 */
class SerializerContext {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERIALIZERCONTEXT
public:
    class SerializerContext& operator=(class SerializerContext const &) = delete;
    SerializerContext(class SerializerContext const &) = delete;
#endif

public:
    /**
     * @symbol  ??0SerializerContext\@\@QEAA\@XZ
     */
    MCAPI SerializerContext();
    /**
     * @symbol  ?clear\@SerializerContext\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol  ?consumeContext\@SerializerContext\@\@QEAAX$$QEAV1\@\@Z
     */
    MCAPI void consumeContext(class SerializerContext &&);
    /**
     * @symbol  ?detachContext\@SerializerContext\@\@QEAA?AV1\@XZ
     */
    MCAPI class SerializerContext detachContext();
    /**
     * @symbol  ?getErrors\@SerializerContext\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getErrors() const;
    /**
     * @symbol  ?log\@SerializerContext\@\@QEAA?AW4ResultCode\@internal\@reflection\@\@W4234\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class reflection::internal::ResultCode log(enum class reflection::internal::ResultCode, std::string);
    /**
     * @symbol  ?popContext\@SerializerContext\@\@QEAAXXZ
     */
    MCAPI void popContext();
    /**
     * @symbol  ?pushContext\@SerializerContext\@\@QEAAAEAV1\@U?$pair\@W4ContextType\@SerializerContext\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class SerializerContext & pushContext(struct std::pair<enum class SerializerContext::ContextType, std::string>);
    /**
     * @symbol  ??1SerializerContext\@\@QEAA\@XZ
     */
    MCAPI ~SerializerContext();
    /**
     * @symbol  ?contextString\@SerializerContext\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@W4ContextType\@SerializerContext\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@V?$allocator\@U?$pair\@W4ContextType\@SerializerContext\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static std::string contextString(std::vector<struct std::pair<enum class SerializerContext::ContextType, std::string>> const &);

};