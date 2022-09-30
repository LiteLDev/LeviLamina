/**
 * @file  CreatePhotoPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CreatePhotoPacket.
 *
 */
class CreatePhotoPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATEPHOTOPACKET
public:
    class CreatePhotoPacket& operator=(class CreatePhotoPacket const &) = delete;
    CreatePhotoPacket(class CreatePhotoPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CreatePhotoPacket();
    /**
     * @hash   -1913007472
     * @vftbl  1
     * @symbol ?getId@CreatePhotoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   591924541
     * @vftbl  2
     * @symbol ?getName@CreatePhotoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -478402646
     * @vftbl  3
     * @symbol ?write@CreatePhotoPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -2022165782
     * @vftbl  6
     * @symbol ?_read@CreatePhotoPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   2119940602
     * @symbol ??0CreatePhotoPacket@@QEAA@XZ
     */
    MCAPI CreatePhotoPacket();

};