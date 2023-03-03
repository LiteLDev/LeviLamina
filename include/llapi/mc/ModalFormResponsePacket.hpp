/**
 * @file  ModalFormResponsePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ModalFormResponsePacket.
 *
 */
class ModalFormResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    int mFormId;
    std::string mData;
	

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MODALFORMRESPONSEPACKET
public:
    class ModalFormResponsePacket& operator=(class ModalFormResponsePacket const &) = delete;
    ModalFormResponsePacket(class ModalFormResponsePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ModalFormResponsePacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@ModalFormResponsePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@ModalFormResponsePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@ModalFormResponsePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@ModalFormResponsePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0ModalFormResponsePacket\@\@QEAA\@XZ
     */
    MCAPI ModalFormResponsePacket();

};