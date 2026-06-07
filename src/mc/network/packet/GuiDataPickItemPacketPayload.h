#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GuiDataPickItemPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mItemName;
    ::ll::TypedStorage<8, 32, ::std::string> mItemEffectName;
    ::ll::TypedStorage<4, 4, int>            mSlot;
    // NOLINTEND

public:
    // prevent constructor by default
    GuiDataPickItemPacketPayload& operator=(GuiDataPickItemPacketPayload const&);
    GuiDataPickItemPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GuiDataPickItemPacketPayload(::GuiDataPickItemPacketPayload const&);

    MCAPI GuiDataPickItemPacketPayload(::std::string const& name, ::std::string const& effect, int slot);

    MCFOLD ::GuiDataPickItemPacketPayload& operator=(::GuiDataPickItemPacketPayload&&);

    MCAPI ~GuiDataPickItemPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::GuiDataPickItemPacketPayload const&);

    MCAPI void* $ctor(::std::string const& name, ::std::string const& effect, int slot);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
