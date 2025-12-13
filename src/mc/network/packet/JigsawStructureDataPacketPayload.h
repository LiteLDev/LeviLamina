#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/CompoundTag.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20 { struct JigsawStructureData; }
// clang-format on

struct JigsawStructureDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CompoundTag> mJigsawStructureDataTag;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureDataPacketPayload& operator=(JigsawStructureDataPacketPayload const&);
    JigsawStructureDataPacketPayload(JigsawStructureDataPacketPayload const&);
    JigsawStructureDataPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit JigsawStructureDataPacketPayload(
        ::SharedTypes::v1_21_20::JigsawStructureData const& jigsawStructureData
    );

    MCNAPI_C ::std::unique_ptr<::SharedTypes::v1_21_20::JigsawStructureData> getJigsawStrutureData() const;

    MCNAPI ::JigsawStructureDataPacketPayload& operator=(::JigsawStructureDataPacketPayload&&);

    MCNAPI ~JigsawStructureDataPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructureData const& jigsawStructureData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
