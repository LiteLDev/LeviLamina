#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/code_builder/platform/webview/Extension.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Webview { struct TelemetryCommonProperties; }
// clang-format on

namespace Webview {

class TelemetryExtension : public ::Webview::Extension {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnkb496ab;
    ::ll::UntypedStorage<8, 64>  mUnk8cb07a;
    ::ll::UntypedStorage<8, 112> mUnk584b82;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryExtension& operator=(TelemetryExtension const&);
    TelemetryExtension(TelemetryExtension const&);
    TelemetryExtension();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual void setupMessageSender(::std::function<void(::std::string, ::std::string, ::std::string)>) /*override*/;
#else // LL_PLAT_C
    virtual void
    setupMessageSender(::std::function<void(::std::string, ::std::string, ::std::string)> messageSender) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool shouldProcessMessage(::std::string const&, ::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual bool shouldProcessMessage(::std::string const& _namespace, ::std::string const& func) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool
    onMessageReceived(::std::string const&, ::std::string const&, ::std::optional<::Json::Value>) /*override*/;
#else // LL_PLAT_C
    virtual bool onMessageReceived(
        ::std::string const& func,
        ::std::string const& arguments,
        ::std::optional<::Json::Value>
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void onLoadingBegin(::std::function<void(::std::string)>) /*override*/;
#else // LL_PLAT_C
    virtual void onLoadingBegin(::std::function<void(::std::string)> handler) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit TelemetryExtension(
        ::std::function<void(::Webview::TelemetryCommonProperties&, ::std::string, ::std::string)> log
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::function<void(::Webview::TelemetryCommonProperties&, ::std::string, ::std::string)> log);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $setupMessageSender(::std::function<void(::std::string, ::std::string, ::std::string)> messageSender);

    MCNAPI bool $shouldProcessMessage(::std::string const& _namespace, ::std::string const& func);

    MCNAPI bool
    $onMessageReceived(::std::string const& func, ::std::string const& arguments, ::std::optional<::Json::Value>);

    MCNAPI void $onLoadingBegin(::std::function<void(::std::string)> handler);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Webview
