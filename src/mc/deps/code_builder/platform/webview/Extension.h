#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Webview {

struct Extension {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Extension() = default;

    virtual void setupMessageSender(::std::function<void(::std::string, ::std::string, ::std::string)>) = 0;

    virtual bool shouldProcessMessage(::std::string const&, ::std::string const&) = 0;

    virtual bool onMessageReceived(::std::string const&, ::std::string const&, ::std::optional<::Json::Value>) = 0;

    virtual bool isShutdownInProgress();

    virtual void onShutdown();

    virtual void onLoadingBegin(::std::function<void(::std::string)>);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isShutdownInProgress();

    MCNAPI void $onShutdown();
#endif


    // NOLINTEND
};

} // namespace Webview
