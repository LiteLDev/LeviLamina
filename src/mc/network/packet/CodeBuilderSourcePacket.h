#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/options/code_builder_storage_query_options/Category.h"
#include "mc/options/code_builder_storage_query_options/Operation.h"
#include "mc/world/level/code_builder_execution_state/CodeStatus.h"


// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
