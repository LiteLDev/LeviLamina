/**
 * @file  CameraInstruction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"
#include "Bedrock.hpp"

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
     * @symbol ?write\@CameraInstruction\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @symbol ?bindType\@CameraInstruction\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?read\@CameraInstruction\@\@SA?AV?$Result\@UCameraInstruction\@\@Verror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<struct CameraInstruction, class std::error_code> read(class ReadOnlyBinaryStream &);

};