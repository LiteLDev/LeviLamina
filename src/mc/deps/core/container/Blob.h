#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Blob {
public:
    // prevent constructor by default
    Blob& operator=(Blob const&);
    Blob(Blob const&);

public:
    // NOLINTBEGIN
    MCAPI Blob();

    MCAPI Blob(class mce::Blob&& rhs);

    MCAPI explicit Blob(uint64 size);

    MCAPI uchar const* cbegin() const;

    MCAPI uchar const* cend() const;

    MCAPI bool empty() const;

    MCAPI class mce::Blob& operator=(class mce::Blob&& rhs);

    MCAPI ~Blob();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void defaultDeleter(uchar* ptr);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace mce
