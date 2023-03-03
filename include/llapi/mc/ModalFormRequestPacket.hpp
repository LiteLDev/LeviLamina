/**
 * @file  ModalFormRequestPacket.hpp
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
 * @brief MC class ModalFormRequestPacket.
 *
 */
class ModalFormRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    int formId;
    std::string data;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MODALFORMREQUESTPACKET
public:
    class ModalFormRequestPacket& operator=(class ModalFormRequestPacket const &) = delete;
    ModalFormRequestPacket(class ModalFormRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ModalFormRequestPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@ModalFormRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@ModalFormRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@ModalFormRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@ModalFormRequestPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0ModalFormRequestPacket\@\@QEAA\@XZ
     */
    MCAPI ModalFormRequestPacket();
    /**
     * @symbol  ??0ModalFormRequestPacket\@\@QEAA\@IAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ModalFormRequestPacket(unsigned int, std::string const &);

};