#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class NpcRequestPacket : public ::Packet {
public:
    // NpcRequestPacket inner types define
    enum class RequestType : unsigned char {
        SetActions             = 0x0,
        ExecuteAction          = 0x1,
        ExecuteClosingCommands = 0x2,
        SetName                = 0x3,
        SetSkin                = 0x4,
        SetInteractText        = 0x5,
        ExecuteOpeningCommands = 0x6,
    };

public:
    ActorRuntimeID mId;          // this+0x30
    RequestType    mType;        // this+0x38
    std::string    mActions;     // this+0x40
    unsigned char  mActionIndex; // this+0x60
    std::string    mSceneName;   // this+0x68

    // prevent constructor by default
    NpcRequestPacket& operator=(NpcRequestPacket const&) = delete;
    NpcRequestPacket(NpcRequestPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@NpcRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@NpcRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@NpcRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@NpcRequestPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCREQUESTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NpcRequestPacket();
#endif
    /**
     * @symbol ??0NpcRequestPacket\@\@QEAA\@XZ
     */
    MCAPI NpcRequestPacket();
    /**
     * @symbol
     * ?getInteractText\@NpcRequestPacket\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getInteractText() const;
    /**
     * @symbol
     * ?getNpcName\@NpcRequestPacket\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getNpcName() const;
    /**
     * @symbol
     * ?getSceneName\@NpcRequestPacket\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getSceneName() const;
    /**
     * @symbol ?getSkin\@NpcRequestPacket\@\@QEBAHXZ
     */
    MCAPI int32_t getSkin() const;
    /**
     * @symbol
     * ?requestSetInteractText\@NpcRequestPacket\@\@SA?AV1\@VActorRuntimeID\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class NpcRequestPacket requestSetInteractText(class ActorRuntimeID, std::string);
    /**
     * @symbol
     * ?requestSetName\@NpcRequestPacket\@\@SA?AV1\@VActorRuntimeID\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class NpcRequestPacket requestSetName(class ActorRuntimeID, std::string);
    /**
     * @symbol ?requestSetSkin\@NpcRequestPacket\@\@SA?AV1\@VActorRuntimeID\@\@H\@Z
     */
    MCAPI static class NpcRequestPacket requestSetSkin(class ActorRuntimeID, int32_t);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0NpcRequestPacket\@\@AEAA\@VActorRuntimeID\@\@W4RequestType\@0\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@E\@Z
     */
    MCAPI NpcRequestPacket(class ActorRuntimeID, enum class NpcRequestPacket::RequestType, std::string, uint8_t);
    // NOLINTEND
};
