/**
 * @file  InteractPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InteractPacket.
 *
 */
class InteractPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTPACKET
public:
    class InteractPacket& operator=(class InteractPacket const &) = delete;
    InteractPacket(class InteractPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~InteractPacket();
    /**
     * @hash   -389791120
     * @vftbl  1
     * @symbol  ?getId\@InteractPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1098305821
     * @vftbl  2
     * @symbol  ?getName\@InteractPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   167587786
     * @vftbl  3
     * @symbol  ?write\@InteractPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -250367526
     * @vftbl  6
     * @symbol  ?_read\@InteractPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1966846474
     * @symbol  ??0InteractPacket\@\@QEAA\@XZ
     */
    MCAPI InteractPacket();
    /**
     * @hash   -1305033651
     * @symbol  ??0InteractPacket\@\@QEAA\@W4Action\@0\@VActorRuntimeID\@\@AEBVVec3\@\@\@Z
     */
    MCAPI InteractPacket(enum class InteractPacket::Action, class ActorRuntimeID, class Vec3 const &);

};