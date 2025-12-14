#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpgradeVersionType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class DimensionHeightRange;
class LevelSeed64;
// clang-format on

struct MetaDataTypeVisitor_Get {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CompoundTag const&> mSource;
    ::ll::TypedStorage<8, 32, ::std::string const> mMetaDataTag;
    // NOLINTEND

public:
    // prevent constructor by default
    MetaDataTypeVisitor_Get& operator=(MetaDataTypeVisitor_Get const&);
    MetaDataTypeVisitor_Get(MetaDataTypeVisitor_Get const&);
    MetaDataTypeVisitor_Get();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::std::variant<
        ::BaseGameVersion,
        ::std::string,
        ::LevelSeed64,
        ::GeneratorType,
        bool,
        short,
        ::DimensionHeightRange,
        ::NeighborAwareBlockUpgradeVersionType>>
    operator()(::BaseGameVersion const&) const;

    MCAPI ~MetaDataTypeVisitor_Get();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
