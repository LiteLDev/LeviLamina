#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct DefaultScreenCapabilities {

public:
    // prevent constructor by default
    DefaultScreenCapabilities& operator=(DefaultScreenCapabilities const&) = delete;
    DefaultScreenCapabilities(DefaultScreenCapabilities const&)            = delete;
    DefaultScreenCapabilities()                                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?isOfType\@?$TypedScreenCapabilities\@UDefaultScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@Bedrock\@\@\@Z
     */
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const; // NOLINT
};
