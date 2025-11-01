#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/XAsyncOp.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"

// auto generated forward declare list
// clang-format off
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
struct XAsyncProviderData;
namespace xbox::httpclient { class IWebSocketProvider; }
namespace xbox::httpclient { struct HeaderCompare; }
// clang-format on

namespace xbox::httpclient {

class WebSocket : public ::std::enable_shared_from_this<::xbox::httpclient::WebSocket> {
public:
    // WebSocket inner types declare
    // clang-format off
    struct ConnectContext;
    struct EventCallbacks;
    struct ProviderContext;
    // clang-format on
    
    // WebSocket inner types define
    struct ConnectContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkc14340;
        ::ll::UntypedStorage<8, 8> mUnk24c92e;
        ::ll::UntypedStorage<8, 56> mUnk99c8ad;
        ::ll::UntypedStorage<8, 16> mUnkb972a2;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ConnectContext& operator=(ConnectContext const&);
        ConnectContext(ConnectContext const&);
        ConnectContext();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ConnectContext(::std::shared_ptr<::xbox::httpclient::WebSocket> websocket, ::XAsyncBlock* async);
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::std::shared_ptr<::xbox::httpclient::WebSocket> websocket, ::XAsyncBlock* async);
        // NOLINTEND
    
    };
    
    struct ProviderContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk320287;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ProviderContext& operator=(ProviderContext const&);
        ProviderContext(ProviderContext const&);
        ProviderContext();
    
    };
    
    struct EventCallbacks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk54b6e8;
        ::ll::UntypedStorage<8, 8> mUnka9499d;
        ::ll::UntypedStorage<8, 8> mUnk82cac8;
        ::ll::UntypedStorage<8, 8> mUnk7e9e7e;
        ::ll::UntypedStorage<8, 8> mUnk7113b2;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        EventCallbacks& operator=(EventCallbacks const&);
        EventCallbacks(EventCallbacks const&);
        EventCallbacks();
    
    };
    
    enum class State : int {
        Initial = 0,
        Connecting = 1,
        Connected = 2,
        Disconnecting = 3,
        Disconnected = 4,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5902c2;
    ::ll::UntypedStorage<8, 16> mUnkbe9de1;
    ::ll::UntypedStorage<8, 16> mUnk58b273;
    ::ll::UntypedStorage<1, 1> mUnkbfe82e;
    ::ll::UntypedStorage<8, 32> mUnk563f5a;
    ::ll::UntypedStorage<8, 32> mUnk9dcd0a;
    ::ll::UntypedStorage<8, 32> mUnkf02244;
    ::ll::UntypedStorage<8, 8> mUnk9fe95b;
    ::ll::UntypedStorage<4, 4> mUnke41cb9;
    ::ll::UntypedStorage<8, 80> mUnkbf06bc;
    ::ll::UntypedStorage<4, 4> mUnk355c21;
    ::ll::UntypedStorage<8, 80> mUnk970287;
    ::ll::UntypedStorage<8, 16> mUnka1bdf9;
    ::ll::UntypedStorage<4, 4> mUnkb3bdbc;
    ::ll::UntypedStorage<8, 8> mUnk16f633;
    ::ll::UntypedStorage<8, 8> mUnkc50872;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSocket& operator=(WebSocket const&);
    WebSocket(WebSocket const&);
    WebSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebSocket();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long ConnectAsync(::http_string&& uri, ::http_string&& subProtocol, ::XAsyncBlock* asyncBlock);

    MCNAPI long Disconnect();

    MCNAPI ::std::map<::http_string, ::http_string, ::xbox::httpclient::HeaderCompare, ::http_stl_allocator<::std::pair<::http_string const, ::http_string>>> const& Headers() const;

    MCNAPI uint64 MaxReceiveBufferSize() const;

    MCNAPI uint PingInterval() const;

    MCNAPI uint RegisterEventCallbacks(void(*messageFunc) (::HC_WEBSOCKET_OBSERVER*, char const*, void*), void(*binaryMessageFunc) (::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*), void(*binaryFragmentFunc) (::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*), void(*closeFunc) (::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*), void* callbackContext);

    MCNAPI long SendAsync(char const* message, ::XAsyncBlock* asyncBlock);

    MCNAPI long SetHeader(::http_string&& headerName, ::http_string&& headerValue);

    MCNAPI long SetPingInterval(uint pingInterval);

    MCNAPI WebSocket(uint64 _id, ::xbox::httpclient::IWebSocketProvider& provider);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void BinaryMessageFragmentFunc(::HC_WEBSOCKET_OBSERVER* handle, uchar const* bytes, uint payloadSize, bool isLastFragment, void*);

    MCNAPI static void BinaryMessageFunc(::HC_WEBSOCKET_OBSERVER* handle, uchar const* bytes, uint payloadSize, void*);

    MCNAPI static void CloseFunc(::HC_WEBSOCKET_OBSERVER* handle, ::HCWebSocketCloseStatus status, void*);

    MCNAPI static long ConnectAsyncProvider(::XAsyncOp op, ::XAsyncProviderData const* data);

    MCNAPI static void ConnectComplete(::XAsyncBlock* async);

    MCNAPI static void MessageFunc(::HC_WEBSOCKET_OBSERVER* handle, char const* message, void*);

    MCNAPI static void NotifyWebSocketRoutedHandlers(::HC_WEBSOCKET_OBSERVER* websocket, bool receiving, char const* message, uchar const* payloadBytes, uint64 payloadSize);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64 _id, ::xbox::httpclient::IWebSocketProvider& provider);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
