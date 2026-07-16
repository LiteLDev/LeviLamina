#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

namespace NetherNet {

class HttpConnection : public ::NetherNet::ContextProxy,
                       public ::sigslot::has_slots<::sigslot::single_threaded>,
                       public ::std::enable_shared_from_this<::NetherNet::HttpConnection> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk9aa3ce;
    ::ll::UntypedStorage<8, 8>  mUnk655767;
    ::ll::UntypedStorage<8, 8>  mUnk1ddd04;
    ::ll::UntypedStorage<8, 32> mUnke09860;
    ::ll::UntypedStorage<8, 8>  mUnk880be3;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpConnection& operator=(HttpConnection const&);
    HttpConnection(HttpConnection const&);
    HttpConnection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpConnection() /*override*/ = default;
    // NOLINTEND
};

} // namespace NetherNet
