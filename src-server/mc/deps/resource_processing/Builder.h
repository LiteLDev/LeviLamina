#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Bedrock::Resources::Archive {

class Builder : public ::Bedrock::ImplBase<::Bedrock::Resources::Archive::Builder> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::Result<void> addEntry(::std::string_view, ::gsl::span<uchar const>) = 0;

    // vIndex: 2
    virtual uint64 getSize() const = 0;

    // vIndex: 3
    virtual ::Bedrock::Result<void> toBuffer(::gsl::span<uchar>) const = 0;

    // vIndex: 0
    virtual ~Builder() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Resources::Archive
