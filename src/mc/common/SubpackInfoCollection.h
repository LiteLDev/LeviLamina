#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubpackInfoCollection {
public:
    // prevent constructor by default
    SubpackInfoCollection& operator=(SubpackInfoCollection const&);
    SubpackInfoCollection(SubpackInfoCollection const&);
    SubpackInfoCollection();

public:
    // NOLINTBEGIN
    // symbol: ?addSubpackInfo@SubpackInfoCollection@@QEAAX$$QEAUSubpackInfo@@@Z
    MCAPI void addSubpackInfo(struct SubpackInfo&& subpack);

    // symbol:
    // ?getSubpackFolderName@SubpackInfoCollection@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI std::string const& getSubpackFolderName(int) const;

    // symbol:
    // ?getSubpackInfo@SubpackInfoCollection@@QEBAAEBV?$vector@USubpackInfo@@V?$allocator@USubpackInfo@@@std@@@std@@XZ
    MCAPI std::vector<struct SubpackInfo> const& getSubpackInfo() const;

    // NOLINTEND
};
