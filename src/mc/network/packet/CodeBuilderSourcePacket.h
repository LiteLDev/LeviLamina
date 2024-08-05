#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/codebuilder/Category.h"
#include "mc/codebuilder/CodeBuilderExecutionState.h"
#include "mc/codebuilder/Operation.h"


// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CodeBuilderSourcePacket : public ::Packet {
public:
    CodeBuilderStorageQueryOptions::Operation mOperation;  // this+0x30
    CodeBuilderStorageQueryOptions::Category  mCategory;   // this+0x31
    CodeBuilderExecutionState::CodeStatus     mCodeStatus; // this+0x32

    // prevent constructor by default
    CodeBuilderSourcePacket& operator=(CodeBuilderSourcePacket const&);
    CodeBuilderSourcePacket(CodeBuilderSourcePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CodeBuilderSourcePacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI CodeBuilderSourcePacket();

    // NOLINTEND
};
