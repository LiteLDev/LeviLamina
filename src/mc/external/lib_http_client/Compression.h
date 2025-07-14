#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCCompressionLevel.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"

namespace xbox::httpclient {

class Compression {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Available();

    MCNAPI static void
    CompressToGzip(uchar*, uint64, ::HCCompressionLevel, ::std::vector<uchar, ::http_stl_allocator<uchar>>&);

    MCNAPI static void DecompressFromGzip(uchar*, uint64, ::std::vector<uchar, ::http_stl_allocator<uchar>>&);
    // NOLINTEND
};

} // namespace xbox::httpclient
