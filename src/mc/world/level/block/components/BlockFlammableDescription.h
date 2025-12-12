#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BurnOdds.h"
#include "mc/world/level/block/FlameOdds.h"
#include "mc/world/level/block/LavaFlammable.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockFlammableDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5bafc8;
    ::ll::UntypedStorage<4, 4> mUnk633d01;
    ::ll::UntypedStorage<4, 4> mUnkeedb42;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockFlammableDescription& operator=(BlockFlammableDescription const&);
    BlockFlammableDescription(BlockFlammableDescription const&);
    BlockFlammableDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual ~BlockFlammableDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockFlammableDescription(
        ::FlameOdds     catchChanceModifier,
        ::BurnOdds      destroyChanceModifier,
        ::LavaFlammable lavaFlammable
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::FlameOdds catchChanceModifier, ::BurnOdds destroyChanceModifier, ::LavaFlammable lavaFlammable);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getName() const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
