/**
 * @file  CameraInstructionPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CameraInstructionPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAINSTRUCTIONPACKET
public:
    class CameraInstructionPacket& operator=(class CameraInstructionPacket const &) = delete;
    CameraInstructionPacket(class CameraInstructionPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CameraInstructionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@CameraInstructionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CameraInstructionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 4
     * @symbol ?read\@CameraInstructionPacket\@\@UEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult read(class ReadOnlyBinaryStream &);
    /**
     * @vftbl 7
     * @symbol ?_read\@CameraInstructionPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAMERAINSTRUCTIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CameraInstructionPacket();
#endif
    /**
     * @symbol ??0CameraInstructionPacket\@\@QEAA\@XZ
     */
    MCAPI CameraInstructionPacket();
    /**
     * @symbol ??0CameraInstructionPacket\@\@QEAA\@AEBUCameraInstruction\@\@\@Z
     */
    MCAPI CameraInstructionPacket(struct CameraInstruction const &);

};
