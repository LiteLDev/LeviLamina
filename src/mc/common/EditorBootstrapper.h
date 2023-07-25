#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EditorBootstrapper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDITORBOOTSTRAPPER
public:
    EditorBootstrapper& operator=(EditorBootstrapper const&) = delete;
    EditorBootstrapper(EditorBootstrapper const&)            = delete;
    EditorBootstrapper()                                     = delete;
#endif

public:
    /**
     * @symbol
     * ?EDITOR_MODE_ARGUMENT_KEY\@EditorBootstrapper\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EDITOR_MODE_ARGUMENT_KEY;
    /**
     * @symbol
     * ?EDITOR_MODE_ARGUMENT_VALUE\@EditorBootstrapper\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EDITOR_MODE_ARGUMENT_VALUE;
    /**
     * @symbol ?getPackCapability\@EditorBootstrapper\@\@SA?AVPackCapability\@\@V?$optional\@_N\@std\@\@\@Z
     */
    MCAPI static class PackCapability getPackCapability(class std::optional<bool>);
};
