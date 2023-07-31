#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Description.h"

class TrustDescription : public ::Description {

public:
    // prevent constructor by default
    TrustDescription& operator=(TrustDescription const&) = delete;
    TrustDescription(TrustDescription const&)            = delete;
    TrustDescription()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TrustDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRUSTDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TrustDescription();
#endif
    // NOLINTEND
};
