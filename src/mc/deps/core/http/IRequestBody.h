#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::Internal {

class IRequestBody : public ::std::enable_shared_from_this<::Bedrock::Http::Internal::IRequestBody> {
public:
    // IRequestBody inner types declare
    // clang-format off
    struct ReadResult;
    // clang-format on

    // IRequestBody inner types define
    struct ReadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkb4d25b;
        ::ll::UntypedStorage<8, 8> mUnk659573;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReadResult& operator=(ReadResult const&);
        ReadResult(ReadResult const&);
        ReadResult();
    };

public:
    // prevent constructor by default
    IRequestBody& operator=(IRequestBody const&);
    IRequestBody(IRequestBody const&);
    IRequestBody();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRequestBody();

    // vIndex: 1
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar>) = 0;

    // vIndex: 2
    virtual uint64 getSize() = 0;

    // vIndex: 3
    virtual void cancel() = 0;

    // vIndex: 4
    virtual ::std::string const& getLoggableSource() const = 0;

    // vIndex: 5
    virtual ::gsl::span<uchar const> getLoggableData() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http::Internal
