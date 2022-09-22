/**
 * @file  TickingAreaDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure TickingAreaDescription.
 *
 */
struct TickingAreaDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREADESCRIPTION
public:
    struct TickingAreaDescription& operator=(struct TickingAreaDescription const &) = delete;
    TickingAreaDescription(struct TickingAreaDescription const &) = delete;
    TickingAreaDescription() = delete;
#endif

public:
    /**
     * @hash   -193928882
     * @symbol ?asString@TickingAreaDescription@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string asString() const;
    /**
     * @hash   1613726564
     * @symbol ??1TickingAreaDescription@@QEAA@XZ
     */
    MCAPI ~TickingAreaDescription();

};