#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

namespace webrtc {

class MediaStream {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MediaStream(::std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::scoped_refptr<::webrtc::MediaStream> Create(::std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForRefCountInterface();

    MCAPI static void** $vftableForNotifierInterface();
    // NOLINTEND
};

} // namespace webrtc
