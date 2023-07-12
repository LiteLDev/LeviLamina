/**
 * @file  TrimMaterial.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct TrimMaterial {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIMMATERIAL
public:
    struct TrimMaterial& operator=(struct TrimMaterial const &) = delete;
    TrimMaterial(struct TrimMaterial const &) = delete;
    TrimMaterial() = delete;
#endif

public:
    /**
     * @symbol ??0TrimMaterial\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI TrimMaterial(struct TrimMaterial &&);
    /**
     * @symbol ??1TrimMaterial\@\@QEAA\@XZ
     */
    MCAPI ~TrimMaterial();

};