#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct CodeScreenCapabilities {

public:
    // prevent constructor by default
    CodeScreenCapabilities& operator=(CodeScreenCapabilities const&) = delete;
    CodeScreenCapabilities(CodeScreenCapabilities const&)            = delete;
    CodeScreenCapabilities()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?isOfType\@?$TypedScreenCapabilities\@UCodeScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@Bedrock\@\@\@Z
     */
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CODESCREENCAPABILITIES
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CodeScreenCapabilities(); // NOLINT
#endif
};
