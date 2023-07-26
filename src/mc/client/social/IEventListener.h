#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Social::Events { class SummaryEvent; }
// clang-format on

namespace Social::Events {

class IEventListener {

public:
    // prevent constructor by default
    IEventListener& operator=(IEventListener const&) = delete;
    IEventListener(IEventListener const&)            = delete;
    IEventListener()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?recordSummaryEvent\@IEventListener\@Events\@Social\@\@UEAAXAEBVSummaryEvent\@23\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    virtual void
    recordSummaryEvent(class Social::Events::SummaryEvent const&, class Bedrock::NonOwnerPointer<class AppPlatform> const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SOCIAL_EVENTS_IEVENTLISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IEventListener(); // NOLINT
#endif
};

}; // namespace Social::Events
