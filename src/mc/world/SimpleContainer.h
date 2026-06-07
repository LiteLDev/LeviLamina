#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/Container.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class SimpleContainer : public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                         mSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual void startOpen(::Actor&) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SimpleContainer(
        ::std::string const&                 name,
        bool                                 customName,
        int                                  size,
        ::SharedTypes::Legacy::ContainerType containerType
    );

#ifdef LL_PLAT_C
    MCAPI SimpleContainer(
        ::Bedrock::Safety::RedactableString const& name,
        bool                                       customName,
        int                                        size,
        ::SharedTypes::Legacy::ContainerType       containerType
    );

    MCAPI void clearContent();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& name, bool customName, int size, ::SharedTypes::Legacy::ContainerType containerType);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::Bedrock::Safety::RedactableString const& name,
        bool                                       customName,
        int                                        size,
        ::SharedTypes::Legacy::ContainerType       containerType
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCFOLD int $getContainerSize() const;

    MCFOLD int $getMaxStackSize() const;

    MCFOLD void $startOpen(::Actor&);

    MCFOLD void $stopOpen(::Actor& actor);

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
