/**
 * @file  LevelComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelComponent.
 *
 */
class LevelComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCOMPONENT
public:
    class LevelComponent& operator=(class LevelComponent const &) = delete;
    LevelComponent(class LevelComponent const &) = delete;
    LevelComponent() = delete;
#endif

public:
    /**
     * @hash   2028790576
     * @symbol ??0LevelComponent@@QEAA@V?$unique_ptr@VILevel@@U?$default_delete@VILevel@@@std@@@std@@@Z
     */
    MCAPI LevelComponent(std::unique_ptr<class ILevel>);
    /**
     * @hash   -808215264
     * @symbol ?getLevel@LevelComponent@@QEAAAEAVILevel@@XZ
     */
    MCAPI class ILevel & getLevel();
    /**
     * @hash   -861926989
     * @symbol ??1LevelComponent@@QEAA@XZ
     */
    MCAPI ~LevelComponent();

};