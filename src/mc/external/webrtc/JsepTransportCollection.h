#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class JsepTransport; }
// clang-format on

namespace webrtc {

class JsepTransportCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk1f4845;
    ::ll::UntypedStorage<8, 16> mUnk77bd73;
    ::ll::UntypedStorage<8, 16> mUnk30001c;
    ::ll::UntypedStorage<8, 16> mUnkab9818;
    ::ll::UntypedStorage<8, 64> mUnkafb72e;
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
    MCNAPI ::std::vector<::cricket::JsepTransport*> ActiveTransports();

    MCNAPI void CommitTransports();

    MCNAPI void DestroyAllTransports();

    MCNAPI void DestroyUnusedTransports();

    MCNAPI ::cricket::JsepTransport const* GetTransportByName(::std::string const&) const;

    MCNAPI ::cricket::JsepTransport* GetTransportByName(::std::string const& transport_name);

    MCNAPI ::cricket::JsepTransport const* GetTransportForMid(::std::string_view mid) const;

    MCNAPI ::cricket::JsepTransport const* GetTransportForMid(::std::string const&) const;

    MCNAPI ::cricket::JsepTransport* GetTransportForMid(::std::string const& mid);

    MCNAPI JsepTransportCollection(
        ::std::function<bool(::std::string const&, ::cricket::JsepTransport*)> map_change_callback,
        ::std::function<void()>                                                state_change_callback
    );

    MCNAPI void MaybeDestroyJsepTransport(::cricket::JsepTransport* transport);

    MCNAPI void RegisterTransport(::std::string const& mid, ::std::unique_ptr<::cricket::JsepTransport> transport);

    MCNAPI void RemoveTransportForMid(::std::string const& mid);

    MCNAPI bool RollbackTransports();

    MCNAPI bool SetTransportForMid(::std::string const& mid, ::cricket::JsepTransport* jsep_transport);

    MCNAPI bool TransportInUse(::cricket::JsepTransport* jsep_transport) const;

    MCNAPI bool TransportNeededForRollback(::cricket::JsepTransport* jsep_transport) const;

    MCNAPI ::std::vector<::cricket::JsepTransport*> Transports();

    MCNAPI ~JsepTransportCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::function<bool(::std::string const&, ::cricket::JsepTransport*)> map_change_callback,
        ::std::function<void()>                                                state_change_callback
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
