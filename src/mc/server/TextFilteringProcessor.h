#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TextFilteringProcessor {

public:
    // prevent constructor by default
    TextFilteringProcessor& operator=(TextFilteringProcessor const&) = delete;
    TextFilteringProcessor(TextFilteringProcessor const&)            = delete;
    TextFilteringProcessor()                                         = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTFILTERINGPROCESSOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TextFilteringProcessor(); // NOLINT
#endif
};
