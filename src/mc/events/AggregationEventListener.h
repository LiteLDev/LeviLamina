#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IEventListener.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Core { class Path; }
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class AggregationEventListener : public ::Social::Events::IEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk5906f0;
    ::ll::UntypedStorage<8, 8>   mUnk6d36a6;
    ::ll::UntypedStorage<1, 1>   mUnka30829;
    ::ll::UntypedStorage<8, 32>  mUnk11517d;
    ::ll::UntypedStorage<8, 80>  mUnk9aa06e;
    ::ll::UntypedStorage<8, 296> mUnk7e3094;
    ::ll::UntypedStorage<8, 80>  mUnk63885d;
    ::ll::UntypedStorage<8, 64>  mUnk73b293;
    ::ll::UntypedStorage<8, 64>  mUnke6df3f;
    ::ll::UntypedStorage<8, 64>  mUnk99b689;
    ::ll::UntypedStorage<1, 1>   mUnk76b524;
    ::ll::UntypedStorage<4, 4>   mUnkd93415;
    ::ll::UntypedStorage<4, 4>   mUnk2079a4;
    ::ll::UntypedStorage<4, 4>   mUnk5e5b2e;
    ::ll::UntypedStorage<4, 4>   mUnkdb1c91;
    // NOLINTEND

public:
    // prevent constructor by default
    AggregationEventListener& operator=(AggregationEventListener const&);
    AggregationEventListener(AggregationEventListener const&);
    AggregationEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~AggregationEventListener() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~AggregationEventListener() /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void
    recordEvent(::Social::Events::Event const&, ::Bedrock::NonOwnerPointer<::AppPlatform> const&) /*override*/;
#else // LL_PLAT_C
    virtual void recordEvent(
        ::Social::Events::Event const&                   event,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void sendEvents(bool) /*override*/;
#else // LL_PLAT_C
    virtual void sendEvents(bool forceSend) /*override*/;
#endif

    virtual void sendEvent(::Social::Events::Event const&) = 0;

    virtual void stopDebugEventLogging() /*override*/;

    virtual void _flushEventQueue();

    virtual bool _checkAgainstEventAllowlist(::Social::Events::Event const&) const;

    virtual bool _isListenerReadyForEvents() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit AggregationEventListener(::Core::Path const& logFileName);

    MCNAPI AggregationEventListener(
        uint                regBatchSize,
        uint                regSendInterval,
        uint                throttledSendInterval,
        ::Core::Path const& logFileName
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Core::Path const& logFileName);

    MCNAPI void*
    $ctor(uint regBatchSize, uint regSendInterval, uint throttledSendInterval, ::Core::Path const& logFileName);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void
    $recordEvent(::Social::Events::Event const& event, ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);

    MCNAPI void $sendEvents(bool forceSend);

    MCNAPI void $stopDebugEventLogging();

    MCNAPI void $_flushEventQueue();

    MCNAPI bool $_isListenerReadyForEvents() const;
#endif


    // NOLINTEND
};

} // namespace Social::Events
