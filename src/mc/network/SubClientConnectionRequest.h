#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/certificates/identity/RawGameServerToken.h"
#include "mc/deps/input/InputMode.h"
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class MinEngineVersion;
class SerializedPersonaPieceHandle;
class SerializedSkinRef;
class TintMapColor;
class UnverifiedCertificate;
class WebToken;
struct SubClientAuthInfo;
struct SyncedClientOptionsComponent;
namespace Json { class Value; }
namespace mce { class Color; }
namespace mce { struct Image; }
// clang-format on

class SubClientConnectionRequest {
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
    SubClientConnectionRequest& operator=(SubClientConnectionRequest const&);
    SubClientConnectionRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SubClientConnectionRequest(::SubClientConnectionRequest const& other);

    MCNAPI SubClientConnectionRequest(::std::unique_ptr<::WebToken> rawToken, ::Json::Value const& authentication);

    MCNAPI ::std::vector<::AnimatedImageData> getAnimatedImageData() const;

    MCNAPI ::std::string getArmSize() const;

    MCNAPI ::std::vector<uchar> getCapeData() const;

    MCNAPI ::std::string getCapeId() const;

    MCNAPI uint64 getClientRandomId() const;

    MCNAPI ::std::string getDeviceId() const;

    MCNAPI ::std::vector<::SerializedPersonaPieceHandle> getPersonaPieces() const;

    MCNAPI ::std::unordered_map<::persona::PieceType, ::TintMapColor> getPieceTintColors() const;

    MCNAPI ::std::string getPlatformId() const;

    MCNAPI ::std::string getPlatformOfflineId() const;

    MCNAPI ::std::string getPlatformOnlineId() const;

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

    MCNAPI bool isWellFormed() const;

    MCNAPI ::std::string toString();

    MCNAPI ~SubClientConnectionRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::SubClientConnectionRequest create(
        ::SubClientAuthInfo const&            authInfo,
        ::std::string const&                  deviceId,
        ::std::string const&                  selfSignedId,
        uint64                                clientRandomId,
        ::std::string const&                  platformId,
        ::std::string const&                  skinId,
        ::mce::Image const&                   skinData,
        ::mce::Image const&                   capeData,
        ::SerializedSkinRef const&            serializedSkin,
        ::InputMode                           currentInputMode,
        ::std::string const&                  thirdPartyName,
        ::std::string const&                  platformOnlineId,
        ::std::string const&                  platformOfflineId,
        ::std::string const&                  capeId,
        bool                                  isPrimaryUser,
        bool                                  compatibleWithClientSideChunkGen,
        ::SyncedClientOptionsComponent const& options
    );

    MCNAPI static ::SubClientConnectionRequest fromString(::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubClientConnectionRequest const& other);

    MCNAPI void* $ctor(::std::unique_ptr<::WebToken> rawToken, ::Json::Value const& authentication);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
