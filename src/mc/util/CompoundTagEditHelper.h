#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagEditHelper {
public:
    // prevent constructor by default
    CompoundTagEditHelper& operator=(CompoundTagEditHelper const&);
    CompoundTagEditHelper(CompoundTagEditHelper const&);
    CompoundTagEditHelper();

public:
    // NOLINTBEGIN
    // symbol: ?getParent@CompoundTagEditHelper@@QEBAPEBVCompoundTag@@XZ
    MCAPI class CompoundTag const* getParent() const;

    // symbol:
    // ?replaceWith@CompoundTagEditHelper@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@3@@Z
    MCAPI void replaceWith(std::string const& newTagName, std::unique_ptr<class Tag> newTag);

    // symbol: ??1CompoundTagEditHelper@@QEAA@XZ
    MCAPI ~CompoundTagEditHelper();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?pushChild@CompoundTagEditHelper@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void pushChild(std::string const& tagName);

    // NOLINTEND
};
