#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/chunk/SubChunkStorage.h"

template <typename T>
class ISubChunkStoragePaletted : public SubChunkStorage<T> {
public:
    virtual gsl::span<unsigned int> getPackedElement() = 0;

    virtual gsl::span<unsigned int const> getPackedElement() const = 0;

    virtual size_t getBitsPerElement() const = 0;

    virtual gsl::span<T const* const> getPaletteSnapshot() const = 0;
};
