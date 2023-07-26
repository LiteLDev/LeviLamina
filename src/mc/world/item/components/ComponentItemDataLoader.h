#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

class ComponentItemDataLoader {

public:
    // prevent constructor by default
    ComponentItemDataLoader& operator=(ComponentItemDataLoader const&) = delete;
    ComponentItemDataLoader(ComponentItemDataLoader const&)            = delete;
    ComponentItemDataLoader()                                          = delete;

public:
    /**
     * @symbol ??0ComponentItemDataLoader\@\@QEAA\@PEAVComponentItem\@\@VSemVersion\@\@\@Z
     */
    MCAPI ComponentItemDataLoader(class ComponentItem*, class SemVersion); // NOLINT
    /**
     * @symbol
     * ?load\@ComponentItemDataLoader\@\@QEBA?AV?$LoadResult\@UComponentItemData_v1_20\@\@\@Puv\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Puv::LoadResult<struct ComponentItemData_v1_20> load(std::string const&) const; // NOLINT
    /**
     * @symbol ??1ComponentItemDataLoader\@\@QEAA\@XZ
     */
    MCAPI ~ComponentItemDataLoader(); // NOLINT
};
