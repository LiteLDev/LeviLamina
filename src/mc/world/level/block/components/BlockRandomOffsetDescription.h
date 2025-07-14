#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
        ::ll::UntypedStorage<4, 8> mUnk825039;
        ::ll::UntypedStorage<4, 4> mUnk418573;
        // NOLINTEND

    public:
        // prevent constructor by default
        RangeAndSteps& operator=(RangeAndSteps const&);
        RangeAndSteps(RangeAndSteps const&);
        RangeAndSteps();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkc9049f;
    ::ll::UntypedStorage<4, 12> mUnk1f530c;
    ::ll::UntypedStorage<4, 12> mUnk84b246;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRandomOffsetDescription& operator=(BlockRandomOffsetDescription const&);
    BlockRandomOffsetDescription(BlockRandomOffsetDescription const&);
    BlockRandomOffsetDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockRandomOffsetDescription() /*override*/ = default;

    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 2
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    // vIndex: 4
    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getName() const;

    MCNAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
