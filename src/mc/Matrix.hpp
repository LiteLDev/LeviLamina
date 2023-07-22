/**
 * @file  Matrix.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Matrix.
 *
 */
class Matrix {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MATRIX
public:
    class Matrix& operator=(class Matrix const &) = delete;
    Matrix(class Matrix const &) = delete;
    Matrix() = delete;
#endif

public:
    /**
     * @symbol  ?transform3\@Matrix\@\@QEBAXAEAU?$vec\@$02M$0A\@\@glm\@\@AEAM\@Z
     */
    MCAPI void transform3(struct glm::vec<3, float, 0> &, float &) const;

};