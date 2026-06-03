#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct Blob {
public:
    // Blob inner types define
    using StorageType = ::std::unique_ptr<uchar[0]>;

    using ValueType = uchar;

    using ViewType = ::gsl::span<uchar const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::span<uchar const>>   mView;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<uchar[0]>> mData;
    // NOLINTEND
};

} // namespace cereal
