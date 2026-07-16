#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class JsepTransport; }
// clang-format on

namespace webrtc {

class JsepTransportCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk1f4845;
    ::ll::UntypedStorage<8, 16> mUnk87e9ee;
    ::ll::UntypedStorage<8, 16> mUnk4c4f54;
    ::ll::UntypedStorage<8, 16> mUnk99c0e3;
    ::ll::UntypedStorage<8, 64> mUnk4f55f4;
    ::ll::UntypedStorage<8, 64> mUnkb06921;
    // NOLINTEND

public:
    // prevent constructor by default
    JsepTransportCollection& operator=(JsepTransportCollection const&);
    JsepTransportCollection(JsepTransportCollection const&);
    JsepTransportCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::webrtc::JsepTransport*> ActiveTransports();

    MCNAPI void CommitTransports();

    MCNAPI void DestroyAllTransports();

    MCNAPI void DestroyUnusedTransports();

    MCNAPI ::webrtc::JsepTransport const* GetTransportByName(::std::string const& transport_name) const;

    MCNAPI ::webrtc::JsepTransport* GetTransportByName(::std::string const& transport_name);

    MCNAPI ::webrtc::JsepTransport const* GetTransportForMid(::std::string const& mid) const;

    MCNAPI ::webrtc::JsepTransport const* GetTransportForMid(::std::string_view mid) const;

    MCNAPI ::webrtc::JsepTransport* GetTransportForMid(::std::string const& mid);

    MCNAPI JsepTransportCollection(
        ::std::function<bool(::std::string const&, ::webrtc::JsepTransport*)> map_change_callback,
        ::std::function<void()>                                               state_change_callback
    );

    MCNAPI void MaybeDestroyJsepTransport(::webrtc::JsepTransport* transport);

    MCNAPI void RegisterTransport(::std::string const& mid, ::std::unique_ptr<::webrtc::JsepTransport> transport);

    MCNAPI void RemoveTransportForMid(::std::string const& mid);

    MCNAPI bool RollbackTransports();

    MCNAPI bool SetTransportForMid(::std::string const& mid, ::webrtc::JsepTransport* jsep_transport);

    MCNAPI bool TransportInUse(::webrtc::JsepTransport* jsep_transport) const;

    MCNAPI bool TransportNeededForRollback(::webrtc::JsepTransport* jsep_transport) const;

    MCNAPI ::std::vector<::webrtc::JsepTransport*> Transports();

    MCNAPI ~JsepTransportCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::function<bool(::std::string const&, ::webrtc::JsepTransport*)> map_change_callback,
        ::std::function<void()>                                               state_change_callback
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
