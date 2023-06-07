/**
 * @file  TrimDataPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class TrimDataPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIMDATAPACKET
public:
    class TrimDataPacket& operator=(class TrimDataPacket const &) = delete;
    TrimDataPacket(class TrimDataPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@TrimDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@TrimDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@TrimDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@TrimDataPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRIMDATAPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TrimDataPacket();
#endif
    /**
     * @symbol ??0TrimDataPacket\@\@QEAA\@XZ
     */
    MCAPI TrimDataPacket();
    /**
     * @symbol ?prepareFromRegistries\@TrimDataPacket\@\@SA?AV1\@AEBVTrimPatternRegistry\@\@AEBVTrimMaterialRegistry\@\@\@Z
     */
    MCAPI static class TrimDataPacket prepareFromRegistries(class TrimPatternRegistry const &, class TrimMaterialRegistry const &);

};
