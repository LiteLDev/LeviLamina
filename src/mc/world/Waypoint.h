#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/level/WorldPosition.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ActorUniqueID;
// clang-format on

class Waypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::WorldPosition>                mWorldPos;
    ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>>  mColor;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mTexturePath;
    ::ll::TypedStorage<4, 8, ::Vec2>                          mIconSize;
    ::ll::TypedStorage<1, 1, bool>                            mIsVisible;
    ::ll::TypedStorage<1, 1, bool>                            mClientPositionAuthority;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Waypoint();

    virtual void setWorldPosition(::WorldPosition const& worldPosition);

    virtual void setColor(::std::optional<::mce::Color> const& color);

    virtual void setIsVisible(bool isVisible);

    virtual void setClientPositionAuthority(bool clientPositionAuthority);

    virtual void setTexturePath(::std::optional<::std::string> const& texturePath);

    virtual void setIconSize(::Vec2 const& iconSize);

    virtual ::std::optional<::ActorUniqueID> tryGetActorID() const;

    virtual void update(::Player const& viewingPlayer);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD ::std::optional<::mce::Color> const& getColor() const;

    MCFOLD ::Vec2 const& getIconSize() const;

    MCFOLD ::std::optional<::std::string> const& getTexturePath() const;

    MCFOLD ::WorldPosition const& getWorldPosition() const;

    MCFOLD bool isVisible() const;
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $setWorldPosition(::WorldPosition const& worldPosition);

    MCAPI void $setColor(::std::optional<::mce::Color> const& color);

    MCAPI void $setIsVisible(bool isVisible);

    MCAPI void $setClientPositionAuthority(bool clientPositionAuthority);

    MCAPI void $setTexturePath(::std::optional<::std::string> const& texturePath);

    MCAPI void $setIconSize(::Vec2 const& iconSize);

    MCFOLD ::std::optional<::ActorUniqueID> $tryGetActorID() const;

    MCFOLD void $update(::Player const& viewingPlayer);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
