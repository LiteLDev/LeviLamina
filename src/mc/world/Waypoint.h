#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ActorUniqueID;
struct WorldPosition;
namespace mce { class Color; }
// clang-format on

class Waypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk8e996a;
    ::ll::UntypedStorage<4, 20> mUnk58405a;
    ::ll::UntypedStorage<4, 8>  mUnkff92ce;
    ::ll::UntypedStorage<1, 1>  mUnkb11055;
    ::ll::UntypedStorage<1, 1>  mUnk712185;
    // NOLINTEND

public:
    // prevent constructor by default
    Waypoint& operator=(Waypoint const&);
    Waypoint(Waypoint const&);
    Waypoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Waypoint() = default;

    virtual void setWorldPosition(::WorldPosition const& worldPosition);

    virtual void setColor(::std::optional<::mce::Color> const& color);

    virtual void setIsVisible(bool isVisible);

    virtual void setClientPositionAuthority(bool clientPositionAuthority);

    virtual void setTextureId(::std::optional<uint> const& textureId);

    virtual ::std::optional<::ActorUniqueID> tryGetActorID() const;

    virtual void update(::Player const& viewingPlayer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setWorldPosition(::WorldPosition const& worldPosition);

    MCNAPI void $setColor(::std::optional<::mce::Color> const& color);

    MCNAPI void $setIsVisible(bool isVisible);

    MCNAPI void $setClientPositionAuthority(bool clientPositionAuthority);

    MCNAPI void $setTextureId(::std::optional<uint> const& textureId);

    MCNAPI ::std::optional<::ActorUniqueID> $tryGetActorID() const;

    MCNAPI void $update(::Player const& viewingPlayer);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
