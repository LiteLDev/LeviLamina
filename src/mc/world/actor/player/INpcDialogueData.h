#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct INpcDialogueData {

public:
    // prevent constructor by default
    INpcDialogueData& operator=(INpcDialogueData const&) = delete;
    INpcDialogueData(INpcDialogueData const&)            = delete;
    INpcDialogueData()                                   = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INPCDIALOGUEDATA
    /**
     * @symbol
     * ?getRawDialogueText\@INpcDialogueData\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string const& getRawDialogueText() const;
    /**
     * @symbol ?isRemoteFire\@INpcDialogueData\@\@UEAA_NXZ
     */
    MCVAPI bool isRemoteFire();
#endif
    // NOLINTEND
};
