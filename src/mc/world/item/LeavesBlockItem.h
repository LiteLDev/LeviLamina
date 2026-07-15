#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BlockItem.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class ILevel;
class ItemDescriptor;
class ItemStackBase;
// clang-format on

class LeavesBlockItem : public ::BlockItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> m_parentBlock;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getLevelDataForAuxValue(int) const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;

    virtual void fixupCommon(::ItemStackBase&, ::ILevel&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
