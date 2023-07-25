#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct HudScreenCapabilities {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUDSCREENCAPABILITIES
public:
    HudScreenCapabilities& operator=(HudScreenCapabilities const&) = delete;
    HudScreenCapabilities(HudScreenCapabilities const&)            = delete;
    HudScreenCapabilities()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?isOfType\@?$TypedScreenCapabilities\@UHudScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@Bedrock\@\@\@Z
     */
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const;
};
