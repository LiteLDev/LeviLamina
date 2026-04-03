#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace EAS { struct EnvironmentAttributeData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace AttributeLayerSyncPacketData {

struct UpdateEnvironmentAttributesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                  mLayerName;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                 mLayerDimensionId;
    ::ll::TypedStorage<8, 24, ::std::vector<::EAS::EnvironmentAttributeData>> mAttributes;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateEnvironmentAttributesData(UpdateEnvironmentAttributesData const&);
    UpdateEnvironmentAttributesData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData&
    operator=(::AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData&&);

    MCAPI ::AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData&
    operator=(::AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData const&);

    MCAPI bool operator==(::AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData const&) const;

    MCAPI ~UpdateEnvironmentAttributesData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace AttributeLayerSyncPacketData
