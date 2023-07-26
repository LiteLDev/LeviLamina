#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SharedAmplifiers {

public:
    // prevent constructor by default
    SharedAmplifiers& operator=(SharedAmplifiers const&) = delete;
    SharedAmplifiers(SharedAmplifiers const&)            = delete;
    SharedAmplifiers()                                   = delete;

public:
    /**
     * @symbol ?ABSORPTION\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> ABSORPTION; // NOLINT
    /**
     * @symbol ?FATAL_POISON\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> FATAL_POISON; // NOLINT
    /**
     * @symbol ?HARM\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> HARM; // NOLINT
    /**
     * @symbol ?HEAL\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> HEAL; // NOLINT
    /**
     * @symbol ?HUNGER_DURATION\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> HUNGER_DURATION; // NOLINT
    /**
     * @symbol ?HUNGER_VALUE\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> HUNGER_VALUE; // NOLINT
    /**
     * @symbol ?POISON\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> POISON; // NOLINT
    /**
     * @symbol ?REGENERATION\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> REGENERATION; // NOLINT
    /**
     * @symbol ?SATURATION\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> SATURATION; // NOLINT
    /**
     * @symbol ?WITHER\@SharedAmplifiers\@\@2V?$shared_ptr\@VAmplifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class Amplifier> WITHER; // NOLINT
};
