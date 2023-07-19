/**
 * @file  EduUriResourcePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EduUriResourcePacket.
 *
 */
class EduUriResourcePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUURIRESOURCEPACKET
public:
    class EduUriResourcePacket& operator=(class EduUriResourcePacket const &) = delete;
    EduUriResourcePacket(class EduUriResourcePacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@EduUriResourcePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@EduUriResourcePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@EduUriResourcePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@EduUriResourcePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EDUURIRESOURCEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EduUriResourcePacket();
#endif
    /**
     * @symbol ??0EduUriResourcePacket\@\@QEAA\@XZ
     */
    MCAPI EduUriResourcePacket();
    /**
     * @symbol ??0EduUriResourcePacket\@\@QEAA\@AEBUEduSharedUriResource\@\@\@Z
     */
    MCAPI EduUriResourcePacket(struct EduSharedUriResource const &);

};
