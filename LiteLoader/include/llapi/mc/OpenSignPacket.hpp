/**
 * @file  OpenSignPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class OpenSignPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPENSIGNPACKET
public:
    class OpenSignPacket& operator=(class OpenSignPacket const &) = delete;
    OpenSignPacket(class OpenSignPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@OpenSignPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@OpenSignPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@OpenSignPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@OpenSignPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OPENSIGNPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OpenSignPacket();
#endif
    /**
     * @symbol ??0OpenSignPacket\@\@QEAA\@XZ
     */
    MCAPI OpenSignPacket();
    /**
     * @symbol ??0OpenSignPacket\@\@QEAA\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI OpenSignPacket(class BlockPos const &, bool);

};
