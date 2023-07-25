#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class SummaryEvent; }
// clang-format on

namespace Social::Events {

class IEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOCIAL_EVENTS_IEVENTLISTENER
public:
    IEventListener& operator=(IEventListener const&) = delete;
    IEventListener(IEventListener const&)            = delete;
    IEventListener()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol
     * ?recordSummaryEvent\@IEventListener\@Events\@Social\@\@UEAAXAEBVSummaryEvent\@23\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    virtual void
    recordSummaryEvent(class Social::Events::SummaryEvent const&, class Bedrock::NonOwnerPointer<class AppPlatform> const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SOCIAL_EVENTS_IEVENTLISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IEventListener();
#endif
};

}; // namespace Social::Events
