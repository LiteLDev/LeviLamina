#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/components/PackedItemUseLegacyInventoryTransaction.h"
#include "mc/entity/components/PlayerBlockActions.h"
#include "mc/enums/ClientPlayMode.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"
#include "mc/world/inventory/network/ItemStackRequestData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerAuthInputPacket : public ::Packet {
public:
    // PlayerAuthInputPacket inner types define
    enum class InputData {};

public:
    Vec2                                                     mRot;                 // this+0x30
    Vec3                                                     mPos;                 // this+0x38
    float                                                    mYHeadRot;            // this+0x44
    Vec3                                                     mPosDelta;            // this+0x48
    Vec2                                                     mMove;                // this+0x54
    Vec3                                                     mGazeDir;             // this+0x5C
    std::bitset<37>                                          mInputData;           // this+0x68
    InputMode                                                mInputMode;           // this+0x70
    ClientPlayMode                                           mPlayMode;            // this+0x74
    NewInteractionModel                                      mNewInteractionModel; // this+0x78
    unsigned __int64                                         mClientTick;          // this+0x80
    std::unique_ptr<PackedItemUseLegacyInventoryTransaction> mItemUseTransaction;  // this+0x88
    std::unique_ptr<ItemStackRequestData>                    mItemStackRequest;    // this+0x90
    PlayerBlockActions                                       mPlayerBlockActions;  // this+0x98


    // prevent constructor by default
    PlayerAuthInputPacket& operator=(PlayerAuthInputPacket const&) = delete;
    PlayerAuthInputPacket(PlayerAuthInputPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@PlayerAuthInputPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@PlayerAuthInputPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@PlayerAuthInputPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 6
     * @symbol ?isValid\@PlayerAuthInputPacket\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@PlayerAuthInputPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERAUTHINPUTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerAuthInputPacket();
#endif
    /**
     * @symbol ??0PlayerAuthInputPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerAuthInputPacket();
    /**
     * @symbol ??0PlayerAuthInputPacket\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI PlayerAuthInputPacket(class PlayerAuthInputPacket&&);
    /**
     * @symbol ?getInput\@PlayerAuthInputPacket\@\@QEBA_NW4InputData\@1\@\@Z
     */
    MCAPI bool getInput(enum class PlayerAuthInputPacket::InputData) const;
    /**
     * @symbol ??4PlayerAuthInputPacket\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class PlayerAuthInputPacket& operator=(class PlayerAuthInputPacket&&);
    /**
     * @symbol ?readIntoComponent\@PlayerAuthInputPacket\@\@QEBA?AUPlayerActionComponent\@\@XZ
     */
    MCAPI struct PlayerActionComponent readIntoComponent() const;
    /**
     * @symbol ?takeCopy\@PlayerAuthInputPacket\@\@QEBA?AV1\@XZ
     */
    MCAPI class PlayerAuthInputPacket takeCopy() const;
    // NOLINTEND
};
