/**
 * @file  ClientboundDebugRendererPacket.hpp
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
 * @brief MC class ClientboundDebugRendererPacket.
 *
 */
class ClientboundDebugRendererPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTBOUNDDEBUGRENDERERPACKET
public:
    class ClientboundDebugRendererPacket& operator=(class ClientboundDebugRendererPacket const &) = delete;
    ClientboundDebugRendererPacket(class ClientboundDebugRendererPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ClientboundDebugRendererPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@ClientboundDebugRendererPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ClientboundDebugRendererPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@ClientboundDebugRendererPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLIENTBOUNDDEBUGRENDERERPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ClientboundDebugRendererPacket();
#endif
    /**
     * @symbol ??0ClientboundDebugRendererPacket\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVColor\@mce\@\@AEBVVec3\@\@V?$duration\@_JU?$ratio\@$00$0DOI\@\@std\@\@\@chrono\@2\@\@Z
     */
    MCAPI ClientboundDebugRendererPacket(std::string, class mce::Color const &, class Vec3 const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000>>);
    /**
     * @symbol ??0ClientboundDebugRendererPacket\@\@QEAA\@W4Type\@0\@\@Z
     */
    MCAPI ClientboundDebugRendererPacket(enum class ClientboundDebugRendererPacket::Type);
    /**
     * @symbol ??0ClientboundDebugRendererPacket\@\@QEAA\@XZ
     */
    MCAPI ClientboundDebugRendererPacket();

};
