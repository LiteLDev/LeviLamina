#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct PauseScreenCapabilities {

public:
    // prevent constructor by default
    PauseScreenCapabilities& operator=(PauseScreenCapabilities const&) = delete;
    PauseScreenCapabilities(PauseScreenCapabilities const&)            = delete;
    PauseScreenCapabilities()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?isOfType\@?$TypedScreenCapabilities\@UPauseScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@Bedrock\@\@\@Z
     */
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PAUSESCREENCAPABILITIES
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PauseScreenCapabilities(); // NOLINT
#endif
};
