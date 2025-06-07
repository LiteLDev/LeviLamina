#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class LabTableReactionComponent;
class Vec3;
// clang-format on

class LabTableReaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnka2bdfc;
    ::ll::UntypedStorage<4, 4>  mUnk9ed7f8;
    ::ll::UntypedStorage<4, 4>  mUnkaee8c3;
    ::ll::UntypedStorage<8, 8>  mUnkb0119a;
    ::ll::UntypedStorage<8, 8>  mUnk47415d;
    ::ll::UntypedStorage<8, 8>  mUnk12f9d6;
    ::ll::UntypedStorage<8, 24> mUnk352f3a;
    ::ll::UntypedStorage<1, 1>  mUnk25cd57;
    ::ll::UntypedStorage<1, 1>  mUnk85c0f5;
    // NOLINTEND

public:
    // prevent constructor by default
    LabTableReaction& operator=(LabTableReaction const&);
    LabTableReaction(LabTableReaction const&);
    LabTableReaction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LabTableReaction() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Vec3 _getTableTop() const;

    MCNAPI void addComponent(::std::unique_ptr<::LabTableReactionComponent> comp);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LabTableReaction>
    createReaction(::LabTableReactionType type, ::BlockPos const& pos, bool isClientSide);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
