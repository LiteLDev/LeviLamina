#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "../NetworkBlockPosition.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"
#include "mc/world/level/levelgen/structure/StructureTemplateRequestOperation.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class StructureTemplateDataRequestPacket : public ::Packet {

public:
    std::basic_string<char, std::char_traits<char>, std::allocator<char>> mStructureName;     // this+0x30
    NetworkBlockPosition                                                  mStructureBlockPos; // this+0x50
    StructureSettings                                                     mStructureSettings; // this+0x60
    StructureTemplateRequestOperation                                     mRequestOperation;  // this+0xC8


    // prevent constructor by default
    StructureTemplateDataRequestPacket& operator=(StructureTemplateDataRequestPacket const&) = delete;
    StructureTemplateDataRequestPacket(StructureTemplateDataRequestPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@StructureTemplateDataRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@StructureTemplateDataRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@StructureTemplateDataRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@StructureTemplateDataRequestPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ??0StructureTemplateDataRequestPacket\@\@QEAA\@XZ
     */
    MCAPI StructureTemplateDataRequestPacket();
    // NOLINTEND
};
