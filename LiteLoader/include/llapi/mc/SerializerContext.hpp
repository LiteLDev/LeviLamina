/**
 * @file  SerializerContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -965322167
     * @symbol ??0SerializerContext@@QEAA@XZ
     */
    MCAPI SerializerContext();
    /**
     * @hash   264414735
     * @symbol ?clear@SerializerContext@@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   2123414728
     * @symbol ?consumeContext@SerializerContext@@QEAAX$$QEAV1@@Z
     */
    MCAPI void consumeContext(class SerializerContext &&);
    /**
     * @hash   461750174
     * @symbol ?detachContext@SerializerContext@@QEAA?AV1@XZ
     */
    MCAPI class SerializerContext detachContext();
    /**
     * @hash   -1122678260
     * @symbol ?error@SerializerContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void error(std::string const &);
    /**
     * @hash   -764958658
     * @symbol ??4SerializerContext@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class SerializerContext & operator=(class SerializerContext &&);
    /**
     * @hash   735426527
     * @symbol ?popContext@SerializerContext@@QEAAXXZ
     */
    MCAPI void popContext();
    /**
     * @hash   1386193275
     * @symbol ?pushContext@SerializerContext@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class SerializerContext & pushContext(std::string const &);
    /**
     * @hash   1430540409
     * @symbol ??1SerializerContext@@QEAA@XZ
     */
    MCAPI ~SerializerContext();

};