#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterStringMap {

public:
    // prevent constructor by default
    FilterStringMap& operator=(FilterStringMap const&) = delete;
    FilterStringMap()                                  = delete;

public:
    /**
     * @symbol
     * ??0FilterStringMap\@\@QEAA\@V?$initializer_list\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UFilterInputDefinition\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI FilterStringMap(class std::initializer_list<
                          struct std::pair<std::string const, struct FilterInputDefinition>>); // NOLINT
    /**
     * @symbol ??0FilterStringMap\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI FilterStringMap(struct FilterStringMap const&); // NOLINT
    /**
     * @symbol ??4FilterStringMap\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct FilterStringMap& operator=(struct FilterStringMap&&); // NOLINT
    /**
     * @symbol ??1FilterStringMap\@\@QEAA\@XZ
     */
    MCAPI ~FilterStringMap(); // NOLINT
};
