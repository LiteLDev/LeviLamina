/**
 * @file  ResourceUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourceUtil.
 *
 */
class ResourceUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEUTIL
public:
    class ResourceUtil& operator=(class ResourceUtil const &) = delete;
    ResourceUtil(class ResourceUtil const &) = delete;
    ResourceUtil() = delete;
#endif

public:
    /**
     * @symbol ?pathFromString\@ResourceUtil\@\@SA?AW4ResourceFileSystem\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI static enum class ResourceFileSystem pathFromString(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ?stringFromPath\@ResourceUtil\@\@SA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@W4ResourceFileSystem\@\@\@Z
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> stringFromPath(enum class ResourceFileSystem);

};
