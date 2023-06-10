/**
 * @file  CameraPresetsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CameraPresetsPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAPRESETSPACKET
public:
    class CameraPresetsPacket& operator=(class CameraPresetsPacket const &) = delete;
    CameraPresetsPacket(class CameraPresetsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CameraPresetsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@CameraPresetsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CameraPresetsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 4
     * @symbol ?read\@CameraPresetsPacket\@\@UEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult read(class ReadOnlyBinaryStream &);
    /**
     * @vftbl 7
     * @symbol ?_read\@CameraPresetsPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAMERAPRESETSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CameraPresetsPacket();
#endif
    /**
     * @symbol ??0CameraPresetsPacket\@\@QEAA\@XZ
     */
    MCAPI CameraPresetsPacket();
    /**
     * @symbol ??0CameraPresetsPacket\@\@QEAA\@AEBVCameraPresets\@\@\@Z
     */
    MCAPI CameraPresetsPacket(class CameraPresets const &);

};
