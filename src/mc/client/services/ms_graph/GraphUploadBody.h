#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/FileRequestBody.h"
#include "mc/deps/core/http/IRequestBody.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace MSGraph::Models {

struct GraphUploadBody : public ::Bedrock::Http::FileRequestBody {
public:
    // prevent constructor by default
    GraphUploadBody();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar> destination) /*override*/;

    virtual ~GraphUploadBody() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit GraphUploadBody(::Core::Path fileToUpload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Core::Path fileToUpload);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::Internal::IRequestBody::ReadResult $read(::gsl::span<uchar> destination);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace MSGraph::Models
