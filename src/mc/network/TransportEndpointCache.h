#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/core/Cache.h"

class TransportEndpointCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk69217d;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportEndpointCache& operator=(TransportEndpointCache const&);
    TransportEndpointCache(TransportEndpointCache const&);
    TransportEndpointCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::std::string> getProbeUrls(::std::string const& host, int port) const;

    MCNAPI void remember(::std::string const& host, int port, ::std::string const& url);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string _getKey(::std::string const& host, int port);
    // NOLINTEND
};
