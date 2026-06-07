#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/BufferDescription.h"

namespace cg {

struct BufferSpan {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::cg::BufferDescription> mDescription;
    ::ll::TypedStorage<8, 8, uchar const*>            mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI BufferSpan();

    MCAPI BufferSpan(::cg::BufferDescription const& bufferDescription, ::std::optional<uchar const*> data);

    MCAPI BufferSpan(uint stride, uint count, ::std::optional<uchar const*> data);

    MCFOLD ::cg::BufferDescription const& getDescription() const;

    MCAPI ::gsl::span<uchar const> getSpan() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void* $ctor();

    MCAPI void* $ctor(::cg::BufferDescription const& bufferDescription, ::std::optional<uchar const*> data);

    MCAPI void* $ctor(uint stride, uint count, ::std::optional<uchar const*> data);
#endif
    // NOLINTEND
};

} // namespace cg
