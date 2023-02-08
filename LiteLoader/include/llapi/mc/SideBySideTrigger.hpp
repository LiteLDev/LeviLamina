/**
 * @file  SideBySideTrigger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideTrigger.
 *
 */
class SideBySideTrigger {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDETRIGGER
public:
    class SideBySideTrigger& operator=(class SideBySideTrigger const &) = delete;
    SideBySideTrigger(class SideBySideTrigger const &) = delete;
    SideBySideTrigger() = delete;
#endif

public:
    /**
     * @hash   1018055089
     * @symbol  ?flagUnsupportedComparisonFrame\@SideBySideTrigger\@\@SAXAEAUIActorMovementProxy\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@PEAUSideBySidePartialComparison\@\@\@Z
     */
    MCAPI static void flagUnsupportedComparisonFrame(struct IActorMovementProxy &, class std::basic_string_view<char, struct std::char_traits<char>>, struct SideBySidePartialComparison *);
    /**
     * @hash   580111469
     * @symbol  ?flagUnsupportedComparisonFrame\@SideBySideTrigger\@\@SAXAEAVActor\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@PEAUSideBySidePartialComparison\@\@\@Z
     */
    MCAPI static void flagUnsupportedComparisonFrame(class Actor &, class std::basic_string_view<char, struct std::char_traits<char>>, struct SideBySidePartialComparison *);
    /**
     * @symbol  ?isTriggered\@SideBySideTrigger\@\@SA_NAEAVActor\@\@W4SideBySideExtractionId\@\@\@Z
     */
    MCAPI static bool isTriggered(class Actor &, enum class SideBySideExtractionId);
    /**
     * @hash   1457348182
     * @symbol  ?shouldSimulateLegacy\@SideBySideTrigger\@\@SA_NAEBUIActorMovementProxy\@\@W4SideBySideExtractionId\@\@\@Z
     */
    MCAPI static bool shouldSimulateLegacy(struct IActorMovementProxy const &, enum class SideBySideExtractionId);
    /**
     * @hash   442627354
     * @symbol  ?shouldSimulateLegacy\@SideBySideTrigger\@\@SA_NAEBVActor\@\@W4SideBySideExtractionId\@\@\@Z
     */
    MCAPI static bool shouldSimulateLegacy(class Actor const &, enum class SideBySideExtractionId);
    /**
     * @hash   1412313590
     * @symbol  ?storeSideBySideResult\@SideBySideTrigger\@\@SAXAEAUIActorMovementProxy\@\@W4SideBySideExtractionId\@\@USideBySideResult\@\@\@Z
     */
    MCAPI static void storeSideBySideResult(struct IActorMovementProxy &, enum class SideBySideExtractionId, struct SideBySideResult);
    /**
     * @hash   1187732610
     * @symbol  ?storeSideBySideResult\@SideBySideTrigger\@\@SAXAEAVActor\@\@W4SideBySideExtractionId\@\@USideBySideResult\@\@\@Z
     */
    MCAPI static void storeSideBySideResult(class Actor &, enum class SideBySideExtractionId, struct SideBySideResult);
    /**
     * @hash   -439558539
     * @symbol  ?tryRecordBlockSource\@SideBySideTrigger\@\@SA?AVConditionalRecordingConstBlockSource\@\@_NV?$not_null\@PEBVIConstBlockSource\@\@\@gsl\@\@\@Z
     */
    MCAPI static class ConditionalRecordingConstBlockSource tryRecordBlockSource(bool, class gsl::not_null<class IConstBlockSource const *>);
    /**
     * @hash   1775033499
     * @symbol  ?tryTrigger\@SideBySideTrigger\@\@SA_NAEAUIActorMovementProxy\@\@W4SideBySideExtractionId\@\@W4SideBySideExtractionStep\@\@\@Z
     */
    MCAPI static bool tryTrigger(struct IActorMovementProxy &, enum class SideBySideExtractionId, enum class SideBySideExtractionStep);
    /**
     * @hash   -2126178571
     * @symbol  ?tryTrigger\@SideBySideTrigger\@\@SA_NAEAVActor\@\@W4SideBySideExtractionId\@\@W4SideBySideExtractionStep\@\@\@Z
     */
    MCAPI static bool tryTrigger(class Actor &, enum class SideBySideExtractionId, enum class SideBySideExtractionStep);
    /**
     * @hash   1911298881
     * @symbol  ?tryTriggerCurrentPostSimulation\@SideBySideTrigger\@\@SA_NAEAUIActorMovementProxy\@\@V?$optional\@W4SideBySideExtractionId\@\@\@std\@\@\@Z
     */
    MCAPI static bool tryTriggerCurrentPostSimulation(struct IActorMovementProxy &, class std::optional<enum class SideBySideExtractionId>);
    /**
     * @hash   -1252429307
     * @symbol  ?tryTriggerCurrentPostSimulation\@SideBySideTrigger\@\@SA_NAEAVActor\@\@V?$optional\@W4SideBySideExtractionId\@\@\@std\@\@\@Z
     */
    MCAPI static bool tryTriggerCurrentPostSimulation(class Actor &, class std::optional<enum class SideBySideExtractionId>);
    /**
     * @symbol  ?usesEcsMovement\@SideBySideTrigger\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool usesEcsMovement(struct IActorMovementProxy const &);

//private:
    /**
     * @hash   -2037145985
     * @symbol  ?_setGlobalMode\@SideBySideTrigger\@\@CAXW4GlobalMode\@1\@\@Z
     */
    MCAPI static void _setGlobalMode(enum class SideBySideTrigger::GlobalMode);

private:

};