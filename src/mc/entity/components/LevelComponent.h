#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelComponent {
public:
    // prevent constructor by default
    LevelComponent& operator=(LevelComponent const&);
    LevelComponent(LevelComponent const&);
    LevelComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0LevelComponent@@QEAA@V?$unique_ptr@VILevel@@U?$default_delete@VILevel@@@std@@@std@@@Z
    MCAPI explicit LevelComponent(std::unique_ptr<class ILevel> level);

    // symbol: ?getLevel@LevelComponent@@QEAAAEAVILevel@@XZ
    MCAPI class ILevel& getLevel();

    // symbol: ??1LevelComponent@@QEAA@XZ
    MCAPI ~LevelComponent();

    // NOLINTEND
};
