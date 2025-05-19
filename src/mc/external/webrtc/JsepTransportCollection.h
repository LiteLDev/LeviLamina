#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class JsepTransport; }
// clang-format on

namespace webrtc {

struct JsepTransportCollection {
public:
    // prevent constructor by default
    JsepTransportCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::cricket::JsepTransport*> ActiveTransports();

    MCNAPI void CommitTransports();

    MCNAPI void DestroyAllTransports();

    MCNAPI void DestroyUnusedTransports();

    MCNAPI ::cricket::JsepTransport const* GetTransportByName(::std::string const&) const;

    MCNAPI ::cricket::JsepTransport* GetTransportByName(::std::string const&);

    MCNAPI ::cricket::JsepTransport const* GetTransportForMid(::std::string_view) const;

    MCNAPI ::cricket::JsepTransport const* GetTransportForMid(::std::string const&) const;

    MCNAPI ::cricket::JsepTransport* GetTransportForMid(::std::string const&);

    MCNAPI JsepTransportCollection(
        ::std::function<bool(::std::string const&, ::cricket::JsepTransport*)>,
        ::std::function<void()>
    );

    MCNAPI void MaybeDestroyJsepTransport(::cricket::JsepTransport*);

    MCNAPI void RegisterTransport(::std::string const&, ::std::unique_ptr<::cricket::JsepTransport>);

    MCNAPI void RemoveTransportForMid(::std::string const&);

    MCNAPI bool RollbackTransports();

    MCNAPI bool SetTransportForMid(::std::string const&, ::cricket::JsepTransport*);

    MCNAPI bool TransportInUse(::cricket::JsepTransport*) const;

    MCNAPI bool TransportNeededForRollback(::cricket::JsepTransport*) const;

    MCNAPI ::std::vector<::cricket::JsepTransport*> Transports();

    MCNAPI ~JsepTransportCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::function<bool(::std::string const&, ::cricket::JsepTransport*)>, ::std::function<void()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
