/**
 * @file  SideBySideComparisonSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideComparisonSystem.
 *
 */
class SideBySideComparisonSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDECOMPARISONSYSTEM
public:
    class SideBySideComparisonSystem& operator=(class SideBySideComparisonSystem const &) = delete;
    SideBySideComparisonSystem(class SideBySideComparisonSystem const &) = delete;
    SideBySideComparisonSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSideBySideComparisonSystem\@SideBySideComparisonSystem\@\@SA?AUTickingSystemWithInfo\@\@W4SideBySideExtractionId\@\@AEBV?$vector\@IV?$allocator\@I\@std\@\@\@std\@\@\@Z
     */
    MCAPI static struct TickingSystemWithInfo createSideBySideComparisonSystem(enum class SideBySideExtractionId, std::vector<unsigned int> const &);
    /**
     * @symbol  ?createSideBySideExceptionSystems\@SideBySideComparisonSystem\@\@SA?AV?$array\@UTickingSystemWithInfo\@\@$01\@std\@\@XZ
     */
    MCAPI static class std::array<struct TickingSystemWithInfo, 2> createSideBySideExceptionSystems();

};