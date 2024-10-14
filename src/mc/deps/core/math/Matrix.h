#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Matrix {
public:
    // prevent constructor by default
    Matrix& operator=(Matrix const&);
    Matrix(Matrix const&);
    Matrix();

public:
    // NOLINTBEGIN
    MCAPI explicit Matrix(glm::qua<float> const&);

    MCAPI void transform3(glm::vec3&, float&) const;

    MCAPI void translate(glm::vec3 const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static class Matrix const& IDENTITY();

    // NOLINTEND
};
