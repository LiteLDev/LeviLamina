#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/input/InputMode.h"
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
struct RawGameServerToken;
struct SyncedClientOptionsComponent;
namespace Json { class Value; }
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
        ::ll::UntypedStorage<8, 8>  mUnkc8a2bf;
        ::ll::UntypedStorage<8, 16> mUnk86437a;
        // NOLINTEND

    public:
        // prevent constructor by default
        ParsedConnectionString& operator=(ParsedConnectionString const&);
        ParsedConnectionString(ParsedConnectionString const&);
        ParsedConnectionString();

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
    ::ll::UntypedStorage<8, 8>  mUnk2beee2;
    ::ll::UntypedStorage<8, 32> mUnkc0eefb;
    ::ll::UntypedStorage<4, 4>  mUnke8a30e;
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

    MCNAPI BaseConnectionRequest(::std::unique_ptr<::WebToken> rawToken, ::Json::Value const& authentication);

    MCNAPI ::RawGameServerToken const& _getGameServerToken() const;

    MCNAPI ::WebToken const& _getRawRequest() const;

    MCNAPI bool _isUsingRestrictedIds() const;

    MCNAPI ::std::vector<::AnimatedImageData> getAnimatedImageData() const;

    MCNAPI ::std::string getArmSize() const;

    MCNAPI ::PlayerAuthenticationType getAuthenticationType() const;

    MCNAPI ::std::vector<uchar> getCapeData() const;

    MCNAPI ::std::string getCapeId() const;

    MCNAPI ushort getCapeImageHeight() const;

    MCNAPI ushort getCapeImageWidth() const;

    MCNAPI ::SyncedClientOptionsComponent getClientOptions() const;

    MCNAPI uint64 getClientRandomId() const;

    MCNAPI ::InputMode getCurrentInputMode() const;

    MCNAPI ::std::string getDeviceId() const;

    MCNAPI ::BuildPlatform getDeviceOS() const;

    MCNAPI ::std::string getLanguageCode() const;

    MCNAPI ::std::vector<::SerializedPersonaPieceHandle> getPersonaPieces() const;

    MCNAPI ::std::unordered_map<::persona::PieceType, ::TintMapColor> getPieceTintColors() const;

    MCNAPI ::std::string getPlatformId() const;

    MCNAPI ::std::string getPlatformOfflineId() const;

    MCNAPI ::std::string getPlatformOnlineId() const;

    MCNAPI ::PlatformType getPlatformType() const;

    MCNAPI ::std::string getSelfSignedId() const;

    MCNAPI ::std::string getSkinAnimationData() const;

    MCNAPI ::mce::Color getSkinColor() const;

    MCNAPI ::std::vector<uchar> getSkinData() const;

    MCNAPI ::std::string getSkinGeometry() const;

    MCNAPI ::MinEngineVersion getSkinGeometryMinEngineVersion() const;

    MCNAPI ::std::string getSkinId() const;

    MCNAPI ushort getSkinImageHeight() const;

    MCNAPI ushort getSkinImageWidth() const;

    MCNAPI ::std::string getSkinResourcePatch() const;

    MCNAPI ::std::string getThirdPartyName() const;

    MCNAPI bool isCapeOnClassicSkin() const;

    MCNAPI bool isCompatibleWithClientSideChunkGen() const;

    MCNAPI bool isOverrideSkin() const;

    MCNAPI bool isPersonaSkin() const;

    MCNAPI bool isPremiumSkin() const;

    MCNAPI bool isTrustedSkin() const;

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

    MCNAPI void* $ctor(::std::unique_ptr<::WebToken> rawToken, ::Json::Value const& authentication);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
