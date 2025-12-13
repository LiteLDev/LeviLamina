#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct TransformationDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnkf1916c;
    ::ll::UntypedStorage<4, 4>   mUnkfcdacb;
    ::ll::UntypedStorage<4, 4>   mUnk39f035;
    ::ll::UntypedStorage<4, 4>   mUnk336375;
    ::ll::UntypedStorage<1, 1>   mUnk5996f5;
    ::ll::UntypedStorage<1, 1>   mUnkfb7641;
    ::ll::UntypedStorage<1, 1>   mUnke83336;
    ::ll::UntypedStorage<8, 24>  mUnk99cedb;
    ::ll::UntypedStorage<8, 24>  mUnk6d0106;
    ::ll::UntypedStorage<4, 4>   mUnkd9418e;
    ::ll::UntypedStorage<4, 4>   mUnkd2f61c;
    ::ll::UntypedStorage<4, 4>   mUnk2efb7f;
    ::ll::UntypedStorage<4, 4>   mUnkab4437;
    ::ll::UntypedStorage<8, 24>  mUnkfc9115;
    ::ll::UntypedStorage<8, 24>  mUnkc3397b;
    ::ll::UntypedStorage<1, 1>   mUnk8bb55a;
    ::ll::UntypedStorage<1, 1>   mUnk240268;
    // NOLINTEND

public:
    // prevent constructor by default
    TransformationDescription& operator=(TransformationDescription const&);
    TransformationDescription(TransformationDescription const&);
    TransformationDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 2
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    // vIndex: 1
    virtual ~TransformationDescription() /*override*/;
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
