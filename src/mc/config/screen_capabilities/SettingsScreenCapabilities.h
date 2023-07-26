#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct SettingsScreenCapabilities {

public:
    // prevent constructor by default
    SettingsScreenCapabilities& operator=(SettingsScreenCapabilities const&) = delete;
    SettingsScreenCapabilities(SettingsScreenCapabilities const&)            = delete;
    SettingsScreenCapabilities()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?isOfType\@?$TypedScreenCapabilities\@USettingsScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@Bedrock\@\@\@Z
     */
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETTINGSSCREENCAPABILITIES
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SettingsScreenCapabilities(); // NOLINT
#endif
};
