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
    // symbol: ??0Matrix@@QEAA@AEBU?$qua@M$0A@@glm@@@Z
    MCAPI explicit Matrix(struct glm::qua<float, 0> const&);

    // symbol: ?transform3@Matrix@@QEBAXAEAU?$vec@$02M$0A@@glm@@AEAM@Z
    MCAPI void transform3(struct glm::vec<3, float, 0>&, float&) const;

    // symbol: ?IDENTITY@Matrix@@2V1@B
    MCAPI static class Matrix const IDENTITY;

    // NOLINTEND
};
