#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"

// auto generated forward declare list
// clang-format off
struct BiomeStringList;
struct BiomeTagComponent;
struct BiomeTagIDType;
struct BiomeTagSetIDType;
struct BiomeTagsData;
// clang-format on

namespace BiomeTagSerialization {
// functions
// NOLINTBEGIN
MCNAPI void serializeTagsData(
    ::BiomeTagComponent const&                                                      tagComponent,
    ::BiomeTagsData&                                                                data,
    ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const& tagRegistry,
    ::BiomeStringList&                                                              stringList
);
// NOLINTEND

} // namespace BiomeTagSerialization
