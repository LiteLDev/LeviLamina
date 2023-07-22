/**
 * @file  EditorBootstrapper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class EditorBootstrapper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDITORBOOTSTRAPPER
public:
    class EditorBootstrapper& operator=(class EditorBootstrapper const &) = delete;
    EditorBootstrapper(class EditorBootstrapper const &) = delete;
    EditorBootstrapper() = delete;
#endif

public:
    /**
     * @symbol  ?EDITOR_MODE_ARGUMENT_KEY\@EditorBootstrapper\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EDITOR_MODE_ARGUMENT_KEY;
    /**
     * @symbol  ?EDITOR_MODE_ARGUMENT_VALUE\@EditorBootstrapper\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EDITOR_MODE_ARGUMENT_VALUE;
    /**
     * @symbol  ?getPackCapability\@EditorBootstrapper\@\@SA?AVPackCapability\@\@V?$optional\@_N\@std\@\@\@Z
     */
    MCAPI static class PackCapability getPackCapability(class std::optional<bool>);

};