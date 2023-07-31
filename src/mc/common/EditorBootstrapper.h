#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EditorBootstrapper {

public:
    // prevent constructor by default
    EditorBootstrapper& operator=(EditorBootstrapper const&) = delete;
    EditorBootstrapper(EditorBootstrapper const&)            = delete;
    EditorBootstrapper()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getPackCapability\@EditorBootstrapper\@\@SA?AVPackCapability\@\@V?$optional\@_N\@std\@\@\@Z
     */
    MCAPI static class PackCapability getPackCapability(std::optional<bool>);
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
    // NOLINTEND
};
