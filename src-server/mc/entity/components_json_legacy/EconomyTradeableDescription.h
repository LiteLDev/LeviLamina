#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct EconomyTradeableDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd5ad06;
    ::ll::UntypedStorage<8, 32> mUnk393108;
    ::ll::UntypedStorage<1, 1> mUnk10e7b1;
    ::ll::UntypedStorage<4, 4> mUnk9f4fee;
    ::ll::UntypedStorage<4, 8> mUnkd5fb30;
    ::ll::UntypedStorage<4, 8> mUnk206819;
    ::ll::UntypedStorage<4, 4> mUnk5376cd;
    ::ll::UntypedStorage<4, 4> mUnka899a4;
    ::ll::UntypedStorage<1, 1> mUnka7d6f1;
    ::ll::UntypedStorage<1, 1> mUnk7d2059;
    ::ll::UntypedStorage<1, 1> mUnk6b9b92;
    ::ll::UntypedStorage<1, 1> mUnkae8426;
    // NOLINTEND

public:
    // prevent constructor by default
    EconomyTradeableDescription& operator=(EconomyTradeableDescription const&);
    EconomyTradeableDescription(EconomyTradeableDescription const&);
    EconomyTradeableDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 2
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    // vIndex: 1
    virtual ~EconomyTradeableDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;

    MCNAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
