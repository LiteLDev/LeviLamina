#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/Waypoint.h"
#include "mc/world/level/WorldPosition.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class ServerWaypoint : public ::Waypoint {
public:
    // ServerWaypoint inner types declare
    // clang-format off
    struct Payload;
    struct Texture;
    struct TextureSelector;
    // clang-format on

    // ServerWaypoint inner types define
    enum class UpdateFlags : uint {
        // bitfield representation
        Position                = 1u << 0,
        Visibility              = 1u << 1,
        TexturePath             = 1u << 2,
        IconSize                = 1u << 3,
        Color                   = 1u << 4,
        ClientPositionAuthority = 1u << 5,
        All                     = Position | Visibility | TexturePath | IconSize | Color | ClientPositionAuthority,
    };

    struct Payload {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                              mUpdateFlag;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>             mIsVisible;
        ::ll::TypedStorage<4, 20, ::std::optional<::WorldPosition>> mWorldPosition;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mTexturePath;
        ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>          mIconSize;
        ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>>    mColor;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>             mClientPositionAuthority;
        ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>> mActorID;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::ServerWaypoint::Payload const&) const;

        MCNAPI ~Payload();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Texture {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                  mLowerBound;
        ::ll::TypedStorage<4, 8, ::std::optional<int>> mUpperBound;
        ::ll::TypedStorage<8, 32, ::std::string>       mTexturePath;
        ::ll::TypedStorage<4, 8, ::Vec2>               mIconSize;
        // NOLINTEND
    };

    struct TextureSelector {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::ServerWaypoint::Texture>> mTextures;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                               mIsEnabled;
    ::ll::TypedStorage<8, 24, ::ServerWaypoint::TextureSelector> mTextureSelector;
    ::ll::TypedStorage<4, 4, uint>                               mUpdateFlags;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setWorldPosition(::WorldPosition const& worldPosition) /*override*/;

    virtual void setColor(::std::optional<::mce::Color> const& color) /*override*/;

    virtual void setIsVisible(bool isVisible) /*override*/;

    virtual void setClientPositionAuthority(bool clientPositionAuthority) /*override*/;

    virtual void setTexturePath(::std::optional<::std::string> const& texturePath) /*override*/;

    virtual void setIconSize(::Vec2 const& iconSize) /*override*/;

    virtual bool isValid() const;

    virtual bool calculateIsVisible(::Player const& viewingPlayer) const;

    virtual void update(::Player const& viewingPlayer) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ServerWaypoint::Payload generatePayload(uint updateFlag);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setWorldPosition(::WorldPosition const& worldPosition);

    MCNAPI void $setColor(::std::optional<::mce::Color> const& color);

    MCNAPI void $setIsVisible(bool isVisible);

    MCNAPI void $setClientPositionAuthority(bool clientPositionAuthority);

    MCNAPI void $setTexturePath(::std::optional<::std::string> const& texturePath);

    MCNAPI void $setIconSize(::Vec2 const& iconSize);

    MCNAPI bool $isValid() const;

    MCNAPI bool $calculateIsVisible(::Player const& viewingPlayer) const;

    MCNAPI void $update(::Player const& viewingPlayer);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
