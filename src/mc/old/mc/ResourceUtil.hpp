/**
 * @file  ResourceUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?pathFromString\@ResourceUtil\@\@SA?AW4ResourceFileSystem\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI static enum class ResourceFileSystem pathFromString(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?stringFromPath\@ResourceUtil\@\@SA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@W4ResourceFileSystem\@\@\@Z
     */
    MCAPI static class gsl::basic_string_span<char const, -1> stringFromPath(enum class ResourceFileSystem);

};