/**
 * @file  CameraInstruction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct CameraInstruction {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAINSTRUCTION
public:
    struct CameraInstruction& operator=(struct CameraInstruction const &) = delete;
    CameraInstruction(struct CameraInstruction const &) = delete;
    CameraInstruction() = delete;
#endif

public:
    /**
     * @symbol ??8CameraInstruction\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct CameraInstruction const &) const;
    /**
     * @symbol ?bindType\@CameraInstruction\@\@SAXXZ
     */
    MCAPI static void bindType();

};