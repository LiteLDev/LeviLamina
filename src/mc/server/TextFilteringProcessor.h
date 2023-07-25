#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TextFilteringProcessor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTFILTERINGPROCESSOR
public:
    TextFilteringProcessor& operator=(TextFilteringProcessor const&) = delete;
    TextFilteringProcessor(TextFilteringProcessor const&)            = delete;
    TextFilteringProcessor()                                         = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTFILTERINGPROCESSOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TextFilteringProcessor();
#endif
};
