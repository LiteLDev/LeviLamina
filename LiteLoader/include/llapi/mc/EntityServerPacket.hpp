/**
 * @file  EntityServerPacket.hpp
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
 * @brief MC class EntityServerPacket.
 *
 */
class EntityServerPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSERVERPACKET
public:
    class EntityServerPacket& operator=(class EntityServerPacket const &) = delete;
    EntityServerPacket(class EntityServerPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EntityServerPacket();
    /**
     * @hash   504064762
     * @vftbl  3
     * @symbol  ?write\@EntityServerPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   846995043
     * @vftbl  6
     * @symbol  ?_read\@EntityServerPacket\@\@MEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   370954010
     * @symbol  ??0EntityServerPacket\@\@QEAA\@XZ
     */
    MCAPI EntityServerPacket();
    /**
     * @hash   1191201635
     * @symbol  ??0EntityServerPacket\@\@QEAA\@AEBVEntityContext\@\@\@Z
     */
    MCAPI EntityServerPacket(class EntityContext const &);

};