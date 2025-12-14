#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/level/block/states/BlockState.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ListTag;
// clang-format on

class CustomBlockStateVariant : public ::BlockState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ListTag>>               mEnumValues;
    ::ll::TypedStorage<8, 128, ::BidirectionalUnorderedMap<int, uint64>> mHashIndexMap;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomBlockStateVariant();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void toNBT(::CompoundTag& tag, int val) const /*override*/;

    virtual bool fromNBT(::CompoundTag const& tag, int& outValue) const /*override*/;

    virtual ~CustomBlockStateVariant() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CustomBlockStateVariant(uint64 id, ::std::string const& name, ::ListTag const& values);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint64 id, ::std::string const& name, ::ListTag const& values);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $toNBT(::CompoundTag& tag, int val) const;

    MCAPI bool $fromNBT(::CompoundTag const& tag, int& outValue) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
