#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class JsepTransport; }
// clang-format on

namespace webrtc {

struct JsepTransportCollection {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::cricket::JsepTransport*> ActiveTransports();

    MCAPI void CommitTransports();

    MCAPI void DestroyAllTransports();

    MCAPI void DestroyUnusedTransports();

    MCAPI ::cricket::JsepTransport const* GetTransportByName(::std::string const&) const;

    MCAPI ::cricket::JsepTransport* GetTransportByName(::std::string const&);

    MCAPI ::cricket::JsepTransport const* GetTransportForMid(::std::string_view) const;

    MCAPI ::cricket::JsepTransport const* GetTransportForMid(::std::string const&) const;

    MCAPI ::cricket::JsepTransport* GetTransportForMid(::std::string const&);

    MCAPI
    JsepTransportCollection(::std::function<bool(::std::string const&, ::cricket::JsepTransport*)>, ::std::function<void()>);

    MCAPI void MaybeDestroyJsepTransport(::cricket::JsepTransport*);

    MCAPI void RegisterTransport(::std::string const&, ::std::unique_ptr<::cricket::JsepTransport>);

    MCAPI void RemoveTransportForMid(::std::string const&);

    MCAPI bool RollbackTransports();

    MCAPI bool SetTransportForMid(::std::string const&, ::cricket::JsepTransport*);

    MCAPI bool TransportInUse(::cricket::JsepTransport*) const;

    MCAPI bool TransportNeededForRollback(::cricket::JsepTransport*) const;

    MCAPI ::std::vector<::cricket::JsepTransport*> Transports();

    MCAPI ~JsepTransportCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::function<bool(::std::string const&, ::cricket::JsepTransport*)>, ::std::function<void()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
