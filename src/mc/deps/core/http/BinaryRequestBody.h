#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IRequestBody.h"

namespace Bedrock::Http {

class BinaryRequestBody : public ::Bedrock::Http::Internal::IRequestBody {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkafd1fc;
    ::ll::UntypedStorage<8, 8>  mUnk8f0a1f;
    // NOLINTEND

public:
    // prevent constructor by default
    BinaryRequestBody& operator=(BinaryRequestBody const&);
    BinaryRequestBody(BinaryRequestBody const&);
    BinaryRequestBody();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BinaryRequestBody() /*override*/ = default;

    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar> destination) /*override*/;

    virtual uint64 getSize() /*override*/;

    virtual void cancel() /*override*/;

    virtual ::std::string const& getLoggableSource() const /*override*/;

    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setData(::gsl::span<uchar const> data);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Http::Internal::IRequestBody::ReadResult $read(::gsl::span<uchar> destination);

    MCNAPI uint64 $getSize();

    MCNAPI void $cancel();

    MCNAPI ::std::string const& $getLoggableSource() const;

    MCNAPI ::gsl::span<uchar const> $getLoggableData() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
