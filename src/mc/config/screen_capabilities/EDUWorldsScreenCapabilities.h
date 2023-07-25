#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct EDUWorldsScreenCapabilities {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUWORLDSSCREENCAPABILITIES
public:
    EDUWorldsScreenCapabilities& operator=(EDUWorldsScreenCapabilities const&) = delete;
    EDUWorldsScreenCapabilities(EDUWorldsScreenCapabilities const&)            = delete;
    EDUWorldsScreenCapabilities()                                              = delete;
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
     * ?isOfType\@?$TypedScreenCapabilities\@UEDUWorldsScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@Bedrock\@\@\@Z
     */
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const;
};
