#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockRandomOffsetDescription : public ::NetworkedBlockComponentDescription<::BlockRandomOffsetDescription> {
public:
    // BlockRandomOffsetDescription inner types declare
    // clang-format off
    struct RangeAndSteps;
    // clang-format on

    // BlockRandomOffsetDescription inner types define
    struct RangeAndSteps {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRange;
        ::ll::TypedStorage<4, 4, uint>                      mSteps;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockRandomOffsetDescription::RangeAndSteps> mRangeX;
    ::ll::TypedStorage<4, 12, ::BlockRandomOffsetDescription::RangeAndSteps> mRangeY;
    ::ll::TypedStorage<4, 12, ::BlockRandomOffsetDescription::RangeAndSteps> mRangeZ;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockRandomOffsetDescription() /*override*/ = default;

    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
