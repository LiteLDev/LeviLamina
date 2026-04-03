#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace AttributeLayerSyncPacketData {

struct RemoveEnvironmentAttributesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mLayerName;
    ::ll::TypedStorage<4, 4, ::DimensionType>               mLayerDimensionId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mAttributes;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoveEnvironmentAttributesData(RemoveEnvironmentAttributesData const&);
    RemoveEnvironmentAttributesData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData&
    operator=(::AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData&&);

    MCAPI ::AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData&
    operator=(::AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData const&);

    MCAPI bool operator==(::AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData const&) const;

    MCAPI ~RemoveEnvironmentAttributesData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace AttributeLayerSyncPacketData
