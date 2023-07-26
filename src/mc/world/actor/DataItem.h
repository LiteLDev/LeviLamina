#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DataItem {

public:
    // prevent constructor by default
    DataItem& operator=(DataItem const&) = delete;
    DataItem(DataItem const&)            = delete;
    DataItem()                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?isDataEqual\@DataItem\@\@UEBA_NAEBV1\@\@Z
     */
    virtual bool isDataEqual(class DataItem const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DATAITEM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DataItem(); // NOLINT
#endif
};
