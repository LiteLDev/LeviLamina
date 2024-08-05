#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/glm/qua.h"
#include "mc/external/glm/vec.h"

class Matrix {
public:
    // prevent constructor by default
    Matrix& operator=(Matrix const&);
    Matrix(Matrix const&);
    Matrix();

public:
    // NOLINTBEGIN
    MCAPI explicit Matrix(struct glm::qua<float, 0> const&);

    MCAPI void transform3(struct glm::vec<3, float, 0>&, float&) const;

    MCAPI void translate(struct glm::vec<3, float, 0> const&);

    MCAPI static class Matrix const IDENTITY;

    // NOLINTEND
};
