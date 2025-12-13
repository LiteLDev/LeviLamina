#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/webview/Extension.h"

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
    ::ll::UntypedStorage<8, 64>  mUnk23041c;
    ::ll::UntypedStorage<8, 64>  mUnkf89661;
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
    virtual void
    setupMessageSender(::std::function<void(::std::string, ::std::string, ::std::string)> messageSender) /*override*/;

    virtual bool shouldProcessMessage(::std::string const& _namespace, ::std::string const& func) /*override*/;

    virtual bool onMessageReceived(
        ::std::string const&           _namespace,
        ::std::string const&           func,
        ::std::optional<::Json::Value> arguments
    ) /*override*/;

    virtual void onLoadingBegin(::std::function<void(::std::string)> handler) /*override*/;

    virtual ~TelemetryExtension() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit TelemetryExtension(
        ::std::function<void(::Webview::TelemetryCommonProperties&, ::std::string, ::std::string)> log
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void*
    $ctor(::std::function<void(::Webview::TelemetryCommonProperties&, ::std::string, ::std::string)> log);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $setupMessageSender(::std::function<void(::std::string, ::std::string, ::std::string)> messageSender);

    MCNAPI bool $shouldProcessMessage(::std::string const& _namespace, ::std::string const& func);

    MCNAPI bool $onMessageReceived(
        ::std::string const&           _namespace,
        ::std::string const&           func,
        ::std::optional<::Json::Value> arguments
    );

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
