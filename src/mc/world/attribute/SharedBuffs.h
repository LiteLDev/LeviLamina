#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SharedBuffs {

public:
    // prevent constructor by default
    SharedBuffs& operator=(SharedBuffs const&) = delete;
    SharedBuffs(SharedBuffs const&)            = delete;
    SharedBuffs()                              = delete;

public:
    /**
     * @symbol ?ABSORPTION\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> ABSORPTION; // NOLINT
    /**
     * @symbol ?FATAL_POISON\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> FATAL_POISON; // NOLINT
    /**
     * @symbol ?FOOD_POSIONING\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> FOOD_POSIONING; // NOLINT
    /**
     * @symbol ?HARM\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> HARM; // NOLINT
    /**
     * @symbol ?HEAL\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> HEAL; // NOLINT
    /**
     * @symbol ?POISON\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> POISON; // NOLINT
    /**
     * @symbol ?PUFFER_POSIONING\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> PUFFER_POSIONING; // NOLINT
    /**
     * @symbol ?REGENERATION\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> REGENERATION; // NOLINT
    /**
     * @symbol ?SATURATION\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> SATURATION; // NOLINT
    /**
     * @symbol ?WITHER\@SharedBuffs\@\@2V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeBuff> WITHER; // NOLINT
};
