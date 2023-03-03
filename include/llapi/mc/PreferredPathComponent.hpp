/**
 * @file  PreferredPathComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PreferredPathComponent.
 *
 */
class PreferredPathComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREFERREDPATHCOMPONENT
public:
    class PreferredPathComponent& operator=(class PreferredPathComponent const &) = delete;
    PreferredPathComponent(class PreferredPathComponent const &) = delete;
    PreferredPathComponent() = delete;
#endif

public:
    /**
     * @symbol  ?getPreferredPath\@PreferredPathComponent\@\@QEAAAEBUPreferredPathDescription\@\@AEAVActor\@\@\@Z
     */
    MCAPI struct PreferredPathDescription const & getPreferredPath(class Actor &);
    /**
     * @symbol  ?initFromDefinition\@PreferredPathComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);

};