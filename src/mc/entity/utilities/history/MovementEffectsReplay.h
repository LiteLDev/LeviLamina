#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/IMovementCorrection.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
// clang-format on

namespace History {

struct MovementEffectsReplay : public ::IMovementCorrection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5ab740;
    ::ll::UntypedStorage<4, 4>  mUnk5c62aa;
    ::ll::UntypedStorage<4, 4>  mUnk12db08;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementEffectsReplay& operator=(MovementEffectsReplay const&);
    MovementEffectsReplay(MovementEffectsReplay const&);
    MovementEffectsReplay();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void advanceFrame(::EntityContext& entity) const /*override*/;

#ifdef LL_PLAT_S
    virtual void advanceLiveFrame(::Actor&, ::std::optional<uint64>) /*override*/;
#else // LL_PLAT_C
    virtual void advanceLiveFrame(::Actor& actor, ::std::optional<uint64>) /*override*/;
#endif

    virtual ::std::bitset<2> getCorrectionTypeBitset() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $advanceFrame(::EntityContext& entity) const;

#ifdef LL_PLAT_S
    MCNAPI void $advanceLiveFrame(::Actor&, ::std::optional<uint64>);
#else // LL_PLAT_C
    MCNAPI void $advanceLiveFrame(::Actor& actor, ::std::optional<uint64>);
#endif

    MCNAPI ::std::bitset<2> $getCorrectionTypeBitset() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace History
