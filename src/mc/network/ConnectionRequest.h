#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/certificates/identity/RawGameServerToken.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/deps/input/InputMode.h"
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class LegacyMultiplayerToken;
class MinEngineVersion;
class PrivateKeyManager;
class SerializedPersonaPieceHandle;
class SerializedSkinRef;
class TintMapColor;
class UnverifiedCertificate;
class WebToken;
struct SyncedClientOptionsComponent;
namespace Json { class Value; }
namespace mce { class Color; }
namespace mce { struct Image; }
// clang-format on

class ConnectionRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WebToken>>              mRawToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UnverifiedCertificate>> mCertificateData;
    ::ll::TypedStorage<8, 32, ::RawGameServerToken>                      mUnverifiedGameServerToken;
    ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType>                 mAuthenticationType;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionRequest& operator=(ConnectionRequest const&);
    ConnectionRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConnectionRequest(::ConnectionRequest const& other);

    MCAPI ConnectionRequest(::std::unique_ptr<::WebToken> rawToken, ::Json::Value const& authentication);

    MCFOLD ::std::vector<::AnimatedImageData> getAnimatedImageData() const;

    MCFOLD ::std::string getArmSize() const;

    MCFOLD ::std::vector<uchar> getCapeData() const;

    MCFOLD ::std::string getCapeId() const;

    MCFOLD ::std::string getClientPlatformId() const;

    MCFOLD ::std::string getClientPlatformOfflineId() const;

    MCFOLD ::std::string getClientPlatformOnlineId() const;

    MCFOLD uint64 getClientRandomId() const;

    MCFOLD ::std::string getClientThirdPartyName() const;

    MCFOLD ::std::string getDeviceId() const;

    MCAPI ::std::string getDeviceModel() const;

    MCAPI ::std::string getEduJoinerToHostNonce() const;

    MCAPI ::std::string getEduSessionToken() const;

    MCAPI ::std::string getEduTokenChain() const;

    MCFOLD ::std::vector<::SerializedPersonaPieceHandle> getPersonaPieces() const;

    MCFOLD ::std::unordered_map<::persona::PieceType, ::TintMapColor> getPieceTintColors() const;

    MCFOLD ::std::string getSelfSignedId() const;

    MCFOLD ::std::string getSkinAnimationData() const;

    MCFOLD ::mce::Color getSkinColor() const;

    MCFOLD ::std::vector<uchar> getSkinData() const;

    MCAPI ::std::string getSkinGeometry() const;

    MCFOLD ::MinEngineVersion getSkinGeometryMinEngineVersion() const;

    MCFOLD ::std::string getSkinId() const;

    MCFOLD ushort getSkinImageHeight() const;

    MCFOLD ushort getSkinImageWidth() const;

    MCAPI ::std::string getSkinResourcePatch() const;

    MCAPI bool isWellFormed() const;

    MCFOLD ::std::string toString();

    MCAPI ~ConnectionRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static void _fillPersonaJson(
        ::Json::Value&             root,
        ::std::string const&       skinId,
        ::mce::Image const&        skinImageData,
        ::std::string const&       capeId,
        ::mce::Image const&        capeImageData,
        ::SerializedSkinRef const& serializedSkin
    );

    MCAPI_C static ::ConnectionRequest create(
        ::PrivateKeyManager const&            userSigner,
        ::PlayerAuthenticationType            authenticationType,
        ::LegacyMultiplayerToken const&       legacyMultiplayerToken,
        ::RawGameServerToken const&           gameServerToken,
        ::std::string const&                  selfSignedId,
        ::std::string const&                  serverAddress,
        uint64                                clientRandomId,
        ::std::string const&                  skinId,
        ::mce::Image const&                   skinImageData,
        ::mce::Image const&                   capeImageData,
        ::SerializedSkinRef const&            serializedSkin,
        ::std::string const&                  deviceId,
        ::InputMode                           currentInputMode,
        int                                   guiScale,
        ::std::string const&                  languageCode,
        bool                                  isEditorMode,
        bool                                  isEduMode,
        ::std::unique_ptr<::WebToken>         eduTokenChain,
        ::std::string                         eduSessionToken,
        ::std::string                         eduJoinerToHostNonce,
        ::edu::Role                           classRole,
        ::std::string const&                  platformId,
        ::std::string const&                  thirdPartyName,
        ::std::string const&                  platformOnlineId,
        ::std::string const&                  platformOfflineId,
        ::std::string const&                  capeId,
        bool                                  compatibleWithClientSideChunkGen,
        ::SyncedClientOptionsComponent const& options
    );

    MCAPI static ::ConnectionRequest fromString(::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ConnectionRequest const& other);

    MCAPI void* $ctor(::std::unique_ptr<::WebToken> rawToken, ::Json::Value const& authentication);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
