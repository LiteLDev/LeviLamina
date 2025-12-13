#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IRequestBody.h"

namespace Bedrock::Http {

class FileRequestBody : public ::Bedrock::Http::Internal::IRequestBody {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf6c20f;
    ::ll::UntypedStorage<8, 16> mUnkbdbe9d;
    ::ll::UntypedStorage<1, 1>  mUnk84e5f4;
    // NOLINTEND

public:
    // prevent constructor by default
    FileRequestBody& operator=(FileRequestBody const&);
    FileRequestBody(FileRequestBody const&);
    FileRequestBody();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar> destination) /*override*/;

    virtual uint64 getSize() /*override*/;

    virtual void cancel() /*override*/;

    virtual ::std::string const& getLoggableSource() const /*override*/;

    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;

#ifdef LL_PLAT_S
    virtual ~FileRequestBody() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~FileRequestBody() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C bool _lazyOpenFileHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::Internal::IRequestBody::ReadResult $read(::gsl::span<uchar> destination);

    MCNAPI uint64 $getSize();

    MCNAPI void $cancel();

    MCNAPI ::std::string const& $getLoggableSource() const;

    MCNAPI ::gsl::span<uchar const> $getLoggableData() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
