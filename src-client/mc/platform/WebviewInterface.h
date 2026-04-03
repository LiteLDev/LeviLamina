#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
class WebviewObserver;
struct WebviewDownloadInfo;
struct WebviewError;
// clang-format on

class WebviewInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WebviewInterface() = default;

    virtual void addObserver(::WebviewObserver&) = 0;

    virtual void clearObservers() = 0;

    virtual void onLoadingBegin() = 0;

    virtual void onLoadingEnd() = 0;

    virtual bool isShown() const = 0;

    virtual bool isLoaded() const = 0;

    virtual bool handlesLoadingCallbacks() = 0;

    virtual void onError(::WebviewError const&) = 0;

    virtual bool handlesResetCallbacks() = 0;

    virtual void setCanReset(bool) = 0;

    virtual void onWebviewChanged() = 0;

    virtual void onDownloadBegin(::WebviewDownloadInfo const&) = 0;

    virtual void onDownloadUpdate(::WebviewDownloadInfo const&) = 0;

    virtual void onDownloadComplete(::WebviewDownloadInfo const&) = 0;

    virtual void onDownloadCanceled(::WebviewDownloadInfo const&) = 0;

    virtual void onMessageRecieved(::std::string const&) const = 0;

    virtual void sendMessage(::std::string const&) = 0;

    virtual void requestSetRect(::RectangleArea const&) = 0;

    virtual void requestSetPropagatedAlpha(float) = 0;

    virtual void requestSetMuted(bool) = 0;

    virtual void requestSetUrl(::std::string const&, bool) = 0;

    virtual void requestSetShowView(bool) = 0;

    virtual void requestReset() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
