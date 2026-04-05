#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::MemTags {

enum class MemTagsType : int {
    Unknown          = 0,
    Untagged         = 1,
    System           = 2,
    Logging          = 3,
    Loader           = 4,
    Dom              = 5,
    DOMStatic        = 6,
    Layout           = 7,
    Css              = 8,
    CSSStatic        = 9,
    TaskSystemMemory = 10,
    Display          = 11,
    Profiling        = 12,
    HTMLParser       = 13,
    TempAllocator    = 14,
    PoolAllocator    = 15,
    Dump             = 16,
    Script           = 17,
    Xml              = 18,
    Server           = 19,
    Inspector        = 20,
    Svg              = 21,
    UnityPlugin      = 22,
    UriParser        = 23,
    Media            = 24,
    Json             = 25,
    ScriptEngine     = 26,
    Count            = 27,
};

}
