#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<8, 8>   mUnk4702d3;
    ::ll::UntypedStorage<8, 128> mUnk84844b;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomBlockStateVariant& operator=(CustomBlockStateVariant const&);
    CustomBlockStateVariant(CustomBlockStateVariant const&);
    CustomBlockStateVariant();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void toNBT(::CompoundTag& tag, int val) const /*override*/;

    // vIndex: 2
    virtual bool fromNBT(::CompoundTag const& tag, int& outValue) const /*override*/;

    // vIndex: 0
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
