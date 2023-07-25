#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCOMPONENT
public:
    LevelComponent& operator=(LevelComponent const&) = delete;
    LevelComponent(LevelComponent const&)            = delete;
    LevelComponent()                                 = delete;
#endif

public:
    /**
     * @symbol ??0LevelComponent\@\@QEAA\@V?$unique_ptr\@VILevel\@\@U?$default_delete\@VILevel\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI LevelComponent(std::unique_ptr<class ILevel>);
    /**
     * @symbol ?getLevel\@LevelComponent\@\@QEAAAEAVILevel\@\@XZ
     */
    MCAPI class ILevel& getLevel();
    /**
     * @symbol ??1LevelComponent\@\@QEAA\@XZ
     */
    MCAPI ~LevelComponent();
};
