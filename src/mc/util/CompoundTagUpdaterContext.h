#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CompoundTagUpdaterResult.h"

class CompoundTagUpdaterContext {
public:
    // prevent constructor by default
    CompoundTagUpdaterContext& operator=(CompoundTagUpdaterContext const&);
    CompoundTagUpdaterContext(CompoundTagUpdaterContext const&);

public:
    // NOLINTBEGIN
    // symbol: ??0CompoundTagUpdaterContext@@QEAA@XZ
    MCAPI CompoundTagUpdaterContext();

    // symbol: ?addUpdater@CompoundTagUpdaterContext@@QEAA?AVCompoundTagUpdaterNodeBuilder@@EEE@Z
    MCAPI class CompoundTagUpdaterNodeBuilder addUpdater(uchar, uchar, uchar);

    // symbol: ?sortUpdaters@CompoundTagUpdaterContext@@QEAAXXZ
    MCAPI void sortUpdaters();

    // symbol: ?update@CompoundTagUpdaterContext@@QEAA?AW4CompoundTagUpdaterResult@@AEAVCompoundTag@@I@Z
    MCAPI ::CompoundTagUpdaterResult update(class CompoundTag&, uint);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?comparisonPredicate@CompoundTagUpdaterContext@@CA_NAEBV?$unique_ptr@VCompoundTagUpdater@@U?$default_delete@VCompoundTagUpdater@@@std@@@std@@0@Z
    MCAPI static bool
    comparisonPredicate(std::unique_ptr<class CompoundTagUpdater> const&, std::unique_ptr<class CompoundTagUpdater> const&);

    // NOLINTEND
};
