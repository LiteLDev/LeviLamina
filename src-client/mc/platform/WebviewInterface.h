#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
class WebviewObserver;
// clang-format on

class WebviewInterface : public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkeee510;
    ::ll::UntypedStorage<4, 4>  mUnkeddb88;
    ::ll::UntypedStorage<1, 1>  mUnkb2d13b;
    ::ll::UntypedStorage<8, 32> mUnk996bab;
    ::ll::UntypedStorage<1, 1>  mUnk158d95;
    ::ll::UntypedStorage<1, 1>  mUnk71c75a;
    ::ll::UntypedStorage<1, 1>  mUnk8d7f67;
    ::ll::UntypedStorage<1, 1>  mUnkfc01b7;
    ::ll::UntypedStorage<1, 1>  mUnk93fd7f;
    ::ll::UntypedStorage<8, 64> mUnk4f9edc;
    ::ll::UntypedStorage<8, 8>  mUnk6e0d9f;
    // NOLINTEND

public:
    // prevent constructor by default
    WebviewInterface& operator=(WebviewInterface const&);
    WebviewInterface(WebviewInterface const&);
    WebviewInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WebviewInterface() /*override*/ = default;

    virtual void addObserver(::WebviewObserver&);

    virtual void clearObservers();

    virtual bool isShown() const;

    virtual bool isLoaded() const;

    virtual bool handlesLoadingCallbacks();

    virtual void onWebviewChanged();

    virtual void sendMessage(::std::string const&);

    virtual void onAppSuspended() /*override*/;

    virtual void onResizeBegin() /*override*/;

    virtual void onResizeEnd() /*override*/;

    virtual void setRect(::RectangleArea const&) = 0;

    virtual void setPropagatedAlpha(float) = 0;

    virtual void setMuted(bool) = 0;

    virtual void setUrl(::std::string const&, bool) = 0;

    virtual void setShowView(bool) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void requestSetShowView(bool show);

    MCNAPI void requestSetUrl(::std::string const& url, bool force);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
