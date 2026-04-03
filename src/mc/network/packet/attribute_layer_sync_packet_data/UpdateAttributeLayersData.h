#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace EAS { struct AttributeLayerData; }
// clang-format on

namespace AttributeLayerSyncPacketData {

struct UpdateAttributeLayersData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::EAS::AttributeLayerData>> mAttributeLayers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~UpdateAttributeLayersData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace AttributeLayerSyncPacketData
