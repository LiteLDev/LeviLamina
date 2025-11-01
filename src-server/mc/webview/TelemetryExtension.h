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
    ::ll::UntypedStorage<8, 64> mUnk23041c;
    ::ll::UntypedStorage<8, 64> mUnkf89661;
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
    // vIndex: 1
    virtual void setupMessageSender(::std::function<void(::std::string, ::std::string, ::std::string)>) /*override*/;

    // vIndex: 2
    virtual bool shouldProcessMessage(::std::string const&, ::std::string const&) /*override*/;

    // vIndex: 3
    virtual bool onMessageReceived(::std::string const&, ::std::string const&, ::std::optional<::Json::Value>) /*override*/;

    // vIndex: 6
    virtual void onLoadingBegin(::std::function<void(::std::string)>) /*override*/;

    // vIndex: 0
    virtual ~TelemetryExtension() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
