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

    virtual void
    setupMessageSender(::std::function<void(::std::string, ::std::string, ::std::string)> messageSender) = 0;

    virtual bool shouldProcessMessage(::std::string const& functionNamespace, ::std::string const& func) = 0;

    virtual bool onMessageReceived(
        ::std::string const&           functionNamespace,
        ::std::string const&           func,
        ::std::optional<::Json::Value> arguments
    ) = 0;

    virtual bool isShutdownInProgress();

    virtual void onShutdown();

    virtual void onLoadingBegin(::std::function<void(::std::string)> handler);
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
