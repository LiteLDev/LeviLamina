#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/containers/models/FilterResult.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemInstance;
class ItemStack;
// clang-format on

class CraftingContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>  mUnke10e7a;
    ::ll::UntypedStorage<1, 1>   mUnka3a651;
    ::ll::UntypedStorage<1, 1>   mUnkf72d28;
    ::ll::UntypedStorage<1, 1>   mUnkf7bb2c;
    ::ll::UntypedStorage<8, 32>  mUnk8645c4;
    ::ll::UntypedStorage<8, 32>  mUnk36c339;
    ::ll::UntypedStorage<8, 16>  mUnkebc2a3;
    ::ll::UntypedStorage<8, 16>  mUnkc8355f;
    ::ll::UntypedStorage<8, 16>  mUnk34e6f8;
    ::ll::UntypedStorage<8, 152> mUnka7fefd;
    ::ll::UntypedStorage<8, 64>  mUnk76ba93;
    ::ll::UntypedStorage<8, 128> mUnkf4a0d1;
    ::ll::UntypedStorage<4, 4>   mUnkc2a017;
    ::ll::UntypedStorage<8, 8>   mUnk10203a;
    ::ll::UntypedStorage<8, 8>   mUnk6d4275;
    ::ll::UntypedStorage<8, 8>   mUnk446f9e;
    ::ll::UntypedStorage<8, 8>   mUnk75de44;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContainerManagerModel& operator=(CraftingContainerManagerModel const&);
    CraftingContainerManagerModel(CraftingContainerManagerModel const&);
    CraftingContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftingContainerManagerModel() /*override*/ = default;

    // vIndex: 7
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    // vIndex: 8
    virtual void setSlot(int, ::ItemStack const&, bool) /*override*/;

    // vIndex: 9
    virtual ::ItemStack const& getSlot(int) const /*override*/;

    // vIndex: 10
    virtual void setData(int, int) /*override*/;

    // vIndex: 13
    virtual void broadcastChanges() /*override*/;

    // vIndex: 19
    virtual bool isValid(float pickRange) /*override*/;

    // vIndex: 14
    virtual bool tick() /*override*/;

    // vIndex: 20
    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
