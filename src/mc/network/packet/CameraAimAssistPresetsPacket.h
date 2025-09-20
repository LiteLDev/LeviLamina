#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/CameraAimAssistPresetsPacketOperation.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetDefinition; }
// clang-format on

class CameraAimAssistPresetsPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition>>   mPresets;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition>> mCategories;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistPresetsPacketOperation>                                    mOperation;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistPresetsPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 5
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 7
    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& bitStream) /*override*/;

    // vIndex: 13
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~CameraAimAssistPresetsPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraAimAssistPresetsPacket(
        ::CameraAimAssistPresetsPacketOperation                                   operation,
        ::std::vector<::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition>   presets,
        ::std::vector<::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition> categories
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::CameraAimAssistPresetsPacketOperation                                   operation,
        ::std::vector<::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition>   presets,
        ::std::vector<::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition> categories
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& bitStream);

    MCFOLD ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
