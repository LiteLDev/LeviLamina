#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IRequestBody.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http::Internal { class IRequestBody; }
// clang-format on

namespace Bedrock::Http {

class BinaryRequestBody : public ::Bedrock::Http::Internal::IRequestBody {
public:
    // prevent constructor by default
    BinaryRequestBody& operator=(BinaryRequestBody const&);
    BinaryRequestBody(BinaryRequestBody const&);
    BinaryRequestBody();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BinaryRequestBody();

    // vIndex: 1
    virtual struct Bedrock::Http::Internal::IRequestBody::ReadResult read(gsl::span<uchar>);

    // vIndex: 2
    virtual uint64 getSize();

    // vIndex: 3
    virtual void cancel();

    // vIndex: 4
    virtual std::string const& getLoggableSource() const;

    // vIndex: 5
    virtual gsl::span<uchar const> getLoggableData() const;

    MCAPI void setData(gsl::span<uchar const>);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI void cancel$();

    MCAPI gsl::span<uchar const> getLoggableData$() const;

    MCAPI std::string const& getLoggableSource$() const;

    MCAPI uint64 getSize$();

    MCAPI struct Bedrock::Http::Internal::IRequestBody::ReadResult read$(gsl::span<uchar>);

    // NOLINTEND
};

}; // namespace Bedrock::Http
