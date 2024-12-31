#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Webview {

struct Extension {
public:
    // prevent constructor by default
    Extension& operator=(Extension const&);
    Extension(Extension const&);
    Extension();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Extension() = default;

    // vIndex: 1
    virtual void setupMessageSender(::std::function<void(::std::string, ::std::string, ::std::string)>) = 0;

    // vIndex: 2
    virtual bool shouldProcessMessage(::std::string const&, ::std::string const&) = 0;

    // vIndex: 3
    virtual bool onMessageReceived(::std::string const&, ::std::string const&, ::std::optional<::Json::Value>) = 0;

    // vIndex: 4
    virtual bool isShutdownInProgress();

    // vIndex: 5
    virtual void onShutdown();

    // vIndex: 6
    virtual void onLoadingBegin(::std::function<void(::std::string)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Webview
