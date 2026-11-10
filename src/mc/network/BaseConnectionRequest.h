#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/certificates/identity/RawGameServerToken.h"
#include "mc/client/gui/oreui/binding/queries/core/PlatformType.h"
#include "mc/deps/certificates/WebToken.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/json/Value.h"
#include "mc/deps/shared_types/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class MinEngineVersion;
class SerializedPersonaPieceHandle;
class TintMapColor;
struct ConnectionAuthInfo;
struct ConnectionSkinInfo;
namespace Social { struct Nonce; }
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
        ::ll::TypedStorage<8, 136, ::std::optional<::WebToken>> rawToken;
        ::ll::TypedStorage<8, 16, ::Json::Value>                authData;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ParsedConnectionString();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::std::optional<::WebToken>> mRawToken;
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
    MCNAPI BaseConnectionRequest(::BaseConnectionRequest const& other);

    MCNAPI BaseConnectionRequest(::std::optional<::WebToken> rawToken, ::Json::Value const& authentication);

    MCAPI ::std::vector<::AnimatedImageData> getAnimatedImageData() const;

    MCAPI ::std::string getArmSize() const;

    MCAPI ::std::vector<uchar> getCapeData() const;

    MCAPI ::std::string getCapeId() const;

    MCAPI ushort getCapeImageHeight() const;

    MCAPI ushort getCapeImageWidth() const;

    MCNAPI uint64 getClientRandomId() const;

    MCNAPI ::InputMode getCurrentInputMode() const;

    MCAPI ::std::string getDeviceId() const;

    MCAPI ::BuildPlatform getDeviceOS() const;

    MCNAPI ::std::string getLanguageCode() const;

    MCNAPI ::std::optional<::Social::Nonce> getNonce() const;

    MCAPI ::std::vector<::SerializedPersonaPieceHandle> getPersonaPieces() const;

    MCAPI ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> getPieceTintColors() const;

    MCNAPI ::std::string getPlatformId() const;

    MCAPI ::std::string getPlatformOfflineId() const;

    MCAPI ::std::string getPlatformOnlineId() const;

    MCNAPI ::PlatformType getPlatformType() const;

    MCAPI ::std::string getProfileHash() const;

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

    MCNAPI bool isCompatibleWithClientSideChunkGen() const;

    MCAPI bool isOverrideSkin() const;

    MCAPI bool isPersonaSkin() const;

    MCAPI bool isPremiumSkin() const;

    MCAPI bool isTrustedSkin() const;

    MCNAPI bool isWellFormed() const;

    MCNAPI ::std::string toString();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::Json::Value _createAuthJson(::ConnectionAuthInfo const& authInfo);

    MCNAPI static void _fillPersonaJson(::Json::Value& root, ::ConnectionSkinInfo const& skinInfo);
#endif

    MCNAPI static ::BaseConnectionRequest::ParsedConnectionString _parseConnectionString(::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BaseConnectionRequest const& other);

    MCNAPI void* $ctor(::std::optional<::WebToken> rawToken, ::Json::Value const& authentication);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
