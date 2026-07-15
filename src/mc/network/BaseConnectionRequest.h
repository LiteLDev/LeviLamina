#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/certificates/identity/RawGameServerToken.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/json/Value.h"
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class MinEngineVersion;
class SerializedPersonaPieceHandle;
class TintMapColor;
class WebToken;
struct ConnectionAuthInfo;
struct ConnectionSkinInfo;
namespace mce { class Color; }
// clang-format on

class BaseConnectionRequest {
public:
    // BaseConnectionRequest inner types declare
    // clang-format off
    struct ParsedConnectionString;
    // clang-format on

    // BaseConnectionRequest inner types define
    struct ParsedConnectionString {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WebToken>> rawToken;
        ::ll::TypedStorage<8, 16, ::Json::Value>                authData;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ParsedConnectionString();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WebToken>> mRawToken;
    ::ll::TypedStorage<8, 32, ::RawGameServerToken>         mUnverifiedGameServerToken;
    ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType>    mAuthenticationType;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseConnectionRequest& operator=(BaseConnectionRequest const&);
    BaseConnectionRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseConnectionRequest();

    virtual bool _isAuthTypeWellFormed() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseConnectionRequest(::BaseConnectionRequest const& other);

    MCAPI BaseConnectionRequest(::std::unique_ptr<::WebToken> rawToken, ::Json::Value const& authentication);

    MCAPI bool _isUsingRestrictedIds() const;

    MCAPI ::std::vector<::AnimatedImageData> getAnimatedImageData() const;

    MCAPI ::std::string getArmSize() const;

    MCAPI ::std::vector<uchar> getCapeData() const;

    MCAPI ::std::string getCapeId() const;

    MCAPI ushort getCapeImageHeight() const;

    MCAPI ushort getCapeImageWidth() const;

    MCAPI uint64 getClientRandomId() const;

    MCAPI ::InputMode getCurrentInputMode() const;

    MCAPI ::std::string getDeviceId() const;

    MCAPI ::BuildPlatform getDeviceOS() const;

    MCAPI ::std::string getLanguageCode() const;

    MCAPI ::std::vector<::SerializedPersonaPieceHandle> getPersonaPieces() const;

    MCAPI ::std::unordered_map<::persona::PieceType, ::TintMapColor> getPieceTintColors() const;

    MCAPI ::std::string getPlatformId() const;

    MCAPI ::std::string getPlatformOfflineId() const;

    MCAPI ::std::string getPlatformOnlineId() const;

    MCAPI ::PlatformType getPlatformType() const;

    MCAPI ::std::string getSelfSignedId() const;

    MCAPI ::std::string getSkinAnimationData() const;

    MCAPI ::mce::Color getSkinColor() const;

    MCAPI ::std::vector<uchar> getSkinData() const;

    MCAPI ::std::string getSkinGeometry() const;

    MCAPI ::MinEngineVersion getSkinGeometryMinEngineVersion() const;

    MCAPI ::std::string getSkinId() const;

    MCAPI ushort getSkinImageHeight() const;

    MCAPI ushort getSkinImageWidth() const;

    MCAPI ::std::string getSkinResourcePatch() const;

    MCAPI ::std::string getThirdPartyName() const;

    MCAPI bool isCapeOnClassicSkin() const;

    MCAPI bool isCompatibleWithClientSideChunkGen() const;

    MCAPI bool isOverrideSkin() const;

    MCAPI bool isPersonaSkin() const;

    MCAPI bool isPremiumSkin() const;

    MCAPI bool isTrustedSkin() const;

    MCAPI bool isWellFormed() const;

    MCAPI ::std::string toString();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::Json::Value _createAuthJson(::ConnectionAuthInfo const& authInfo);

    MCAPI static void _fillPersonaJson(::Json::Value& root, ::ConnectionSkinInfo const& skinInfo);
#endif

    MCAPI static ::BaseConnectionRequest::ParsedConnectionString _parseConnectionString(::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BaseConnectionRequest const& other);

    MCAPI void* $ctor(::std::unique_ptr<::WebToken> rawToken, ::Json::Value const& authentication);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
