#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    RemoveEnvironmentAttributesData& operator=(RemoveEnvironmentAttributesData const&);
    RemoveEnvironmentAttributesData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RemoveEnvironmentAttributesData(::AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData const&);

    MCAPI bool operator==(::AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData const&);
    // NOLINTEND
};

} // namespace AttributeLayerSyncPacketData
