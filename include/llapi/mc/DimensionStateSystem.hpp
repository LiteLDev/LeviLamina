/**
 * @file  DimensionStateSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "DimensionStateComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DimensionStateSystem.
 *
 */
class DimensionStateSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONSTATESYSTEM
public:
    class DimensionStateSystem& operator=(class DimensionStateSystem const &) = delete;
    DimensionStateSystem(class DimensionStateSystem const &) = delete;
    DimensionStateSystem() = delete;
#endif

public:
    /**
     * @symbol  ?isDimensionReady\@DimensionStateSystem\@\@SA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI static bool isDimensionReady(class EntityContext const &);
    /**
     * @symbol  ?setDimensionState\@DimensionStateSystem\@\@SAXAEAVEntityContext\@\@W4DimensionState\@DimensionStateComponent\@\@\@Z
     */
    MCAPI static void setDimensionState(class EntityContext &, enum class DimensionStateComponent::DimensionState);

};